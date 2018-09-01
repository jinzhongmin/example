#include <gtk/gtk.h>
#include <string.h>

#define ConnectFuncArgs                                                        \
  GtkBuilder *builder, GObject *object, const gchar *signal_name,              \
      const gchar *handler_name, GObject *connect_object, GConnectFlags flags, \
      gpointer user_data

void sh() {
  printf("Hello\n");
}

void qt() {
  gtk_main_quit();
}

void ConnectFunc(ConnectFuncArgs) {
  if (strcmp(handler_name, "SayHello") == 0) {
    g_signal_connect(object, signal_name, sh, user_data);
  } else if (strcmp(handler_name, "quit") == 0) {
    g_signal_connect(object, signal_name, qt, user_data);
  }
}

int main(int argc, char* argv[]) {
  GtkWidget* window;
  GtkBuilder* builder;

  gtk_init(&argc, &argv);

  builder = gtk_builder_new();
  gtk_builder_add_from_file(builder, "style.ui", NULL);

  gtk_builder_connect_signals_full(builder, ConnectFunc, NULL);

  window = GTK_WIDGET(gtk_builder_get_object(builder, "window"));
  gtk_widget_show_all(window);
  gtk_main();
  return 0;
}
