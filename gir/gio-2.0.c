/************************************************************/
/* THIS FILE IS GENERATED DO NOT EDIT */
/************************************************************/

/**
 * GAction:enabled:
 *
 * If @action is currently enabled.
 *
 * If the action is disabled then calls to g_action_activate() and
 * g_action_change_state() have no effect.
 *
 * Since: 2.28
 */


/**
 * GAction:name:
 *
 * The name of the action.  This is mostly meaningful for identifying
 * the action once it has been added to a #GActionGroup.
 *
 * Since: 2.28
 */


/**
 * GAction:parameter-type:
 *
 * The type of the parameter that must be given when activating the
 * action.
 *
 * Since: 2.28
 */


/**
 * GAction:state:
 *
 * The state of the action, or %NULL if the action is stateless.
 *
 * Since: 2.28
 */


/**
 * GAction:state-type:
 *
 * The #GVariantType of the state that the action has, or %NULL if the
 * action is stateless.
 *
 * Since: 2.28
 */


/**
 * GActionEntry:
 * @name: the name of the action
 * @activate: the callback to connect to the "activate" signal of the action
 * @parameter_type: the type of the parameter that must be passed to the activate function for this action, given as a single GVariant type string (or %NULL for no parameter)
 * @state: the initial state for this action, given in GVariant text format.  The state is parsed with no extra type information, so type tags must be added to the string if they are necessary.
 * @change_state: the callback to connect to the "change-state" signal of the action
 *
 * This struct defines a single action.  It is for use with
 * g_action_map_add_action_entries().
 *
 * The order of the items in the structure are intended to reflect
 * frequency of use.  It is permissible to use an incomplete initialiser
 * in order to leave some of the later values as %NULL.  All values
 * after @name are optional.  Additional optional fields may be added in
 * the future.
 *
 * See g_action_map_add_action_entries() for an example.
 */


/**
 * GActionGroup::action-added:
 * @action_group: the #GActionGroup that changed
 * @action_name: the name of the action in @action_group
 *
 * Signals that a new action was just added to the group.
 * This signal is emitted after the action has been added
 * and is now visible.
 *
 * Since: 2.28
 */


/**
 * GActionGroup::action-enabled-changed:
 * @action_group: the #GActionGroup that changed
 * @action_name: the name of the action in @action_group
 * @enabled: whether the action is enabled or not
 *
 * Signals that the enabled status of the named action has changed.
 *
 * Since: 2.28
 */


/**
 * GActionGroup::action-removed:
 * @action_group: the #GActionGroup that changed
 * @action_name: the name of the action in @action_group
 *
 * Signals that an action is just about to be removed from the group.
 * This signal is emitted before the action is removed, so the action
 * is still visible and can be queried from the signal handler.
 *
 * Since: 2.28
 */


/**
 * GActionGroup::action-state-changed:
 * @action_group: the #GActionGroup that changed
 * @action_name: the name of the action in @action_group
 * @value: the new value of the state
 *
 * Signals that the state of the named action has changed.
 *
 * Since: 2.28
 */


/**
 * GActionGroupInterface:
 * @has_action: the virtual function pointer for g_action_group_has_action()
 * @list_actions: the virtual function pointer for g_action_group_list_actions()
 * @get_action_parameter_type: the virtual function pointer for g_action_group_get_action_parameter_type()
 * @get_action_state_type: the virtual function pointer for g_action_group_get_action_state_type()
 * @get_action_state_hint: the virtual function pointer for g_action_group_get_action_state_hint()
 * @get_action_enabled: the virtual function pointer for g_action_group_get_action_enabled()
 * @get_action_state: the virtual function pointer for g_action_group_get_action_state()
 * @change_action_state: the virtual function pointer for g_action_group_change_action_state()
 * @query_action: the virtual function pointer for g_action_group_query_action()
 * @activate_action: the virtual function pointer for g_action_group_activate_action()
 * @action_added: the class closure for the #GActionGroup::action-added signal
 * @action_removed: the class closure for the #GActionGroup::action-removed signal
 * @action_enabled_changed: the class closure for the #GActionGroup::action-enabled-changed signal
 * @action_state_changed: the class closure for the #GActionGroup::action-enabled-changed signal
 *
 * The virtual function table for #GActionGroup.
 *
 * Since: 2.28
 */


/**
 * GActionInterface:
 * @get_name: the virtual function pointer for g_action_get_name()
 * @get_parameter_type: the virtual function pointer for g_action_get_parameter_type()
 * @get_state_type: the virtual function pointer for g_action_get_state_type()
 * @get_state_hint: the virtual function pointer for g_action_get_state_hint()
 * @get_enabled: the virtual function pointer for g_action_get_enabled()
 * @get_state: the virtual function pointer for g_action_get_state()
 * @change_state: the virtual function pointer for g_action_change_state()
 * @activate: the virtual function pointer for g_action_activate().  Note that #GAction does not have an 'activate' signal but that implementations of it may have one.
 *
 * The virtual function table for #GAction.
 *
 * Since: 2.28
 */


/**
 * GActionMapInterface:
 * @lookup_action: the virtual function pointer for g_action_map_lookup_action()
 * @add_action: the virtual function pointer for g_action_map_add_action()
 * @remove_action: the virtual function pointer for g_action_map_remove_action()
 *
 * The virtual function table for #GActionMap.
 *
 * Since: 2.32
 */


/**
 * GApplication::activate:
 * @application: the application
 *
 * The ::activate signal is emitted on the primary instance when an
 * activation occurs. See g_application_activate().
 */


/**
 * GApplication::command-line:
 * @application: the application
 * @command_line: a #GApplicationCommandLine representing the passed commandline
 *
 * The ::command-line signal is emitted on the primary instance when
 * a commandline is not handled locally. See g_application_run() and
 * the #GApplicationCommandLine documentation for more information.
 *
 * Returns: An integer that is set as the exit status for the calling process. See g_application_command_line_set_exit_status().
 */


/**
 * GApplication::open:
 * @application: the application
 * @files: (array length=n_files) (element-type GFile): an array of #GFiles
 * @n_files: the length of @files
 * @hint: a hint provided by the calling instance
 *
 * The ::open signal is emitted on the primary instance when there are
 * files to open. See g_application_open() for more information.
 */


/**
 * GApplication::shutdown:
 * @application: the application
 *
 * The ::shutdown signal is emitted only on the registered primary instance
 * immediately after the main loop terminates.
 */


/**
 * GApplication::startup:
 * @application: the application
 *
 * The ::startup signal is emitted on the primary instance immediately
 * after registration. See g_application_register().
 */


/**
 * GApplicationClass:
 * @startup: invoked on the primary instance immediately after registration
 * @shutdown: invoked only on the registered primary instance immediately after the main loop terminates
 * @activate: invoked on the primary instance when an activation occurs
 * @open: invoked on the primary instance when there are files to open
 * @command_line: invoked on the primary instance when a command-line is not handled locally
 * @local_command_line: invoked (locally) when the process has been invoked via commandline execution (as opposed to, say, D-Bus activation - which is not currently supported by GApplication). The virtual function has the chance to inspect (and possibly replace) the list of command line arguments. See g_application_run() for more information.
 * @before_emit: invoked on the primary instance before 'activate', 'open', 'command-line' or any action invocation, gets the 'platform data' from the calling instance
 * @after_emit: invoked on the primary instance after 'activate', 'open', 'command-line' or any action invocation, gets the 'platform data' from the calling instance
 * @add_platform_data: invoked (locally) to add 'platform data' to be sent to the primary instance when activating, opening or invoking actions
 * @quit_mainloop: Used to be invoked on the primary instance when the use count of the application drops to zero (and after any inactivity timeout, if requested). Not used anymore since 2.32
 * @run_mainloop: Used to be invoked on the primary instance from g_application_run() if the use-count is non-zero. Since 2.32, GApplication is iterating the main context directly and is not using @run_mainloop anymore
 *
 * Virtual function table for #GApplication.
 *
 * Since: 2.28
 */


/**
 * GApplicationCommandLineClass:
 *
 * The <structname>GApplicationCommandLineClass</structname> structure
 * contains private data only
 *
 * Since: 2.28
 */


/**
 * GCancellable::cancelled:
 * @cancellable: a #GCancellable.
 *
 * Emitted when the operation has been cancelled.
 *
 * Can be used by implementations of cancellable operations. If the
 * operation is cancelled from another thread, the signal will be
 * emitted in the thread that cancelled the operation, not the
 * thread that is running the operation.
 *
 * Note that disconnecting from this signal (or any signal) in a
 * multi-threaded program is prone to race conditions. For instance
 * it is possible that a signal handler may be invoked even
 * <emphasis>after</emphasis> a call to
 * g_signal_handler_disconnect() for that handler has already
 * returned.
 *
 * There is also a problem when cancellation happen
 * right before connecting to the signal. If this happens the
 * signal will unexpectedly not be emitted, and checking before
 * connecting to the signal leaves a race condition where this is
 * still happening.
 *
 * In order to make it safe and easy to connect handlers there
 * are two helper functions: g_cancellable_connect() and
 * g_cancellable_disconnect() which protect against problems
 * like this.
 *
 * An example of how to us this:
 * |[
 *     /<!-- -->* Make sure we don't do any unnecessary work if already cancelled *<!-- -->/
 *     if (g_cancellable_set_error_if_cancelled (cancellable))
 *       return;
 *
 *     /<!-- -->* Set up all the data needed to be able to
 *      * handle cancellation of the operation *<!-- -->/
 *     my_data = my_data_new (...);
 *
 *     id = 0;
 *     if (cancellable)
 *       id = g_cancellable_connect (cancellable,
 *     			      G_CALLBACK (cancelled_handler)
 *     			      data, NULL);
 *
 *     /<!-- -->* cancellable operation here... *<!-- -->/
 *
 *     g_cancellable_disconnect (cancellable, id);
 *
 *     /<!-- -->* cancelled_handler is never called after this, it
 *      * is now safe to free the data *<!-- -->/
 *     my_data_free (my_data);
 * ]|
 *
 * Note that the cancelled signal is emitted in the thread that
 * the user cancelled from, which may be the main thread. So, the
 * cancellable signal should not do something that can block.
 */


/**
 * GCharsetConverter:
 *
 * Conversions between character sets.
 */


/**
 * GCredentials:
 *
 * The #GCredentials structure contains only private data and
 * should only be accessed using the provided API.
 *
 * Since: 2.26
 */


/**
 * GCredentialsClass:
 *
 * Class structure for #GCredentials.
 *
 * Since: 2.26
 */


/**
 * GDBusAuthMechanism:credentials:
 *
 * If authenticating as a server, this property contains the
 * received credentials, if any.
 *
 * If authenticating as a client, the property contains the
 * credentials that were sent, if any.
 */


/**
 * GDBusAuthObserver:
 *
 * The #GDBusAuthObserver structure contains only private data and
 * should only be accessed using the provided API.
 *
 * Since: 2.26
 */


/**
 * GDBusAuthObserver::allow-mechanism:
 * @observer: The #GDBusAuthObserver emitting the signal.
 * @mechanism: The name of the mechanism, e.g. <literal>DBUS_COOKIE_SHA1</literal>.
 *
 * Emitted to check if @mechanism is allowed to be used.
 *
 * Returns: %TRUE if @mechanism can be used to authenticate the other peer, %FALSE if not.
 * Since: 2.34
 */


/**
 * GDBusAuthObserver::authorize-authenticated-peer:
 * @observer: The #GDBusAuthObserver emitting the signal.
 * @stream: A #GIOStream for the #GDBusConnection.
 * @credentials: (allow-none): Credentials received from the peer or %NULL.
 *
 * Emitted to check if a peer that is successfully authenticated
 * is authorized.
 *
 * Returns: %TRUE if the peer is authorized, %FALSE if not.
 * Since: 2.26
 */


/**
 * GDBusAuthObserverClass:
 * @authorize_authenticated_peer: Signal class handler for the #GDBusAuthObserver::authorize-authenticated-peer signal.
 *
 * Class structure for #GDBusAuthObserverClass.
 *
 * Since: 2.26
 */


/**
 * GDBusConnection:
 *
 * The #GDBusConnection structure contains only private data and
 * should only be accessed using the provided API.
 *
 * Since: 2.26
 */


/**
 * GDBusConnection::closed:
 * @connection: The #GDBusConnection emitting the signal.
 * @remote_peer_vanished: %TRUE if @connection is closed because the remote peer closed its end of the connection.
 * @error: A #GError with more details about the event or %NULL.
 *
 * Emitted when the connection is closed.
 *
 * The cause of this event can be
 * <itemizedlist>
 * <listitem><para>
 *    If g_dbus_connection_close() is called. In this case
 *    @remote_peer_vanished is set to %FALSE and @error is %NULL.
 * </para></listitem>
 * <listitem><para>
 *    If the remote peer closes the connection. In this case
 *    @remote_peer_vanished is set to %TRUE and @error is set.
 * </para></listitem>
 * <listitem><para>
 *    If the remote peer sends invalid or malformed data. In this
 *    case @remote_peer_vanished is set to %FALSE and @error
 *    is set.
 * </para></listitem>
 * </itemizedlist>
 *
 * Upon receiving this signal, you should give up your reference to
 * @connection. You are guaranteed that this signal is emitted only
 * once.
 *
 * Since: 2.26
 */


/**
 * GDBusConnection:address:
 *
 * A D-Bus address specifying potential endpoints that can be used
 * when establishing the connection.
 *
 * Since: 2.26
 */


/**
 * GDBusConnection:authentication-observer:
 *
 * A #GDBusAuthObserver object to assist in the authentication process or %NULL.
 *
 * Since: 2.26
 */


/**
 * GDBusConnection:capabilities:
 *
 * Flags from the #GDBusCapabilityFlags enumeration
 * representing connection features negotiated with the other peer.
 *
 * Since: 2.26
 */


/**
 * GDBusConnection:closed:
 *
 * A boolean specifying whether the connection has been closed.
 *
 * Since: 2.26
 */


/**
 * GDBusConnection:exit-on-close:
 *
 * A boolean specifying whether the process will be terminated (by
 * calling <literal>raise(SIGTERM)</literal>) if the connection
 * is closed by the remote peer.
 *
 * Note that #GDBusConnection objects returned by g_bus_get_finish() and
 * g_bus_get_sync() will (usually) have this property set to %TRUE.
 *
 * Since: 2.26
 */


/**
 * GDBusConnection:flags:
 *
 * Flags from the #GDBusConnectionFlags enumeration.
 *
 * Since: 2.26
 */


/**
 * GDBusConnection:guid:
 *
 * The GUID of the peer performing the role of server when
 * authenticating.
 *
 * If you are constructing a #GDBusConnection and pass
 * %G_DBUS_CONNECTION_FLAGS_AUTHENTICATION_SERVER in the
 * #GDBusConnection:flags property then you MUST also set this
 * property to a valid guid.
 *
 * If you are constructing a #GDBusConnection and pass
 * %G_DBUS_CONNECTION_FLAGS_AUTHENTICATION_CLIENT in the
 * #GDBusConnection:flags property you will be able to read the GUID
 * of the other peer here after the connection has been successfully
 * initialized.
 *
 * Since: 2.26
 */


/**
 * GDBusConnection:locked:
 *
 * A boolean specifying whether the message is locked.
 *
 * Since: 2.26
 */


/**
 * GDBusConnection:stream:
 *
 * The underlying #GIOStream used for I/O.
 *
 * If this is passed on construction and is a #GSocketConnection,
 * then the corresponding #GSocket will be put into non-blocking mode.
 *
 * While the #GDBusConnection is active, it will interact with this
 * stream from a worker thread, so it is not safe to interact with
 * the stream directly.
 *
 * Since: 2.26
 */


/**
 * GDBusConnection:unique-name:
 *
 * The unique name as assigned by the message bus or %NULL if the
 * connection is not open or not a message bus connection.
 *
 * Since: 2.26
 */


/**
 * GDBusConnectionClass:
 * @closed: Signal class handler for the #GDBusConnection::closed signal.
 *
 * Class structure for #GDBusConnection.
 *
 * Since: 2.26
 */


/**
 * GDBusInterfaceSkeleton::g-authorize-method:
 * @interface: The #GDBusInterfaceSkeleton emitting the signal.
 * @invocation: A #GDBusMethodInvocation.
 *
 * Emitted when a method is invoked by a remote caller and used to
 * determine if the method call is authorized.
 *
 * Note that this signal is emitted in a thread dedicated to
 * handling the method call so handlers are allowed to perform
 * blocking IO. This means that it is appropriate to call
 * e.g. <ulink
 * url="http://hal.freedesktop.org/docs/polkit/PolkitAuthority.html#polkit-authority-check-authorization-sync">polkit_authority_check_authorization_sync()</ulink>
 * with the <ulink
 * url="http://hal.freedesktop.org/docs/polkit/PolkitAuthority.html#POLKIT-CHECK-AUTHORIZATION-FLAGS-ALLOW-USER-INTERACTION:CAPS">POLKIT_CHECK_AUTHORIZATION_FLAGS_ALLOW_USER_INTERACTION</ulink> flag set.
 *
 * If %FALSE is returned then no further handlers are run and the
 * signal handler must take a reference to @invocation and finish
 * handling the call (e.g. return an error via
 * g_dbus_method_invocation_return_error()).
 *
 * Otherwise, if %TRUE is returned, signal emission continues. If no
 * handlers return %FALSE, then the method is dispatched. If
 * @interface has an enclosing #GDBusObjectSkeleton, then the
 * #GDBusObjectSkeleton::authorize-method signal handlers run before
 * the handlers for this signal.
 *
 * The default class handler just returns %TRUE.
 *
 * Please note that the common case is optimized: if no signals
 * handlers are connected and the default class handler isn't
 * overridden (for both @interface and the enclosing
 * #GDBusObjectSkeleton, if any) and #GDBusInterfaceSkeleton:g-flags does
 * not have the
 * %G_DBUS_INTERFACE_SKELETON_FLAGS_HANDLE_METHOD_INVOCATIONS_IN_THREAD
 * flags set, no dedicated thread is ever used and the call will be
 * handled in the same thread as the object that @interface belongs
 * to was exported in.
 *
 * Returns: %TRUE if the call is authorized, %FALSE otherwise.
 * Since: 2.30
 */


/**
 * GDBusInterfaceSkeleton:g-flags:
 *
 * Flags from the #GDBusInterfaceSkeletonFlags enumeration.
 *
 * Since: 2.30
 */


/**
 * GDBusMessage:
 *
 * The #GDBusMessage structure contains only private data and should
 * only be accessed using the provided API.
 *
 * Since: 2.26
 */


/**
 * GDBusMessageClass:
 *
 * Class structure for #GDBusMessage.
 *
 * Since: 2.26
 */


/**
 * GDBusMethodInvocation:
 *
 * The #GDBusMethodInvocation structure contains only private data and
 * should only be accessed using the provided API.
 *
 * Since: 2.26
 */


/**
 * GDBusMethodInvocationClass:
 *
 * Class structure for #GDBusMethodInvocation.
 *
 * Since: 2.26
 */


/**
 * GDBusObject::interface-added:
 * @object: The #GDBusObject emitting the signal.
 * @interface: The #GDBusInterface that was added.
 *
 * Emitted when @interface is added to @object.
 *
 * Since: 2.30
 */


/**
 * GDBusObject::interface-removed:
 * @object: The #GDBusObject emitting the signal.
 * @interface: The #GDBusInterface that was removed.
 *
 * Emitted when @interface is removed from @object.
 *
 * Since: 2.30
 */


/**
 * GDBusObjectManager::interface-added:
 * @manager: The #GDBusObjectManager emitting the signal.
 * @object: The #GDBusObject on which an interface was added.
 * @interface: The #GDBusInterface that was added.
 *
 * Emitted when @interface is added to @object.
 *
 * This signal exists purely as a convenience to avoid having to
 * connect signals to all objects managed by @manager.
 *
 * Since: 2.30
 */


/**
 * GDBusObjectManager::interface-removed:
 * @manager: The #GDBusObjectManager emitting the signal.
 * @object: The #GDBusObject on which an interface was removed.
 * @interface: The #GDBusInterface that was removed.
 *
 * Emitted when @interface has been removed from @object.
 *
 * This signal exists purely as a convenience to avoid having to
 * connect signals to all objects managed by @manager.
 *
 * Since: 2.30
 */


/**
 * GDBusObjectManager::object-added:
 * @manager: The #GDBusObjectManager emitting the signal.
 * @object: The #GDBusObject that was added.
 *
 * Emitted when @object is added to @manager.
 *
 * Since: 2.30
 */


/**
 * GDBusObjectManager::object-removed:
 * @manager: The #GDBusObjectManager emitting the signal.
 * @object: The #GDBusObject that was removed.
 *
 * Emitted when @object is removed from @manager.
 *
 * Since: 2.30
 */


/**
 * GDBusObjectManagerClient::interface-proxy-properties-changed:
 * @manager: The #GDBusObjectManagerClient emitting the signal.
 * @object_proxy: The #GDBusObjectProxy on which an interface has properties that are changing.
 * @interface_proxy: The #GDBusProxy that has properties that are changing.
 * @changed_properties: A #GVariant containing the properties that changed.
 * @invalidated_properties: A %NULL terminated array of properties that was invalidated.
 *
 * Emitted when one or more D-Bus properties on proxy changes. The
 * local cache has already been updated when this signal fires. Note
 * that both @changed_properties and @invalidated_properties are
 * guaranteed to never be %NULL (either may be empty though).
 *
 * This signal exists purely as a convenience to avoid having to
 * connect signals to all interface proxies managed by @manager.
 *
 * This signal is emitted in the
 * <link linkend="g-main-context-push-thread-default">thread-default main loop</link>
 * that @manager was constructed in.
 *
 * Since: 2.30
 */


/**
 * GDBusObjectManagerClient::interface-proxy-signal:
 * @manager: The #GDBusObjectManagerClient emitting the signal.
 * @object_proxy: The #GDBusObjectProxy on which an interface is emitting a D-Bus signal.
 * @interface_proxy: The #GDBusProxy that is emitting a D-Bus signal.
 * @sender_name: The sender of the signal or NULL if the connection is not a bus connection.
 * @signal_name: The signal name.
 * @parameters: A #GVariant tuple with parameters for the signal.
 *
 * Emitted when a D-Bus signal is received on @interface_proxy.
 *
 * This signal exists purely as a convenience to avoid having to
 * connect signals to all interface proxies managed by @manager.
 *
 * This signal is emitted in the
 * <link linkend="g-main-context-push-thread-default">thread-default main loop</link>
 * that @manager was constructed in.
 *
 * Since: 2.30
 */


/**
 * GDBusObjectManagerClient:bus-type:
 *
 * If this property is not %G_BUS_TYPE_NONE, then
 * #GDBusObjectManagerClient:connection must be %NULL and will be set to the
 * #GDBusConnection obtained by calling g_bus_get() with the value
 * of this property.
 *
 * Since: 2.30
 */


/**
 * GDBusObjectManagerClient:connection:
 *
 * The #GDBusConnection to use.
 *
 * Since: 2.30
 */


/**
 * GDBusObjectManagerClient:flags:
 *
 * Flags from the #GDBusObjectManagerClientFlags enumeration.
 *
 * Since: 2.30
 */


/**
 * GDBusObjectManagerClient:get-proxy-type-destroy-notify:
 *
 * A #GDestroyNotify for the #gpointer user_data in #GDBusObjectManagerClient:get-proxy-type-user-data.
 *
 * Since: 2.30
 */


/**
 * GDBusObjectManagerClient:get-proxy-type-func:
 *
 * The #GDBusProxyTypeFunc to use when determining what #GType to
 * use for interface proxies or %NULL.
 *
 * Since: 2.30
 */


/**
 * GDBusObjectManagerClient:get-proxy-type-user-data:
 *
 * The #gpointer user_data to pass to #GDBusObjectManagerClient:get-proxy-type-func.
 *
 * Since: 2.30
 */


/**
 * GDBusObjectManagerClient:name:
 *
 * The well-known name or unique name that the manager is for.
 *
 * Since: 2.30
 */


/**
 * GDBusObjectManagerClient:name-owner:
 *
 * The unique name that owns #GDBusObjectManagerClient:name or %NULL if
 * no-one is currently owning the name. Connect to the
 * #GObject::notify signal to track changes to this property.
 *
 * Since: 2.30
 */


/**
 * GDBusObjectManagerClient:object-path:
 *
 * The object path the manager is for.
 *
 * Since: 2.30
 */


/**
 * GDBusObjectManagerServer:connection:
 *
 * The #GDBusConnection to export objects on.
 *
 * Since: 2.30
 */


/**
 * GDBusObjectManagerServer:object-path:
 *
 * The object path to register the manager object at.
 *
 * Since: 2.30
 */


/**
 * GDBusObjectProxy:g-connection:
 *
 * The connection of the proxy.
 *
 * Since: 2.30
 */


/**
 * GDBusObjectProxy:g-object-path:
 *
 * The object path of the proxy.
 *
 * Since: 2.30
 */


/**
 * GDBusObjectSkeleton::authorize-method:
 * @object: The #GDBusObjectSkeleton emitting the signal.
 * @interface: The #GDBusInterfaceSkeleton that @invocation is for.
 * @invocation: A #GDBusMethodInvocation.
 *
 * Emitted when a method is invoked by a remote caller and used to
 * determine if the method call is authorized.
 *
 * This signal is like #GDBusInterfaceSkeleton<!-- -->'s
 * #GDBusInterfaceSkeleton::g-authorize-method signal, except that it is
 * for the enclosing object.
 *
 * The default class handler just returns %TRUE.
 *
 * Returns: %TRUE if the call is authorized, %FALSE otherwise.
 * Since: 2.30
 */


/**
 * GDBusObjectSkeleton:g-object-path:
 *
 * The object path where the object is exported.
 *
 * Since: 2.30
 */


/**
 * GDBusProxy::g-properties-changed:
 * @proxy: The #GDBusProxy emitting the signal.
 * @changed_properties: A #GVariant containing the properties that changed
 * @invalidated_properties: A %NULL terminated array of properties that was invalidated
 *
 * Emitted when one or more D-Bus properties on @proxy changes. The
 * local cache has already been updated when this signal fires. Note
 * that both @changed_properties and @invalidated_properties are
 * guaranteed to never be %NULL (either may be empty though).
 *
 * If the proxy has the flag
 * %G_DBUS_PROXY_FLAGS_GET_INVALIDATED_PROPERTIES set, then
 * @invalidated_properties will always be empty.
 *
 * This signal corresponds to the
 * <literal>PropertiesChanged</literal> D-Bus signal on the
 * <literal>org.freedesktop.DBus.Properties</literal> interface.
 *
 * Since: 2.26
 */


/**
 * GDBusProxy::g-signal:
 * @proxy: The #GDBusProxy emitting the signal.
 * @sender_name: (allow-none): The sender of the signal or %NULL if the connection is not a bus connection.
 * @signal_name: The name of the signal.
 * @parameters: A #GVariant tuple with parameters for the signal.
 *
 * Emitted when a signal from the remote object and interface that @proxy is for, has been received.
 *
 * Since: 2.26
 */


/**
 * GDBusProxy:g-bus-type:
 *
 * If this property is not %G_BUS_TYPE_NONE, then
 * #GDBusProxy:g-connection must be %NULL and will be set to the
 * #GDBusConnection obtained by calling g_bus_get() with the value
 * of this property.
 *
 * Since: 2.26
 */


/**
 * GDBusProxy:g-connection:
 *
 * The #GDBusConnection the proxy is for.
 *
 * Since: 2.26
 */


/**
 * GDBusProxy:g-default-timeout:
 *
 * The timeout to use if -1 (specifying default timeout) is passed
 * as @timeout_msec in the g_dbus_proxy_call() and
 * g_dbus_proxy_call_sync() functions.
 *
 * This allows applications to set a proxy-wide timeout for all
 * remote method invocations on the proxy. If this property is -1,
 * the default timeout (typically 25 seconds) is used. If set to
 * %G_MAXINT, then no timeout is used.
 *
 * Since: 2.26
 */


/**
 * GDBusProxy:g-flags:
 *
 * Flags from the #GDBusProxyFlags enumeration.
 *
 * Since: 2.26
 */


/**
 * GDBusProxy:g-interface-info:
 *
 * Ensure that interactions with this proxy conform to the given
 * interface. This is mainly to ensure that malformed data received
 * from the other peer is ignored. The given #GDBusInterfaceInfo is
 * said to be the <emphasis>expected interface</emphasis>.
 *
 * The checks performed are:
 * <itemizedlist>
 *   <listitem><para>
 *     When completing a method call, if the type signature of
 *     the reply message isn't what's expected, the reply is
 *     discarded and the #GError is set to %G_IO_ERROR_INVALID_ARGUMENT.
 *   </para></listitem>
 *   <listitem><para>
 *     Received signals that have a type signature mismatch are dropped and
 *     a warning is logged via g_warning().
 *   </para></listitem>
 *   <listitem><para>
 *     Properties received via the initial <literal>GetAll()</literal> call
 *     or via the <literal>::PropertiesChanged</literal> signal (on the
 *     <ulink url="http://dbus.freedesktop.org/doc/dbus-specification.html#standard-interfaces-properties">org.freedesktop.DBus.Properties</ulink> interface) or
 *     set using g_dbus_proxy_set_cached_property() with a type signature
 *     mismatch are ignored and a warning is logged via g_warning().
 *   </para></listitem>
 * </itemizedlist>
 * Note that these checks are never done on methods, signals and
 * properties that are not referenced in the given
 * #GDBusInterfaceInfo, since extending a D-Bus interface on the
 * service-side is not considered an ABI break.
 *
 * Since: 2.26
 */


/**
 * GDBusProxy:g-interface-name:
 *
 * The D-Bus interface name the proxy is for.
 *
 * Since: 2.26
 */


/**
 * GDBusProxy:g-name:
 *
 * The well-known or unique name that the proxy is for.
 *
 * Since: 2.26
 */


/**
 * GDBusProxy:g-name-owner:
 *
 * The unique name that owns #GDBusProxy:g-name or %NULL if no-one
 * currently owns that name. You may connect to #GObject::notify signal to
 * track changes to this property.
 *
 * Since: 2.26
 */


/**
 * GDBusProxy:g-object-path:
 *
 * The object path the proxy is for.
 *
 * Since: 2.26
 */


/**
 * GDBusServer:
 *
 * The #GDBusServer structure contains only private data and
 * should only be accessed using the provided API.
 *
 * Since: 2.26
 */


/**
 * GDBusServer::new-connection:
 * @server: The #GDBusServer emitting the signal.
 * @connection: A #GDBusConnection for the new connection.
 *
 * Emitted when a new authenticated connection has been made. Use
 * g_dbus_connection_get_peer_credentials() to figure out what
 * identity (if any), was authenticated.
 *
 * If you want to accept the connection, take a reference to the
 * @connection object and return %TRUE. When you are done with the
 * connection call g_dbus_connection_close() and give up your
 * reference. Note that the other peer may disconnect at any time -
 * a typical thing to do when accepting a connection is to listen to
 * the #GDBusConnection::closed signal.
 *
 * If #GDBusServer:flags contains %G_DBUS_SERVER_FLAGS_RUN_IN_THREAD
 * then the signal is emitted in a new thread dedicated to the
 * connection. Otherwise the signal is emitted in the <link
 * linkend="g-main-context-push-thread-default">thread-default main
 * loop</link> of the thread that @server was constructed in.
 *
 * You are guaranteed that signal handlers for this signal runs
 * before incoming messages on @connection are processed. This means
 * that it's suitable to call g_dbus_connection_register_object() or
 * similar from the signal handler.
 *
 * Returns: %TRUE to claim @connection, %FALSE to let other handlers run.
 * Since: 2.26
 */


/**
 * GDBusServer:active:
 *
 * Whether the server is currently active.
 *
 * Since: 2.26
 */


/**
 * GDBusServer:address:
 *
 * The D-Bus address to listen on.
 *
 * Since: 2.26
 */


/**
 * GDBusServer:authentication-observer:
 *
 * A #GDBusAuthObserver object to assist in the authentication process or %NULL.
 *
 * Since: 2.26
 */


/**
 * GDBusServer:client-address:
 *
 * The D-Bus address that clients can use.
 *
 * Since: 2.26
 */


/**
 * GDBusServer:flags:
 *
 * Flags from the #GDBusServerFlags enumeration.
 *
 * Since: 2.26
 */


/**
 * GDBusServer:guid:
 *
 * The guid of the server.
 *
 * Since: 2.26
 */


/**
 * GDBusServerClass:
 * @new_connection: Signal class handler for the #GDBusServer::new-connection signal.
 *
 * Class structure for #GDBusServer.
 *
 * Since: 2.26
 */


/**
 * GDataOutputStream:byte-order:
 *
 * Determines the byte ordering that is used when writing
 * multi-byte entities (such as integers) to the stream.
 */


/**
 * GDataStream:byte-order:
 *
 * The ::byte-order property determines the byte ordering that
 * is used when reading multi-byte entities (such as integers)
 * from the stream.
 */


/**
 * GDataStream:newline-type:
 *
 * The :newline-type property determines what is considered
 * as a line ending when reading complete lines from the stream.
 */


/**
 * GDesktopAppInfo:
 *
 * Information about an installed application from a desktop file.
 */


/**
 * GDesktopAppInfo:filename:
 *
 * The origin filename of this #GDesktopAppInfo
 */


/**
 * GDrive::changed:
 * @drive: a #GDrive.
 *
 * Emitted when the drive's state has changed.
 */


/**
 * GDrive::disconnected:
 * @drive: a #GDrive.
 *
 * This signal is emitted when the #GDrive have been
 * disconnected. If the recipient is holding references to the
 * object they should release them so the object can be
 * finalized.
 */


/**
 * GDrive::eject-button:
 * @drive: a #GDrive.
 *
 * Emitted when the physical eject button (if any) of a drive has
 * been pressed.
 */


/**
 * GDrive::stop-button:
 * @drive: a #GDrive.
 *
 * Emitted when the physical stop button (if any) of a drive has
 * been pressed.
 *
 * Since: 2.22
 */


/**
 * GFileIcon:file:
 *
 * The file containing the icon.
 */


/**
 * GFileMonitor::changed:
 * @monitor: a #GFileMonitor.
 * @file: a #GFile.
 * @other_file: (allow-none): a #GFile or #NULL.
 * @event_type: a #GFileMonitorEvent.
 *
 * Emitted when @file has been changed.
 *
 * If using #G_FILE_MONITOR_SEND_MOVED flag and @event_type is
 * #G_FILE_MONITOR_EVENT_MOVED, @file will be set to a #GFile containing the
 * old path, and @other_file will be set to a #GFile containing the new path.
 *
 * In all the other cases, @other_file will be set to #NULL.
 */


/**
 * GFilenameCompleter::got-completion-data:
 *
 * Emitted when the file name completion information comes available.
 */


/**
 * GIOModuleScope:
 *
 * Represents a scope for loading IO modules. A scope can be used for blocking
 * duplicate modules, or blocking a module you don't want to load.
 *
 * The scope can be used with g_io_modules_load_all_in_directory_with_scope()
 * or g_io_modules_scan_all_in_directory_with_scope().
 *
 * Since: 2.30
 */


/**
 * GInetAddress:
 *
 * An IPv4 or IPv6 internet address.
 */


/**
 * GInetAddress:is-any:
 *
 * Whether this is the "any" address for its family.
 * See g_inet_address_get_is_any().
 *
 * Since: 2.22
 */


/**
 * GInetAddress:is-link-local:
 *
 * Whether this is a link-local address.
 * See g_inet_address_get_is_link_local().
 *
 * Since: 2.22
 */


/**
 * GInetAddress:is-loopback:
 *
 * Whether this is the loopback address for its family.
 * See g_inet_address_get_is_loopback().
 *
 * Since: 2.22
 */


/**
 * GInetAddress:is-mc-global:
 *
 * Whether this is a global multicast address.
 * See g_inet_address_get_is_mc_global().
 *
 * Since: 2.22
 */


/**
 * GInetAddress:is-mc-link-local:
 *
 * Whether this is a link-local multicast address.
 * See g_inet_address_get_is_mc_link_local().
 *
 * Since: 2.22
 */


/**
 * GInetAddress:is-mc-node-local:
 *
 * Whether this is a node-local multicast address.
 * See g_inet_address_get_is_mc_node_local().
 *
 * Since: 2.22
 */


/**
 * GInetAddress:is-mc-org-local:
 *
 * Whether this is an organization-local multicast address.
 * See g_inet_address_get_is_mc_org_local().
 *
 * Since: 2.22
 */


/**
 * GInetAddress:is-mc-site-local:
 *
 * Whether this is a site-local multicast address.
 * See g_inet_address_get_is_mc_site_local().
 *
 * Since: 2.22
 */


/**
 * GInetAddress:is-multicast:
 *
 * Whether this is a multicast address.
 * See g_inet_address_get_is_multicast().
 *
 * Since: 2.22
 */


/**
 * GInetAddress:is-site-local:
 *
 * Whether this is a site-local address.
 * See g_inet_address_get_is_loopback().
 *
 * Since: 2.22
 */


/**
 * GInetAddressMask:
 *
 * A combination of an IPv4 or IPv6 base address and a length,
 * representing a range of IP addresses.
 *
 * Since: 2.32
 */


/**
 * GInetSocketAddress:
 *
 * An IPv4 or IPv6 socket address, corresponding to a <type>struct
 * sockaddr_in</type> or <type>struct sockaddr_in6</type>.
 */


/**
 * GInetSocketAddress:flowinfo:
 *
 * The <literal>sin6_flowinfo</literal> field, for IPv6 addresses.
 *
 * Since: 2.32
 */


/**
 * GInetSocketAddress:scope_id:
 *
 * The <literal>sin6_scope_id</literal> field, for IPv6 addresses.
 *
 * Since: 2.32
 */


/**
 * GMemoryOutputStream:data:
 *
 * Pointer to buffer where data will be written.
 *
 * Since: 2.24
 */


/**
 * GMemoryOutputStream:data-size:
 *
 * Size of data written to the buffer.
 *
 * Since: 2.24
 */


/**
 * GMemoryOutputStream:destroy-function: (skip)
 *
 * Function called with the buffer as argument when the stream is destroyed.
 *
 * Since: 2.24
 */


/**
 * GMemoryOutputStream:realloc-function: (skip)
 *
 * Function with realloc semantics called to enlarge the buffer.
 *
 * Since: 2.24
 */


/**
 * GMemoryOutputStream:size:
 *
 * Current size of the data buffer.
 *
 * Since: 2.24
 */


/**
 * GMenu:
 *
 * #GMenu is an opaque structure type.  You must access it using the
 * functions below.
 *
 * Since: 2.32
 */


/**
 * GMenuAttributeIter:
 *
 * #GMenuAttributeIter is an opaque structure type.  You must access it
 * using the functions below.
 *
 * Since: 2.32
 */


/**
 * GMenuItem:
 *
 * #GMenuItem is an opaque structure type.  You must access it using the
 * functions below.
 *
 * Since: 2.32
 */


/**
 * GMenuLinkIter:
 *
 * #GMenuLinkIter is an opaque structure type.  You must access it using
 * the functions below.
 *
 * Since: 2.32
 */


/**
 * GMenuModel:
 *
 * #GMenuModel is an opaque structure type.  You must access it using the
 * functions below.
 *
 * Since: 2.32
 */


/**
 * GMenuModel::items-changed:
 * @model: the #GMenuModel that is changing
 * @position: the position of the change
 * @removed: the number of items removed
 * @added: the number of items added
 *
 * Emitted when a change has occured to the menu.
 *
 * The only changes that can occur to a menu is that items are removed
 * or added.  Items may not change (except by being removed and added
 * back in the same location).  This signal is capable of describing
 * both of those changes (at the same time).
 *
 * The signal means that starting at the index @position, @removed
 * items were removed and @added items were added in their place.  If
 * @removed is zero then only items were added.  If @added is zero
 * then only items were removed.
 *
 * As an example, if the menu contains items a, b, c, d (in that
 * order) and the signal (2, 1, 3) occurs then the new composition of
 * the menu will be a, b, _, _, _, d (with each _ representing some
 * new item).
 *
 * Signal handlers may query the model (particularly the added items)
 * and expect to see the results of the modification that is being
 * reported.  The signal is emitted after the modification.
 */


/**
 * GMount::changed:
 * @mount: the object on which the signal is emitted
 *
 * Emitted when the mount has been changed.
 */


/**
 * GMount::pre-unmount:
 * @mount: the object on which the signal is emitted
 *
 * This signal is emitted when the #GMount is about to be
 * unmounted.
 *
 * Since: 2.22
 */


/**
 * GMount::unmounted:
 * @mount: the object on which the signal is emitted
 *
 * This signal is emitted when the #GMount have been
 * unmounted. If the recipient is holding references to the
 * object they should release them so the object can be
 * finalized.
 */


/**
 * GMountOperation::aborted:
 *
 * Emitted by the backend when e.g. a device becomes unavailable
 * while a mount operation is in progress.
 *
 * Implementations of GMountOperation should handle this signal
 * by dismissing open password dialogs.
 *
 * Since: 2.20
 */


/**
 * GMountOperation::ask-password:
 * @op: a #GMountOperation requesting a password.
 * @message: string containing a message to display to the user.
 * @default_user: string containing the default user name.
 * @default_domain: string containing the default domain.
 * @flags: a set of #GAskPasswordFlags.
 *
 * Emitted when a mount operation asks the user for a password.
 *
 * If the message contains a line break, the first line should be
 * presented as a heading. For example, it may be used as the
 * primary text in a #GtkMessageDialog.
 */


/**
 * GMountOperation::ask-question:
 * @op: a #GMountOperation asking a question.
 * @message: string containing a message to display to the user.
 * @choices: an array of strings for each possible choice.
 *
 * Emitted when asking the user a question and gives a list of
 * choices for the user to choose from.
 *
 * If the message contains a line break, the first line should be
 * presented as a heading. For example, it may be used as the
 * primary text in a #GtkMessageDialog.
 */


/**
 * GMountOperation::reply:
 * @op: a #GMountOperation.
 * @result: a #GMountOperationResult indicating how the request was handled
 *
 * Emitted when the user has replied to the mount operation.
 */


/**
 * GMountOperation::show-processes:
 * @op: a #GMountOperation.
 * @message: string containing a message to display to the user.
 * @processes: (element-type GPid): an array of #GPid for processes blocking the operation.
 * @choices: an array of strings for each possible choice.
 *
 * Emitted when one or more processes are blocking an operation
 * e.g. unmounting/ejecting a #GMount or stopping a #GDrive.
 *
 * Note that this signal may be emitted several times to update the
 * list of blocking processes as processes close files. The
 * application should only respond with g_mount_operation_reply() to
 * the latest signal (setting #GMountOperation:choice to the choice
 * the user made).
 *
 * If the message contains a line break, the first line should be
 * presented as a heading. For example, it may be used as the
 * primary text in a #GtkMessageDialog.
 *
 * Since: 2.22
 */


/**
 * GMountOperation:anonymous:
 *
 * Whether to use an anonymous user when authenticating.
 */


/**
 * GMountOperation:choice:
 *
 * The index of the user's choice when a question is asked during the
 * mount operation. See the #GMountOperation::ask-question signal.
 */


/**
 * GMountOperation:domain:
 *
 * The domain to use for the mount operation.
 */


/**
 * GMountOperation:password:
 *
 * The password that is used for authentication when carrying out
 * the mount operation.
 */


/**
 * GMountOperation:password-save:
 *
 * Determines if and how the password information should be saved.
 */


/**
 * GMountOperation:username:
 *
 * The user name that is used for authentication when carrying out
 * the mount operation.
 */


/**
 * GNetworkAddress:
 *
 * A #GSocketConnectable for resolving a hostname and connecting to
 * that host.
 */


/**
 * GNetworkMonitor:
 *
 * #GNetworkMonitor monitors the status of network connections and
 * indicates when a possibly-user-visible change has occurred.
 *
 * Since: 2.32
 */


/**
 * GNetworkMonitor::network-changed:
 * @monitor: a #GNetworkMonitor
 * @available: the current value of #GNetworkMonitor:network-available
 *
 * Emitted when the network configuration changes. If @available is
 * %TRUE, then some hosts may be reachable that were not reachable
 * before, while others that were reachable before may no longer be
 * reachable. If @available is %FALSE, then no remote hosts are
 * reachable.
 *
 * Since: 2.32
 */


/**
 * GNetworkMonitor:network-available:
 *
 * Whether the network is considered available. That is, whether the
 * system has a default route for at least one of IPv4 or IPv6.
 *
 * Real-world networks are of course much more complicated than
 * this; the machine may be connected to a wifi hotspot that
 * requires payment before allowing traffic through, or may be
 * connected to a functioning router that has lost its own upstream
 * connectivity. Some hosts might only be accessible when a VPN is
 * active. Other hosts might only be accessible when the VPN is
 * <emphasis>not</emphasis> active. Thus, it is best to use
 * g_network_monitor_can_reach() or
 * g_network_monitor_can_reach_async() to test for reachability on a
 * host-by-host basis. (On the other hand, when the property is
 * %FALSE, the application can reasonably expect that no remote
 * hosts at all are reachable, and should indicate this to the user
 * in its UI.)
 *
 * See also #GNetworkMonitor::network-changed.
 *
 * Since: 2.32
 */


/**
 * GNetworkService:
 *
 * A #GSocketConnectable for resolving a SRV record and connecting to
 * that service.
 */


/**
 * GPermission:
 *
 * #GPermission is an opaque data structure and can only be accessed
 * using the following functions.
 */


/**
 * GPermission:allowed:
 *
 * %TRUE if the caller currently has permission to perform the action that
 * @permission represents the permission to perform.
 */


/**
 * GPermission:can-acquire:
 *
 * %TRUE if it is generally possible to acquire the permission by calling
 * g_permission_acquire().
 */


/**
 * GPermission:can-release:
 *
 * %TRUE if it is generally possible to release the permission by calling
 * g_permission_release().
 */


/**
 * GProxyAddress:
 *
 * A #GInetSocketAddress representing a connection via a proxy server
 *
 * Since: 2.26
 */


/**
 * GProxyAddress:destination-protocol:
 *
 * The protocol being spoke to the destination host, or %NULL if
 * the #GProxyAddress doesn't know.
 *
 * Since: 2.34
 */


/**
 * GProxyAddress:uri:
 *
 * The URI string that the proxy was constructed from (or %NULL
 * if the creator didn't specify this).
 *
 * Since: 2.34
 */


/**
 * GRemoteActionGroupInterface:
 * @activate_action_full: the virtual function pointer for g_remote_action_group_activate_action_full()
 * @change_action_state_full: the virtual function pointer for g_remote_action_group_change_action_state_full()
 *
 * The virtual function table for #GRemoteActionGroup.
 *
 * Since: 2.32
 */


/**
 * GResolver:
 *
 * The object that handles DNS resolution. Use g_resolver_get_default()
 * to get the default resolver.
 */


/**
 * GResolver::reload:
 * @resolver: a #GResolver
 *
 * Emitted when the resolver notices that the system resolver
 * configuration has changed.
 */


/**
 * GSettings::change-event:
 * @settings: the object on which the signal was emitted
 * @keys: (array length=n_keys) (element-type GQuark) (allow-none): an array of #GQuark<!-- -->s for the changed keys, or %NULL
 * @n_keys: the length of the @keys array, or 0
 *
 * The "change-event" signal is emitted once per change event that
 * affects this settings object.  You should connect to this signal
 * only if you are interested in viewing groups of changes before they
 * are split out into multiple emissions of the "changed" signal.
 * For most use cases it is more appropriate to use the "changed" signal.
 *
 * In the event that the change event applies to one or more specified
 * keys, @keys will be an array of #GQuark of length @n_keys.  In the
 * event that the change event applies to the #GSettings object as a
 * whole (ie: potentially every key has been changed) then @keys will
 * be %NULL and @n_keys will be 0.
 *
 * The default handler for this signal invokes the "changed" signal
 * for each affected key.  If any other connected handler returns
 * %TRUE then this default functionality will be suppressed.
 *
 * Returns: %TRUE to stop other handlers from being invoked for the event. FALSE to propagate the event further.
 */


/**
 * GSettings::changed:
 * @settings: the object on which the signal was emitted
 * @key: the name of the key that changed
 *
 * The "changed" signal is emitted when a key has potentially changed.
 * You should call one of the g_settings_get() calls to check the new
 * value.
 *
 * This signal supports detailed connections.  You can connect to the
 * detailed signal "changed::x" in order to only receive callbacks
 * when key "x" changes.
 */


/**
 * GSettings::writable-change-event:
 * @settings: the object on which the signal was emitted
 * @key: the quark of the key, or 0
 *
 * The "writable-change-event" signal is emitted once per writability
 * change event that affects this settings object.  You should connect
 * to this signal if you are interested in viewing groups of changes
 * before they are split out into multiple emissions of the
 * "writable-changed" signal.  For most use cases it is more
 * appropriate to use the "writable-changed" signal.
 *
 * In the event that the writability change applies only to a single
 * key, @key will be set to the #GQuark for that key.  In the event
 * that the writability change affects the entire settings object,
 * @key will be 0.
 *
 * The default handler for this signal invokes the "writable-changed"
 * and "changed" signals for each affected key.  This is done because
 * changes in writability might also imply changes in value (if for
 * example, a new mandatory setting is introduced).  If any other
 * connected handler returns %TRUE then this default functionality
 * will be suppressed.
 *
 * Returns: %TRUE to stop other handlers from being invoked for the event. FALSE to propagate the event further.
 */


/**
 * GSettings::writable-changed:
 * @settings: the object on which the signal was emitted
 * @key: the key
 *
 * The "writable-changed" signal is emitted when the writability of a
 * key has potentially changed.  You should call
 * g_settings_is_writable() in order to determine the new status.
 *
 * This signal supports detailed connections.  You can connect to the
 * detailed signal "writable-changed::x" in order to only receive
 * callbacks when the writability of "x" changes.
 */


/**
 * GSettings:context:
 *
 * The name of the context that the settings are stored in.
 */


/**
 * GSettings:delay-apply:
 *
 * Whether the #GSettings object is in 'delay-apply' mode. See
 * g_settings_delay() for details.
 *
 * Since: 2.28
 */


/**
 * GSettings:has-unapplied:
 *
 * If this property is %TRUE, the #GSettings object has outstanding
 * changes that will be applied when g_settings_apply() is called.
 */


/**
 * GSettings:path:
 *
 * The path within the backend where the settings are stored.
 */


/**
 * GSettings:schema:
 *
 * The name of the schema that describes the types of keys
 * for this #GSettings object.
 *
 * The type of this property is *not* #GSettingsSchema.
 * #GSettingsSchema has only existed since version 2.32 and
 * unfortunately this name was used in previous versions to refer to
 * the schema ID rather than the schema itself.  Take care to use the
 * 'settings-schema' property if you wish to pass in a
 * #GSettingsSchema.
 *
 * Deprecated: 2.32:Use the 'schema-id' property instead.  In a future version, this property may instead refer to a #GSettingsSchema.
 */


/**
 * GSettings:schema-id:
 *
 * The name of the schema that describes the types of keys
 * for this #GSettings object.
 */


/**
 * GSettings:settings-schema:
 *
 * The #GSettingsSchema describing the types of keys for this
 * #GSettings object.
 *
 * Ideally, this property would be called 'schema'.  #GSettingsSchema
 * has only existed since version 2.32, however, and before then the
 * 'schema' property was used to refer to the ID of the schema rather
 * than the schema itself.  Take care.
 */


/**
 * GSettingsSchema:
 *
 * This is an opaque structure type.  You may not access it directly.
 *
 * Since: 2.32
 */


/**
 * GSettingsSchemaSource:
 *
 * This is an opaque structure type.  You may not access it directly.
 *
 * Since: 2.32
 */


/**
 * GSimpleAction::activate:
 * @simple: the #GSimpleAction
 * @parameter: (allow-none): the parameter to the activation
 *
 * Indicates that the action was just activated.
 *
 * @parameter will always be of the expected type.  In the event that
 * an incorrect type was given, no signal will be emitted.
 *
 * Since: 2.28
 */


/**
 * GSimpleAction::change-state:
 * @simple: the #GSimpleAction
 * @value: (allow-none): the requested value for the state
 *
 * Indicates that the action just received a request to change its
 * state.
 *
 * @value will always be of the correct state type.  In the event that
 * an incorrect type was given, no signal will be emitted.
 *
 * If no handler is connected to this signal then the default
 * behaviour is to call g_simple_action_set_state() to set the state
 * to the requested value.  If you connect a signal handler then no
 * default action is taken.  If the state should change then you must
 * call g_simple_action_set_state() from the handler.
 *
 * <example>
 * <title>Example 'change-state' handler</title>
 * <programlisting>
 * static void
 * change_volume_state (GSimpleAction *action,
 *                      GVariant      *value,
 *                      gpointer       user_data)
 * {
 *   gint requested;
 *
 *   requested = g_variant_get_int32 (value);
 *
 *   // Volume only goes from 0 to 10
 *   if (0 <= requested && requested <= 10)
 *     g_simple_action_set_state (action, value);
 * }
 * </programlisting>
 * </example>
 *
 * The handler need not set the state to the requested value.  It
 * could set it to any value at all, or take some other action.
 *
 * Since: 2.30
 */


/**
 * GSimpleAction:enabled:
 *
 * If @action is currently enabled.
 *
 * If the action is disabled then calls to g_action_activate() and
 * g_action_change_state() have no effect.
 *
 * Since: 2.28
 */


/**
 * GSimpleAction:name:
 *
 * The name of the action.  This is mostly meaningful for identifying
 * the action once it has been added to a #GSimpleActionGroup.
 *
 * Since: 2.28
 */


/**
 * GSimpleAction:parameter-type:
 *
 * The type of the parameter that must be given when activating the
 * action.
 *
 * Since: 2.28
 */


/**
 * GSimpleAction:state:
 *
 * The state of the action, or %NULL if the action is stateless.
 *
 * Since: 2.28
 */


/**
 * GSimpleAction:state-type:
 *
 * The #GVariantType of the state that the action has, or %NULL if the
 * action is stateless.
 *
 * Since: 2.28
 */


/**
 * GSimplePermission:
 *
 * #GSimplePermission is an opaque data structure.  There are no methods
 * except for those defined by #GPermission.
 */


/**
 * GSocket:broadcast:
 *
 * Whether the socket should allow sending to and receiving from broadcast addresses.
 *
 * Since: 2.32
 */


/**
 * GSocket:multicast-loopback:
 *
 * Whether outgoing multicast packets loop back to the local host.
 *
 * Since: 2.32
 */


/**
 * GSocket:multicast-ttl:
 *
 * Time-to-live out outgoing multicast packets
 *
 * Since: 2.32
 */


/**
 * GSocket:timeout:
 *
 * The timeout in seconds on socket I/O
 *
 * Since: 2.26
 */


/**
 * GSocket:ttl:
 *
 * Time-to-live for outgoing unicast packets
 *
 * Since: 2.32
 */


/**
 * GSocketAddress:
 *
 * A socket endpoint address, corresponding to <type>struct sockaddr</type>
 * or one of its subtypes.
 */


/**
 * GSocketClient::event:
 * @client: the #GSocketClient
 * @event: the event that is occurring
 * @connectable: the #GSocketConnectable that @event is occurring on
 * @connection: the current representation of the connection
 *
 * Emitted when @client's activity on @connectable changes state.
 * Among other things, this can be used to provide progress
 * information about a network connection in the UI. The meanings of
 * the different @event values are as follows:
 *
 * <variablelist>
 *   <varlistentry>
 *     <term>%G_SOCKET_CLIENT_RESOLVING:</term>
 *     <listitem><para>
 *       @client is about to look up @connectable in DNS.
 *       @connection will be %NULL.
 *     </para></listitem>
 *   </varlistentry>
 *   <varlistentry>
 *     <term>%G_SOCKET_CLIENT_RESOLVED:</term>
 *     <listitem><para>
 *       @client has successfully resolved @connectable in DNS.
 *       @connection will be %NULL.
 *     </para></listitem>
 *   </varlistentry>
 *   <varlistentry>
 *     <term>%G_SOCKET_CLIENT_CONNECTING:</term>
 *     <listitem><para>
 *       @client is about to make a connection to a remote host;
 *       either a proxy server or the destination server itself.
 *       @connection is the #GSocketConnection, which is not yet
 *       connected.
 *     </para></listitem>
 *   </varlistentry>
 *   <varlistentry>
 *     <term>%G_SOCKET_CLIENT_CONNECTED:</term>
 *     <listitem><para>
 *       @client has successfully connected to a remote host.
 *       @connection is the connected #GSocketConnection.
 *     </para></listitem>
 *   </varlistentry>
 *   <varlistentry>
 *     <term>%G_SOCKET_CLIENT_PROXY_NEGOTIATING:</term>
 *     <listitem><para>
 *       @client is about to negotiate with a proxy to get it to
 *       connect to @connectable. @connection is the
 *       #GSocketConnection to the proxy server.
 *     </para></listitem>
 *   </varlistentry>
 *   <varlistentry>
 *     <term>%G_SOCKET_CLIENT_PROXY_NEGOTIATED:</term>
 *     <listitem><para>
 *       @client has negotiated a connection to @connectable through
 *       a proxy server. @connection is the stream returned from
 *       g_proxy_connect(), which may or may not be a
 *       #GSocketConnection.
 *     </para></listitem>
 *   </varlistentry>
 *   <varlistentry>
 *     <term>%G_SOCKET_CLIENT_TLS_HANDSHAKING:</term>
 *     <listitem><para>
 *       @client is about to begin a TLS handshake. @connection is a
 *       #GTlsClientConnection.
 *     </para></listitem>
 *   </varlistentry>
 *   <varlistentry>
 *     <term>%G_SOCKET_CLIENT_TLS_HANDSHAKED:</term>
 *     <listitem><para>
 *       @client has successfully completed the TLS handshake.
 *       @connection is a #GTlsClientConnection.
 *     </para></listitem>
 *   </varlistentry>
 *   <varlistentry>
 *     <term>%G_SOCKET_CLIENT_COMPLETE:</term>
 *     <listitem><para>
 *       @client has either successfully connected to @connectable
 *       (in which case @connection is the #GSocketConnection that
 *       it will be returning to the caller) or has failed (in which
 *       case @connection is %NULL and the client is about to return
 *       an error).
 *     </para></listitem>
 *   </varlistentry>
 * </variablelist>
 *
 * Each event except %G_SOCKET_CLIENT_COMPLETE may be emitted
 * multiple times (or not at all) for a given connectable (in
 * particular, if @client ends up attempting to connect to more than
 * one address). However, if @client emits the #GSocketClient::event
 * signal at all for a given connectable, that it will always emit
 * it with %G_SOCKET_CLIENT_COMPLETE when it is done.
 *
 * Note that there may be additional #GSocketClientEvent values in
 * the future; unrecognized @event values should be ignored.
 *
 * Since: 2.32
 */


/**
 * GSocketService::incoming:
 * @service: the #GSocketService
 * @connection: a new #GSocketConnection object
 * @source_object: (allow-none): the source_object passed to g_socket_listener_add_address()
 *
 * The ::incoming signal is emitted when a new incoming connection
 * to @service needs to be handled. The handler must initiate the
 * handling of @connection, but may not block; in essence,
 * asynchronous operations must be used.
 *
 * @connection will be unreffed once the signal handler returns,
 * so you need to ref it yourself if you are planning to use it.
 *
 * Returns: %TRUE to stop other handlers from being called
 * Since: 2.22
 */


/**
 * GSrvTarget:
 *
 * A single target host/port that a network service is running on.
 */


/**
 * GTestDBus:
 *
 * The #GTestDBus structure contains only private data and
 * should only be accessed using the provided API.
 *
 * Since: 2.34
 */


/**
 * GTestDBus:flags:
 *
 * #GTestDBusFlags specifying the behaviour of the dbus session
 *
 * Since: 2.34
 */


/**
 * GThemedIcon:name:
 *
 * The icon name.
 */


/**
 * GThemedIcon:names:
 *
 * A %NULL-terminated array of icon names.
 */


/**
 * GThemedIcon:use-default-fallbacks:
 *
 * Whether to use the default fallbacks found by shortening the icon name
 * at '-' characters. If the "names" array has more than one element,
 * ignores any past the first.
 *
 * For example, if the icon name was "gnome-dev-cdrom-audio", the array
 * would become
 * |[
 * {
 *   "gnome-dev-cdrom-audio",
 *   "gnome-dev-cdrom",
 *   "gnome-dev",
 *   "gnome",
 *   NULL
 * };
 * ]|
 */


/**
 * GThreadedSocketService::run:
 * @service: the #GThreadedSocketService.
 * @connection: a new #GSocketConnection object.
 * @source_object: the source_object passed to g_socket_listener_add_address().
 *
 * The ::run signal is emitted in a worker thread in response to an
 * incoming connection. This thread is dedicated to handling
 * @connection and may perform blocking IO. The signal handler need
 * not return until the connection is closed.
 *
 * Returns: %TRUE to stop further signal handlers from being called
 */


/**
 * GTlsBackend:
 *
 * TLS (Transport Layer Security, aka SSL) backend. This is an
 * internal type used to coordinate the different classes implemented
 * by a TLS backend.
 *
 * Since: 2.28
 */


/**
 * GTlsCertificate:
 *
 * Abstract base class for TLS certificate types.
 *
 * Since: 2.28
 */


/**
 * GTlsCertificate:certificate:
 *
 * The DER (binary) encoded representation of the certificate's
 * public key. This property and the
 * #GTlsCertificate:certificate-pem property represent the same
 * data, just in different forms.
 *
 * Since: 2.28
 */


/**
 * GTlsCertificate:certificate-pem:
 *
 * The PEM (ASCII) encoded representation of the certificate's
 * public key. This property and the #GTlsCertificate:certificate
 * property represent the same data, just in different forms.
 *
 * Since: 2.28
 */


/**
 * GTlsCertificate:issuer:
 *
 * A #GTlsCertificate representing the entity that issued this
 * certificate. If %NULL, this means that the certificate is either
 * self-signed, or else the certificate of the issuer is not
 * available.
 *
 * Since: 2.28
 */


/**
 * GTlsCertificate:private-key:
 *
 * The DER (binary) encoded representation of the certificate's
 * private key, in either PKCS#1 format or unencrypted PKCS#8
 * format. This property (or the #GTlsCertificate:private-key-pem
 * property) can be set when constructing a key (eg, from a file),
 * but cannot be read.
 *
 * PKCS#8 format is supported since 2.32; earlier releases only
 * support PKCS#1. You can use the <literal>openssl rsa</literal>
 * tool to convert PKCS#8 keys to PKCS#1.
 *
 * Since: 2.28
 */


/**
 * GTlsCertificate:private-key-pem:
 *
 * The PEM (ASCII) encoded representation of the certificate's
 * private key in either PKCS#1 format ("<literal>BEGIN RSA PRIVATE
 * KEY</literal>") or unencrypted PKCS#8 format ("<literal>BEGIN
 * PRIVATE KEY</literal>"). This property (or the
 * #GTlsCertificate:private-key property) can be set when
 * constructing a key (eg, from a file), but cannot be read.
 *
 * PKCS#8 format is supported since 2.32; earlier releases only
 * support PKCS#1. You can use the <literal>openssl rsa</literal>
 * tool to convert PKCS#8 keys to PKCS#1.
 *
 * Since: 2.28
 */


/**
 * GTlsClientConnection:
 *
 * Abstract base class for the backend-specific client connection
 * type.
 *
 * Since: 2.28
 */


/**
 * GTlsClientConnection:accepted-cas:
 *
 * A list of the distinguished names of the Certificate Authorities
 * that the server will accept client certificates signed by. If the
 * server requests a client certificate during the handshake, then
 * this property will be set after the handshake completes.
 *
 * Each item in the list is a #GByteArray which contains the complete
 * subject DN of the certificate authority.
 *
 * Since: 2.28
 */


/**
 * GTlsClientConnection:server-identity:
 *
 * A #GSocketConnectable describing the identity of the server that
 * is expected on the other end of the connection.
 *
 * If the %G_TLS_CERTIFICATE_BAD_IDENTITY flag is set in
 * #GTlsClientConnection:validation-flags, this object will be used
 * to determine the expected identify of the remote end of the
 * connection; if #GTlsClientConnection:server-identity is not set,
 * or does not match the identity presented by the server, then the
 * %G_TLS_CERTIFICATE_BAD_IDENTITY validation will fail.
 *
 * In addition to its use in verifying the server certificate,
 * this is also used to give a hint to the server about what
 * certificate we expect, which is useful for servers that serve
 * virtual hosts.
 *
 * Since: 2.28
 */


/**
 * GTlsClientConnection:use-ssl3:
 *
 * If %TRUE, tells the connection to use SSL 3.0 rather than trying
 * to negotiate the best version of TLS or SSL to use. This can be
 * used when talking to servers that don't implement version
 * negotiation correctly and therefore refuse to handshake at all with
 * a "modern" TLS handshake.
 *
 * Since: 2.28
 */


/**
 * GTlsClientConnection:validation-flags:
 *
 * What steps to perform when validating a certificate received from
 * a server. Server certificates that fail to validate in all of the
 * ways indicated here will be rejected unless the application
 * overrides the default via #GTlsConnection::accept-certificate.
 *
 * Since: 2.28
 */


/**
 * GTlsConnection:
 *
 * Abstract base class for the backend-specific #GTlsClientConnection
 * and #GTlsServerConnection types.
 *
 * Since: 2.28
 */


/**
 * GTlsConnection::accept-certificate:
 * @conn: a #GTlsConnection
 * @peer_cert: the peer's #GTlsCertificate
 * @errors: the problems with @peer_cert.
 *
 * Emitted during the TLS handshake after the peer certificate has
 * been received. You can examine @peer_cert's certification path by
 * calling g_tls_certificate_get_issuer() on it.
 *
 * For a client-side connection, @peer_cert is the server's
 * certificate, and the signal will only be emitted if the
 * certificate was not acceptable according to @conn's
 * #GTlsClientConnection:validation_flags. If you would like the
 * certificate to be accepted despite @errors, return %TRUE from the
 * signal handler. Otherwise, if no handler accepts the certificate,
 * the handshake will fail with %G_TLS_ERROR_BAD_CERTIFICATE.
 *
 * For a server-side connection, @peer_cert is the certificate
 * presented by the client, if this was requested via the server's
 * #GTlsServerConnection:authentication_mode. On the server side,
 * the signal is always emitted when the client presents a
 * certificate, and the certificate will only be accepted if a
 * handler returns %TRUE.
 *
 * Note that if this signal is emitted as part of asynchronous I/O
 * in the main thread, then you should not attempt to interact with
 * the user before returning from the signal handler. If you want to
 * let the user decide whether or not to accept the certificate, you
 * would have to return %FALSE from the signal handler on the first
 * attempt, and then after the connection attempt returns a
 * %G_TLS_ERROR_HANDSHAKE, you can interact with the user, and if
 * the user decides to accept the certificate, remember that fact,
 * create a new connection, and return %TRUE from the signal handler
 * the next time.
 *
 * If you are doing I/O in another thread, you do not
 * need to worry about this, and can simply block in the signal
 * handler until the UI thread returns an answer.
 *
 * Returns: %TRUE to accept @peer_cert (which will also immediately end the signal emission). %FALSE to allow the signal emission to continue, which will cause the handshake to fail if no one else overrides it.
 * Since: 2.28
 */


/**
 * GTlsConnection:base-io-stream:
 *
 * The #GIOStream that the connection wraps
 *
 * Since: 2.28
 */


/**
 * GTlsConnection:certificate:
 *
 * The connection's certificate; see
 * g_tls_connection_set_certificate().
 *
 * Since: 2.28
 */


/**
 * GTlsConnection:database:
 *
 * The certificate database to use when verifying this TLS connection.
 * If no cerificate database is set, then the default database will be
 * used. See g_tls_backend_get_default_database().
 *
 * Since: 2.30
 */


/**
 * GTlsConnection:interaction:
 *
 * A #GTlsInteraction object to be used when the connection or certificate
 * database need to interact with the user. This will be used to prompt the
 * user for passwords where necessary.
 *
 * Since: 2.30
 */


/**
 * GTlsConnection:peer-certificate:
 *
 * The connection's peer's certificate, after the TLS handshake has
 * completed and the certificate has been accepted. Note in
 * particular that this is not yet set during the emission of
 * #GTlsConnection::accept-certificate.
 *
 * (You can watch for a #GObject::notify signal on this property to
 * detect when a handshake has occurred.)
 *
 * Since: 2.28
 */


/**
 * GTlsConnection:peer-certificate-errors:
 *
 * The errors noticed-and-ignored while verifying
 * #GTlsConnection:peer-certificate. Normally this should be 0, but
 * it may not be if #GTlsClientConnection:validation-flags is not
 * %G_TLS_CERTIFICATE_VALIDATE_ALL, or if
 * #GTlsConnection::accept-certificate overrode the default
 * behavior.
 *
 * Since: 2.28
 */


/**
 * GTlsConnection:rehandshake-mode:
 *
 * The rehandshaking mode. See
 * g_tls_connection_set_rehandshake_mode().
 *
 * Since: 2.28
 */


/**
 * GTlsConnection:require-close-notify:
 *
 * Whether or not proper TLS close notification is required.
 * See g_tls_connection_set_require_close_notify().
 *
 * Since: 2.28
 */


/**
 * GTlsConnection:use-system-certdb:
 *
 * Whether or not the system certificate database will be used to
 * verify peer certificates. See
 * g_tls_connection_set_use_system_certdb().
 *
 * Deprecated: 2.30: Use GTlsConnection:database instead
 */


/**
 * GTlsDatabase:
 *
 * Abstract base class for the backend-specific database types.
 *
 * Since: 2.30
 */


/**
 * GTlsFileDatabase:
 *
 * Implemented by a #GTlsDatabase which allows you to load certificates
 * from a file.
 *
 * Since: 2.30
 */


/**
 * GTlsFileDatabase:anchors:
 *
 * The path to a file containing PEM encoded certificate authority
 * root anchors. The certificates in this file will be treated as
 * root authorities for the purpose of verifying other certificates
 * via the g_tls_database_verify_chain() operation.
 *
 * Since: 2.30
 */


/**
 * GTlsInteraction:
 *
 * An object representing interaction that the TLS connection and database
 * might have with the user.
 *
 * Since: 2.30
 */


/**
 * GTlsInteractionClass:
 * @ask_password: ask for a password synchronously. If the implementation returns %G_TLS_INTERACTION_HANDLED, then the password argument should have been filled in by using g_tls_password_set_value() or a similar function.
 * @ask_password_async: ask for a password asynchronously.
 * @ask_password_finish: complete operation to ask for a password asynchronously. If the implementation returns %G_TLS_INTERACTION_HANDLED, then the password argument of the async method should have been filled in by using g_tls_password_set_value() or a similar function.
 *
 * The class for #GTlsInteraction. Derived classes implement the various
 * virtual interaction methods to handle TLS interactions.
 *
 * Derived classes can choose to implement whichever interactions methods they'd
 * like to support by overriding those virtual methods in their class
 * initialization function. If a derived class implements an async method,
 * it must also implement the corresponding finish method.
 *
 * The synchronous interaction methods should implement to display modal dialogs,
 * and the asynchronous methods to display modeless dialogs.
 *
 * If the user cancels an interaction, then the result should be
 * %G_TLS_INTERACTION_FAILED and the error should be set with a domain of
 * %G_IO_ERROR and code of %G_IO_ERROR_CANCELLED.
 *
 * Since: 2.30
 */


/**
 * GTlsPassword:
 *
 * An abstract interface representing a password used in TLS. Often used in
 * user interaction such as unlocking a key storage token.
 *
 * Since: 2.30
 */


/**
 * GTlsServerConnection:authentication-mode:
 *
 * The #GTlsAuthenticationMode for the server. This can be changed
 * before calling g_tls_connection_handshake() if you want to
 * rehandshake with a different mode from the initial handshake.
 *
 * Since: 2.28
 */


/**
 * GUnixCredentialsMessage:credentials:
 *
 * The credentials stored in the message.
 *
 * Since: 2.26
 */


/**
 * GUnixInputStream:close-fd:
 *
 * Whether to close the file descriptor when the stream is closed.
 *
 * Since: 2.20
 */


/**
 * GUnixInputStream:fd:
 *
 * The file descriptor that the stream reads from.
 *
 * Since: 2.20
 */


/**
 * GUnixMountMonitor::mountpoints-changed:
 * @monitor: the object on which the signal is emitted
 *
 * Emitted when the unix mount points have changed.
 */


/**
 * GUnixMountMonitor::mounts-changed:
 * @monitor: the object on which the signal is emitted
 *
 * Emitted when the unix mounts have changed.
 */


/**
 * GUnixOutputStream:close-fd:
 *
 * Whether to close the file descriptor when the stream is closed.
 *
 * Since: 2.20
 */


/**
 * GUnixOutputStream:fd:
 *
 * The file descriptor that the stream writes to.
 *
 * Since: 2.20
 */


/**
 * GUnixSocketAddress:
 *
 * A UNIX-domain (local) socket address, corresponding to a
 * <type>struct sockaddr_un</type>.
 */


/**
 * GUnixSocketAddress:abstract:
 *
 * Whether or not this is an abstract address
 *
 * Deprecated: Use #GUnixSocketAddress:address-type, which distinguishes between zero-padded and non-zero-padded abstract addresses.
 */


/**
 * GVolume::changed:
 *
 * Emitted when the volume has been changed.
 */


/**
 * GVolume::removed:
 *
 * This signal is emitted when the #GVolume have been removed. If
 * the recipient is holding references to the object they should
 * release them so the object can be finalized.
 */


/**
 * GVolumeMonitor::drive-changed:
 * @volume_monitor: The volume monitor emitting the signal.
 * @drive: the drive that changed
 *
 * Emitted when a drive changes.
 */


/**
 * GVolumeMonitor::drive-connected:
 * @volume_monitor: The volume monitor emitting the signal.
 * @drive: a #GDrive that was connected.
 *
 * Emitted when a drive is connected to the system.
 */


/**
 * GVolumeMonitor::drive-disconnected:
 * @volume_monitor: The volume monitor emitting the signal.
 * @drive: a #GDrive that was disconnected.
 *
 * Emitted when a drive is disconnected from the system.
 */


/**
 * GVolumeMonitor::drive-eject-button:
 * @volume_monitor: The volume monitor emitting the signal.
 * @drive: the drive where the eject button was pressed
 *
 * Emitted when the eject button is pressed on @drive.
 *
 * Since: 2.18
 */


/**
 * GVolumeMonitor::drive-stop-button:
 * @volume_monitor: The volume monitor emitting the signal.
 * @drive: the drive where the stop button was pressed
 *
 * Emitted when the stop button is pressed on @drive.
 *
 * Since: 2.22
 */


/**
 * GVolumeMonitor::mount-added:
 * @volume_monitor: The volume monitor emitting the signal.
 * @mount: a #GMount that was added.
 *
 * Emitted when a mount is added.
 */


/**
 * GVolumeMonitor::mount-changed:
 * @volume_monitor: The volume monitor emitting the signal.
 * @mount: a #GMount that changed.
 *
 * Emitted when a mount changes.
 */


/**
 * GVolumeMonitor::mount-pre-unmount:
 * @volume_monitor: The volume monitor emitting the signal.
 * @mount: a #GMount that is being unmounted.
 *
 * Emitted when a mount is about to be removed.
 */


/**
 * GVolumeMonitor::mount-removed:
 * @volume_monitor: The volume monitor emitting the signal.
 * @mount: a #GMount that was removed.
 *
 * Emitted when a mount is removed.
 */


/**
 * GVolumeMonitor::volume-added:
 * @volume_monitor: The volume monitor emitting the signal.
 * @volume: a #GVolume that was added.
 *
 * Emitted when a mountable volume is added to the system.
 */


/**
 * GVolumeMonitor::volume-changed:
 * @volume_monitor: The volume monitor emitting the signal.
 * @volume: a #GVolume that changed.
 *
 * Emitted when mountable volume is changed.
 */


/**
 * GVolumeMonitor::volume-removed:
 * @volume_monitor: The volume monitor emitting the signal.
 * @volume: a #GVolume that was removed.
 *
 * Emitted when a mountable volume is removed from the system.
 */


/**
 * GWin32InputStream:close-handle:
 *
 * Whether to close the file handle when the stream is closed.
 *
 * Since: 2.26
 */


/**
 * GWin32InputStream:handle:
 *
 * The handle that the stream reads from.
 *
 * Since: 2.26
 */


/**
 * GWin32OutputStream:close-handle:
 *
 * Whether to close the file handle when the stream is closed.
 *
 * Since: 2.26
 */


/**
 * GWin32OutputStream:handle:
 *
 * The file handle that the stream writes to.
 *
 * Since: 2.26
 */


/**
 * GZlibCompressor:
 *
 * Zlib decompression
 */


/**
 * GZlibCompressor:file-info:
 *
 * If set to a non-%NULL #GFileInfo object, and #GZlibCompressor:format is
 * %G_ZLIB_COMPRESSOR_FORMAT_GZIP, the compressor will write the file name
 * and modification time from the file info to the the GZIP header.
 *
 * Since: 2.26
 */


/**
 * GZlibDecompressor:
 *
 * Zlib decompression
 */


/**
 * GZlibDecompressor:file-info:
 *
 * A #GFileInfo containing the information found in the GZIP header
 * of the data stream processed, or %NULL if the header was not yet
 * fully processed, is not present at all, or the compressor's
 * #GZlibDecompressor:format property is not %G_ZLIB_COMPRESSOR_FORMAT_GZIP.
 *
 * Since: 2.26
 */


/**
 * G_TLS_DATABASE_PURPOSE_AUTHENTICATE_CLIENT:
 *
 * The purpose used to verify the client certificate in a TLS connection.
 * Used by TLS servers.
 */


/**
 * G_TLS_DATABASE_PURPOSE_AUTHENTICATE_SERVER:
 *
 * The purpose used to verify the server certificate in a TLS connection. This
 * is the most common purpose in use. Used by TLS clients.
 */


/**
 * G_TYPE_SETTINGS_SCHEMA:
 *
 * A boxed #GType corresponding to #GSettingsSchema.
 *
 * Since: 2.32
 */


/**
 * G_TYPE_SETTINGS_SCHEMA_SOURCE:
 *
 * A boxed #GType corresponding to #GSettingsSchemaSource.
 *
 * Since: 2.32
 */


/**
 * SECTION:extensionpoints
 * @short_description: Extension Points
 * @include: gio.h
 * @see_also: <link linkend="extending-gio">Extending GIO</link>
 *
 * #GIOExtensionPoint provides a mechanism for modules to extend the
 * functionality of the library or application that loaded it in an
 * organized fashion.
 *
 * An extension point is identified by a name, and it may optionally
 * require that any implementation must by of a certain type (or derived
 * thereof). Use g_io_extension_point_register() to register an
 * extension point, and g_io_extension_point_set_required_type() to
 * set a required type.
 *
 * A module can implement an extension point by specifying the #GType
 * that implements the functionality. Additionally, each implementation
 * of an extension point has a name, and a priority. Use
 * g_io_extension_point_implement() to implement an extension point.
 *
 *  |[
 *  GIOExtensionPoint *ep;
 *
 *  /&ast; Register an extension point &ast;/
 *  ep = g_io_extension_point_register ("my-extension-point");
 *  g_io_extension_point_set_required_type (ep, MY_TYPE_EXAMPLE);
 *  ]|
 *
 *  |[
 *  /&ast; Implement an extension point &ast;/
 *  G_DEFINE_TYPE (MyExampleImpl, my_example_impl, MY_TYPE_EXAMPLE);
 *  g_io_extension_point_implement ("my-extension-point",
 *                                  my_example_impl_get_type (),
 *                                  "my-example",
 *                                  10);
 *  ]|
 *
 *  It is up to the code that registered the extension point how
 *  it uses the implementations that have been associated with it.
 *  Depending on the use case, it may use all implementations, or
 *  only the one with the highest priority, or pick a specific
 *  one by name.
 *
 *  To avoid opening all modules just to find out what extension
 *  points they implement, GIO makes use of a caching mechanism,
 *  see <link linkend="gio-querymodules">gio-querymodules</link>.
 *  You are expected to run this command after installing a
 *  GIO module.
 *
 *  The <envar>GIO_EXTRA_MODULES</envar> environment variable can be
 *  used to specify additional directories to automatically load modules
 *  from. This environment variable has the same syntax as the
 *  <envar>PATH</envar>. If two modules have the same base name in different
 *  directories, then the latter one will be ignored. If additional
 *  directories are specified GIO will load modules from the built-in
 *  directory last.
 */


/**
 * SECTION:gaction
 * @title: GAction
 * @short_description: An action interface
 *
 * #GAction represents a single named action.
 *
 * The main interface to an action is that it can be activated with
 * g_action_activate().  This results in the 'activate' signal being
 * emitted.  An activation has a #GVariant parameter (which may be
 * %NULL).  The correct type for the parameter is determined by a static
 * parameter type (which is given at construction time).
 *
 * An action may optionally have a state, in which case the state may be
 * set with g_action_change_state().  This call takes a #GVariant.  The
 * correct type for the state is determined by a static state type
 * (which is given at construction time).
 *
 * The state may have a hint associated with it, specifying its valid
 * range.
 *
 * #GAction is merely the interface to the concept of an action, as
 * described above.  Various implementations of actions exist, including
 * #GSimpleAction and #GtkAction.
 *
 * In all cases, the implementing class is responsible for storing the
 * name of the action, the parameter type, the enabled state, the
 * optional state type and the state and emitting the appropriate
 * signals when these change.  The implementor responsible for filtering
 * calls to g_action_activate() and g_action_change_state() for type
 * safety and for the state being enabled.
 *
 * Probably the only useful thing to do with a #GAction is to put it
 * inside of a #GSimpleActionGroup.
 */


/**
 * SECTION:gactiongroup
 * @title: GActionGroup
 * @short_description: A group of actions
 * @see_also: #GAction
 *
 * #GActionGroup represents a group of actions. Actions can be used to
 * expose functionality in a structured way, either from one part of a
 * program to another, or to the outside world. Action groups are often
 * used together with a #GMenuModel that provides additional
 * representation data for displaying the actions to the user, e.g. in
 * a menu.
 *
 * The main way to interact with the actions in a GActionGroup is to
 * activate them with g_action_group_activate_action(). Activating an
 * action may require a #GVariant parameter. The required type of the
 * parameter can be inquired with g_action_group_get_action_parameter_type().
 * Actions may be disabled, see g_action_group_get_action_enabled().
 * Activating a disabled action has no effect.
 *
 * Actions may optionally have a state in the form of a #GVariant. The
 * current state of an action can be inquired with
 * g_action_group_get_action_state(). Activating a stateful action may
 * change its state, but it is also possible to set the state by calling
 * g_action_group_change_action_state().
 *
 * As typical example, consider a text editing application which has an
 * option to change the current font to 'bold'. A good way to represent
 * this would be a stateful action, with a boolean state. Activating the
 * action would toggle the state.
 *
 * Each action in the group has a unique name (which is a string).  All
 * method calls, except g_action_group_list_actions() take the name of
 * an action as an argument.
 *
 * The #GActionGroup API is meant to be the 'public' API to the action
 * group.  The calls here are exactly the interaction that 'external
 * forces' (eg: UI, incoming D-Bus messages, etc.) are supposed to have
 * with actions.  'Internal' APIs (ie: ones meant only to be accessed by
 * the action group implementation) are found on subclasses.  This is
 * why you will find - for example - g_action_group_get_action_enabled()
 * but not an equivalent <function>set()</function> call.
 *
 * Signals are emitted on the action group in response to state changes
 * on individual actions.
 *
 * Implementations of #GActionGroup should provide implementations for
 * the virtual functions g_action_group_list_actions() and
 * g_action_group_query_action().  The other virtual functions should
 * not be implemented - their "wrappers" are actually implemented with
 * calls to g_action_group_query_action().
 */


/**
 * SECTION:gactiongroupexporter
 * @title: GActionGroup exporter
 * @short_description: Export GActionGroups on D-Bus
 * @see_also: #GActionGroup, #GDBusActionGroup
 *
 * These functions support exporting a #GActionGroup on D-Bus.
 * The D-Bus interface that is used is a private implementation
 * detail.
 *
 * To access an exported #GActionGroup remotely, use
 * g_dbus_action_group_get() to obtain a #GDBusActionGroup.
 */


/**
 * SECTION:gactionmap
 * @title: GActionMap
 * @short_description: Interface for action containers
 *
 * The GActionMap interface is implemented by #GActionGroup
 * implementations that operate by containing a number of
 * named #GAction instances, such as #GSimpleActionGroup.
 *
 * One useful application of this interface is to map the
 * names of actions from various action groups to unique,
 * prefixed names (e.g. by prepending "app." or "win.").
 * This is the motivation for the 'Map' part of the interface
 * name.
 *
 * Since: 2.32
 */


/**
 * SECTION:gappinfo
 * @short_description: Application information and launch contexts
 * @include: gio/gio.h
 *
 * #GAppInfo and #GAppLaunchContext are used for describing and launching
 * applications installed on the system.
 *
 * As of GLib 2.20, URIs will always be converted to POSIX paths
 * (using g_file_get_path()) when using g_app_info_launch() even if
 * the application requested an URI and not a POSIX path. For example
 * for an desktop-file based application with Exec key <literal>totem
 * &percnt;U</literal> and a single URI,
 * <literal>sftp://foo/file.avi</literal>, then
 * <literal>/home/user/.gvfs/sftp on foo/file.avi</literal> will be
 * passed. This will only work if a set of suitable GIO extensions
 * (such as gvfs 2.26 compiled with FUSE support), is available and
 * operational; if this is not the case, the URI will be passed
 * unmodified to the application. Some URIs, such as
 * <literal>mailto:</literal>, of course cannot be mapped to a POSIX
 * path (in gvfs there's no FUSE mount for it); such URIs will be
 * passed unmodified to the application.
 *
 * Specifically for gvfs 2.26 and later, the POSIX URI will be mapped
 * back to the GIO URI in the #GFile constructors (since gvfs
 * implements the #GVfs extension point). As such, if the application
 * needs to examine the URI, it needs to use g_file_get_uri() or
 * similar on #GFile. In other words, an application cannot assume
 * that the URI passed to e.g. g_file_new_for_commandline_arg() is
 * equal to the result of g_file_get_uri(). The following snippet
 * illustrates this:
 *
 * <programlisting>
 * GFile *f;
 * char *uri;
 *
 * file = g_file_new_for_commandline_arg (uri_from_commandline);
 *
 * uri = g_file_get_uri (file);
 * strcmp (uri, uri_from_commandline) == 0; // FALSE
 * g_free (uri);
 *
 * if (g_file_has_uri_scheme (file, "cdda"))
 *   {
 *     // do something special with uri
 *   }
 * g_object_unref (file);
 * </programlisting>
 *
 * This code will work when both <literal>cdda://sr0/Track
 * 1.wav</literal> and <literal>/home/user/.gvfs/cdda on sr0/Track
 * 1.wav</literal> is passed to the application. It should be noted
 * that it's generally not safe for applications to rely on the format
 * of a particular URIs. Different launcher applications (e.g. file
 * managers) may have different ideas of what a given URI means.
 */


/**
 * SECTION:gapplication
 * @title: GApplication
 * @short_description: Core application class
 *
 * A #GApplication is the foundation of an application.  It wraps some
 * low-level platform-specific services and is intended to act as the
 * foundation for higher-level application classes such as
 * #GtkApplication or #MxApplication.  In general, you should not use
 * this class outside of a higher level framework.
 *
 * GApplication provides convenient life cycle management by maintaining
 * a <firstterm>use count</firstterm> for the primary application instance.
 * The use count can be changed using g_application_hold() and
 * g_application_release(). If it drops to zero, the application exits.
 * Higher-level classes such as #GtkApplication employ the use count to
 * ensure that the application stays alive as long as it has any opened
 * windows.
 *
 * Another feature that GApplication (optionally) provides is process
 * uniqueness.  Applications can make use of this functionality by
 * providing a unique application ID.  If given, only one application
 * with this ID can be running at a time per session.  The session
 * concept is platform-dependent, but corresponds roughly to a graphical
 * desktop login.  When your application is launched again, its
 * arguments are passed through platform communication to the already
 * running program.  The already running instance of the program is
 * called the <firstterm>primary instance</firstterm>; for non-unique
 * applications this is the always the current instance.
 * On Linux, the D-Bus session bus is used for communication.
 *
 * If used, the expected form of an application identifier is very close
 * to that of of a
 * <ulink url="http://dbus.freedesktop.org/doc/dbus-specification.html#message-protocol-names-interface">DBus bus name</ulink>.
 * Examples include: "com.example.MyApp", "org.example.internal-apps.Calculator".
 * For details on valid application identifiers, see g_application_id_is_valid().
 *
 * On Linux, the application identifier is claimed as a well-known bus name
 * on the user's session bus.  This means that the uniqueness of your
 * application is scoped to the current session.  It also means that your
 * application may provide additional services (through registration of other
 * object paths) at that bus name.  The registration of these object paths
 * should be done with the shared GDBus session bus.  Note that due to the
 * internal architecture of GDBus, method calls can be dispatched at any time
 * (even if a main loop is not running).  For this reason, you must ensure that
 * any object paths that you wish to register are registered before #GApplication
 * attempts to acquire the bus name of your application (which happens in
 * g_application_register()).  Unfortunately, this means that you cannot use
 * g_application_get_is_remote() to decide if you want to register object paths.
 *
 * GApplication also implements the #GActionGroup and #GActionMap
 * interfaces and lets you easily export actions by adding them with
 * g_action_map_add_action(). When invoking an action by calling
 * g_action_group_activate_action() on the application, it is always
 * invoked in the primary instance. The actions are also exported on
 * the session bus, and GIO provides the #GDBusActionGroup wrapper to
 * conveniently access them remotely. GIO provides a #GDBusMenuModel wrapper
 * for remote access to exported #GMenuModels.
 *
 * There is a number of different entry points into a GApplication:
 * <itemizedlist>
 * <listitem>via 'Activate' (i.e. just starting the application)</listitem>
 * <listitem>via 'Open' (i.e. opening some files)</listitem>
 * <listitem>by handling a command-line</listitem>
 * <listitem>via activating an action</listitem>
 * </itemizedlist>
 * The #GApplication::startup signal lets you handle the application
 * initialization for all of these in a single place.
 *
 * Regardless of which of these entry points is used to start the application,
 * GApplication passes some <firstterm id="platform-data">platform
 * data</firstterm> from the launching instance to the primary instance,
 * in the form of a #GVariant dictionary mapping strings to variants.
 * To use platform data, override the @before_emit or @after_emit virtual
 * functions in your #GApplication subclass. When dealing with
 * #GApplicationCommandLine objects, the platform data is directly
 * available via g_application_command_line_get_cwd(),
 * g_application_command_line_get_environ() and
 * g_application_command_line_get_platform_data().
 *
 * As the name indicates, the platform data may vary depending on the
 * operating system, but it always includes the current directory (key
 * "cwd"), and optionally the environment (ie the set of environment
 * variables and their values) of the calling process (key "environ").
 * The environment is only added to the platform data if the
 * %G_APPLICATION_SEND_ENVIRONMENT flag is set. #GApplication subclasses
 * can add their own platform data by overriding the @add_platform_data
 * virtual function. For instance, #GtkApplication adds startup notification
 * data in this way.
 *
 * To parse commandline arguments you may handle the
 * #GApplication::command-line signal or override the local_command_line()
 * vfunc, to parse them in either the primary instance or the local instance,
 * respectively.
 *
 * <example id="gapplication-example-open"><title>Opening files with a GApplication</title>
 * <programlisting>
 * <xi:include xmlns:xi="http://www.w3.org/2001/XInclude" parse="text" href="../../../../gio/tests/gapplication-example-open.c">
 *   <xi:fallback>FIXME: MISSING XINCLUDE CONTENT</xi:fallback>
 * </xi:include>
 * </programlisting>
 * </example>
 *
 * <example id="gapplication-example-actions"><title>A GApplication with actions</title>
 * <programlisting>
 * <xi:include xmlns:xi="http://www.w3.org/2001/XInclude" parse="text" href="../../../../gio/tests/gapplication-example-actions.c">
 *   <xi:fallback>FIXME: MISSING XINCLUDE CONTENT</xi:fallback>
 * </xi:include>
 * </programlisting>
 * </example>
 *
 * <example id="gapplication-example-menu"><title>A GApplication with menus</title>
 * <programlisting>
 * <xi:include xmlns:xi="http://www.w3.org/2001/XInclude" parse="text" href="../../../../gio/tests/gapplication-example-menu.c">
 *   <xi:fallback>FIXME: MISSING XINCLUDE CONTENT</xi:fallback>
 * </xi:include>
 * </programlisting>
 * </example>
 */


/**
 * SECTION:gapplicationcommandline
 * @title: GApplicationCommandLine
 * @short_description: A command-line invocation of an application
 * @see_also: #GApplication
 *
 * #GApplicationCommandLine represents a command-line invocation of
 * an application.  It is created by #GApplication and emitted
 * in the #GApplication::command-line signal and virtual function.
 *
 * The class contains the list of arguments that the program was invoked
 * with.  It is also possible to query if the commandline invocation was
 * local (ie: the current process is running in direct response to the
 * invocation) or remote (ie: some other process forwarded the
 * commandline to this process).
 *
 * The GApplicationCommandLine object can provide the @argc and @argv
 * parameters for use with the #GOptionContext command-line parsing API,
 * with the g_application_command_line_get_arguments() function. See
 * <xref linkend="gapplication-example-cmdline3"/> for an example.
 *
 * The exit status of the originally-invoked process may be set and
 * messages can be printed to stdout or stderr of that process.  The
 * lifecycle of the originally-invoked process is tied to the lifecycle
 * of this object (ie: the process exits when the last reference is
 * dropped).
 *
 * The main use for #GApplicationCommandLine (and the
 * #GApplication::command-line signal) is 'Emacs server' like use cases:
 * You can set the <envar>EDITOR</envar> environment variable to have
 * e.g. git use your favourite editor to edit commit messages, and if you
 * already have an instance of the editor running, the editing will happen
 * in the running instance, instead of opening a new one. An important
 * aspect of this use case is that the process that gets started by git
 * does not return until the editing is done.
 *
 * <example id="gapplication-example-cmdline"><title>Handling commandline arguments with GApplication</title>
 * <para>
 * A simple example where the commandline is completely handled
 * in the #GApplication::command-line handler. The launching instance exits
 * once the signal handler in the primary instance has returned, and the
 * return value of the signal handler becomes the exit status of the launching
 * instance.
 * </para>
 * <programlisting>
 * <xi:include xmlns:xi="http://www.w3.org/2001/XInclude" parse="text" href="../../../../gio/tests/gapplication-example-cmdline.c">
 *   <xi:fallback>FIXME: MISSING XINCLUDE CONTENT</xi:fallback>
 * </xi:include>
 * </programlisting>
 * </example>
 *
 * <example id="gapplication-example-cmdline2"><title>Split commandline handling</title>
 * <para>
 * An example of split commandline handling. Options that start with
 * <literal>--local-</literal> are handled locally, all other options are
 * passed to the #GApplication::command-line handler which runs in the primary
 * instance.
 * </para>
 * <programlisting>
 * <xi:include xmlns:xi="http://www.w3.org/2001/XInclude" parse="text" href="../../../../gio/tests/gapplication-example-cmdline2.c">
 *   <xi:fallback>FIXME: MISSING XINCLUDE CONTENT</xi:fallback>
 * </xi:include>
 * </programlisting>
 * </example>
 *
 * <example id="gapplication-example-cmdline3"><title>Deferred commandline handling</title>
 * <para>
 * An example of deferred commandline handling. Here, the commandline is
 * not completely handled before the #GApplication::command-line handler
 * returns. Instead, we keep a reference to the GApplicationCommandLine
 * object and handle it later(in this example, in an idle). Note that it
 * is necessary to hold the application until you are done with the
 * commandline.
 * </para>
 * <para>
 * This example also shows how to use #GOptionContext for parsing the
 * commandline arguments. Note that it is necessary to disable the
 * built-in help-handling of #GOptionContext, since it calls exit()
 * after printing help, which is not what you want to happen in
 * the primary instance.
 * </para>
 * <programlisting>
 * <xi:include xmlns:xi="http://www.w3.org/2001/XInclude" parse="text" href="../../../../gio/tests/gapplication-example-cmdline3.c">
 *   <xi:fallback>FIXME: MISSING XINCLUDE CONTENT</xi:fallback>
 * </xi:include>
 * </programlisting>
 * </example>
 */


/**
 * SECTION:gasyncinitable
 * @short_description: Asynchronously failable object initialization interface
 * @include: gio/gio.h
 * @see_also: #GInitable
 *
 * This is the asynchronous version of #GInitable; it behaves the same
 * in all ways except that initialization is asynchronous. For more details
 * see the descriptions on #GInitable.
 *
 * A class may implement both the #GInitable and #GAsyncInitable interfaces.
 *
 * Users of objects implementing this are not intended to use the interface
 * method directly; instead it will be used automatically in various ways.
 * For C applications you generally just call g_async_initable_new_async()
 * directly, or indirectly via a foo_thing_new_async() wrapper. This will call
 * g_async_initable_init_async() under the cover, calling back with %NULL and
 * a set %GError on failure.
 *
 * A typical implementation might look something like this:
 *
 * |[
 * enum {
 *    NOT_INITIALIZED,
 *    INITIALIZING,
 *    INITIALIZED
 * };
 *
 * static void
 * _foo_ready_cb (Foo *self)
 * {
 *   GList *l;
 *
 *   self->priv->state = INITIALIZED;
 *
 *   for (l = self->priv->init_results; l != NULL; l = l->next)
 *     {
 *       GSimpleAsyncResult *simple = l->data;
 *
 *       if (!self->priv->success)
 *         g_simple_async_result_set_error (simple, ...);
 *
 *       g_simple_async_result_complete (simple);
 *       g_object_unref (simple);
 *     }
 *
 *   g_list_free (self->priv->init_results);
 *   self->priv->init_results = NULL;
 * }
 *
 * static void
 * foo_init_async (GAsyncInitable       *initable,
 *                 int                   io_priority,
 *                 GCancellable         *cancellable,
 *                 GAsyncReadyCallback   callback,
 *                 gpointer              user_data)
 * {
 *   Foo *self = FOO (initable);
 *   GSimpleAsyncResult *simple;
 *
 *   simple = g_simple_async_result_new (G_OBJECT (initable)
 *                                       callback,
 *                                       user_data,
 *                                       foo_init_async);
 *
 *   switch (self->priv->state)
 *     {
 *       case NOT_INITIALIZED:
 *         _foo_get_ready (self);
 *         self->priv->init_results = g_list_append (self->priv->init_results,
 *                                                   simple);
 *         self->priv->state = INITIALIZING;
 *         break;
 *       case INITIALIZING:
 *         self->priv->init_results = g_list_append (self->priv->init_results,
 *                                                   simple);
 *         break;
 *       case INITIALIZED:
 *         if (!self->priv->success)
 *           g_simple_async_result_set_error (simple, ...);
 *
 *         g_simple_async_result_complete_in_idle (simple);
 *         g_object_unref (simple);
 *         break;
 *     }
 * }
 *
 * static gboolean
 * foo_init_finish (GAsyncInitable       *initable,
 *                  GAsyncResult         *result,
 *                  GError              **error)
 * {
 *   g_return_val_if_fail (g_simple_async_result_is_valid (result,
 *       G_OBJECT (initable), foo_init_async), FALSE);
 *
 *   if (g_simple_async_result_propagate_error (G_SIMPLE_ASYNC_RESULT (result),
 *           error))
 *     return FALSE;
 *
 *   return TRUE;
 * }
 *
 * static void
 * foo_async_initable_iface_init (gpointer g_iface,
 *                                gpointer data)
 * {
 *   GAsyncInitableIface *iface = g_iface;
 *
 *   iface->init_async = foo_init_async;
 *   iface->init_finish = foo_init_finish;
 * }
 * ]|
 */


/**
 * SECTION:gasyncresult
 * @short_description: Asynchronous Function Results
 * @include: gio/gio.h
 * @see_also: #GSimpleAsyncResult
 *
 * Provides a base class for implementing asynchronous function results.
 *
 * Asynchronous operations are broken up into two separate operations
 * which are chained together by a #GAsyncReadyCallback. To begin
 * an asynchronous operation, provide a #GAsyncReadyCallback to the
 * asynchronous function. This callback will be triggered when the
 * operation has completed, and will be passed a #GAsyncResult instance
 * filled with the details of the operation's success or failure, the
 * object the asynchronous function was started for and any error codes
 * returned. The asynchronous callback function is then expected to call
 * the corresponding "_finish()" function, passing the object the
 * function was called for, the #GAsyncResult instance, and (optionally)
 * an @error to grab any error conditions that may have occurred.
 *
 * The "_finish()" function for an operation takes the generic result
 * (of type #GAsyncResult) and returns the specific result that the
 * operation in question yields (e.g. a #GFileEnumerator for a
 * "enumerate children" operation). If the result or error status of the
 * operation is not needed, there is no need to call the "_finish()"
 * function; GIO will take care of cleaning up the result and error
 * information after the #GAsyncReadyCallback returns. You can pass
 * %NULL for the #GAsyncReadyCallback if you don't need to take any
 * action at all after the operation completes. Applications may also
 * take a reference to the #GAsyncResult and call "_finish()" later;
 * however, the "_finish()" function may be called at most once.
 *
 * Example of a typical asynchronous operation flow:
 * |[
 * void _theoretical_frobnitz_async (Theoretical         *t,
 *                                   GCancellable        *c,
 *                                   GAsyncReadyCallback *cb,
 *                                   gpointer             u);
 *
 * gboolean _theoretical_frobnitz_finish (Theoretical   *t,
 *                                        GAsyncResult  *res,
 *                                        GError       **e);
 *
 * static void
 * frobnitz_result_func (GObject      *source_object,
 * 		 GAsyncResult *res,
 * 		 gpointer      user_data)
 * {
 *   gboolean success = FALSE;
 *
 *   success = _theoretical_frobnitz_finish (source_object, res, NULL);
 *
 *   if (success)
 *     g_printf ("Hurray!\n");
 *   else
 *     g_printf ("Uh oh!\n");
 *
 *   /<!-- -->* ... *<!-- -->/
 *
 * }
 *
 * int main (int argc, void *argv[])
 * {
 *    /<!-- -->* ... *<!-- -->/
 *
 *    _theoretical_frobnitz_async (theoretical_data,
 *                                 NULL,
 *                                 frobnitz_result_func,
 *                                 NULL);
 *
 *    /<!-- -->* ... *<!-- -->/
 * }
 * ]|
 *
 * The callback for an asynchronous operation is called only once, and is
 * always called, even in the case of a cancelled operation. On cancellation
 * the result is a %G_IO_ERROR_CANCELLED error.
 */


/**
 * SECTION:gbufferedinputstream
 * @short_description: Buffered Input Stream
 * @include: gio/gio.h
 * @see_also: #GFilterInputStream, #GInputStream
 *
 * Buffered input stream implements #GFilterInputStream and provides
 * for buffered reads.
 *
 * By default, #GBufferedInputStream's buffer size is set at 4 kilobytes.
 *
 * To create a buffered input stream, use g_buffered_input_stream_new(),
 * or g_buffered_input_stream_new_sized() to specify the buffer's size at
 * construction.
 *
 * To get the size of a buffer within a buffered input stream, use
 * g_buffered_input_stream_get_buffer_size(). To change the size of a
 * buffered input stream's buffer, use
 * g_buffered_input_stream_set_buffer_size(). Note that the buffer's size
 * cannot be reduced below the size of the data within the buffer.
 */


/**
 * SECTION:gbufferedoutputstream
 * @short_description: Buffered Output Stream
 * @include: gio/gio.h
 * @see_also: #GFilterOutputStream, #GOutputStream
 *
 * Buffered output stream implements #GFilterOutputStream and provides
 * for buffered writes.
 *
 * By default, #GBufferedOutputStream's buffer size is set at 4 kilobytes.
 *
 * To create a buffered output stream, use g_buffered_output_stream_new(),
 * or g_buffered_output_stream_new_sized() to specify the buffer's size
 * at construction.
 *
 * To get the size of a buffer within a buffered input stream, use
 * g_buffered_output_stream_get_buffer_size(). To change the size of a
 * buffered output stream's buffer, use
 * g_buffered_output_stream_set_buffer_size(). Note that the buffer's
 * size cannot be reduced below the size of the data within the buffer.
 */


/**
 * SECTION:gcancellable
 * @short_description: Thread-safe Operation Cancellation Stack
 * @include: gio/gio.h
 *
 * GCancellable is a thread-safe operation cancellation stack used
 * throughout GIO to allow for cancellation of synchronous and
 * asynchronous operations.
 */


/**
 * SECTION:gcharsetconverter
 * @short_description: Convert between charsets
 * @include: gio/gio.h
 *
 * #GCharsetConverter is an implementation of #GConverter based on
 * GIConv.
 */


/**
 * SECTION:gcontenttype
 * @short_description: Platform-specific content typing
 * @include: gio/gio.h
 *
 * A content type is a platform specific string that defines the type
 * of a file. On UNIX it is a <ulink url="http://www.wikipedia.org/wiki/Internet_media_type">mime type</ulink> like "text/plain" or "image/png".
 * On Win32 it is an extension string like ".doc", ".txt" or a perceived
 * string like "audio". Such strings can be looked up in the registry at
 * HKEY_CLASSES_ROOT.
 */


/**
 * SECTION:gconverter
 * @short_description: Data conversion interface
 * @include: gio/gio.h
 * @see_also: #GInputStream, #GOutputStream
 *
 * #GConverter is implemented by objects that convert
 * binary data in various ways. The conversion can be
 * stateful and may fail at any place.
 *
 * Some example conversions are: character set conversion,
 * compression, decompression and regular expression
 * replace.
 *
 * Since: 2.24
 */


/**
 * SECTION:gconverterinputstream
 * @short_description: Converter Input Stream
 * @include: gio/gio.h
 * @see_also: #GInputStream, #GConverter
 *
 * Converter input stream implements #GInputStream and allows
 * conversion of data of various types during reading.
 *
 * As of GLib 2.34, #GConverterInputStream implements
 * #GPollableInputStream.
 */


/**
 * SECTION:gconverteroutputstream
 * @short_description: Converter Output Stream
 * @include: gio/gio.h
 * @see_also: #GOutputStream, #GConverter
 *
 * Converter output stream implements #GOutputStream and allows
 * conversion of data of various types during reading.
 *
 * As of GLib 2.34, #GConverterOutputStream implements
 * #GPollableOutputStream.
 */


/**
 * SECTION:gcredentials
 * @short_description: An object containing credentials
 * @include: gio/gio.h
 *
 * The #GCredentials type is a reference-counted wrapper for native
 * credentials. This information is typically used for identifying,
 * authenticating and authorizing other processes.
 *
 * Some operating systems supports looking up the credentials of the
 * remote peer of a communication endpoint - see e.g.
 * g_socket_get_credentials().
 *
 * Some operating systems supports securely sending and receiving
 * credentials over a Unix Domain Socket, see
 * #GUnixCredentialsMessage, g_unix_connection_send_credentials() and
 * g_unix_connection_receive_credentials() for details.
 *
 * On Linux, the native credential type is a <type>struct ucred</type>
 * - see the
 * <citerefentry><refentrytitle>unix</refentrytitle><manvolnum>7</manvolnum></citerefentry>
 * man page for details. This corresponds to
 * %G_CREDENTIALS_TYPE_LINUX_UCRED.
 *
 * On FreeBSD, the native credential type is a <type>struct cmsgcred</type>.
 * This corresponds to %G_CREDENTIALS_TYPE_FREEBSD_CMSGCRED.
 *
 * On OpenBSD, the native credential type is a <type>struct sockpeercred</type>.
 * This corresponds to %G_CREDENTIALS_TYPE_OPENBSD_SOCKPEERCRED.
 */


/**
 * SECTION:gdatainputstream
 * @short_description: Data Input Stream
 * @include: gio/gio.h
 * @see_also: #GInputStream
 *
 * Data input stream implements #GInputStream and includes functions for
 * reading structured data directly from a binary input stream.
 */


/**
 * SECTION:gdataoutputstream
 * @short_description: Data Output Stream
 * @include: gio/gio.h
 * @see_also: #GOutputStream
 *
 * Data output stream implements #GOutputStream and includes functions for
 * writing data directly to an output stream.
 */


/**
 * SECTION:gdbusactiongroup
 * @title: GDBusActionGroup
 * @short_description: A D-Bus GActionGroup implementation
 * @see_also: <link linkend="gio-GActionGroup-exporter">GActionGroup exporter</link>
 *
 * #GDBusActionGroup is an implementation of the #GActionGroup
 * interface that can be used as a proxy for an action group
 * that is exported over D-Bus with g_dbus_connection_export_action_group().
 */


/**
 * SECTION:gdbusaddress
 * @title: D-Bus Addresses
 * @short_description: D-Bus connection endpoints
 * @include: gio/gio.h
 *
 * Routines for working with D-Bus addresses. A D-Bus address is a string
 * like "unix:tmpdir=/tmp/my-app-name". The exact format of addresses
 * is explained in detail in the <link linkend="http://dbus.freedesktop.org/doc/dbus-specification.html&num;addresses">D-Bus specification</link>.
 */


/**
 * SECTION:gdbusauthobserver
 * @short_description: Object used for authenticating connections
 * @include: gio/gio.h
 *
 * The #GDBusAuthObserver type provides a mechanism for participating
 * in how a #GDBusServer (or a #GDBusConnection) authenticates remote
 * peers. Simply instantiate a #GDBusAuthObserver and connect to the
 * signals you are interested in. Note that new signals may be added
 * in the future
 *
 * For example, if you only want to allow D-Bus connections from
 * processes owned by the same uid as the server, you would use a
 * signal handler like the following:
 * <example id="auth-observer"><title>Controlling Authentication</title><programlisting>
 * static gboolean
 * on_authorize_authenticated_peer (GDBusAuthObserver *observer,
 *                                  GIOStream         *stream,
 *                                  GCredentials      *credentials,
 *                                  gpointer           user_data)
 * {
 *   gboolean authorized;
 *
 *   authorized = FALSE;
 *   if (credentials != NULL)
 *     {
 *       GCredentials *own_credentials;
 *       own_credentials = g_credentials_new ();
 *       if (g_credentials_is_same_user (credentials, own_credentials, NULL))
 *         authorized = TRUE;
 *       g_object_unref (own_credentials);
 *     }
 *
 *   return authorized;
 * }
 * </programlisting></example>
 */


/**
 * SECTION:gdbusconnection
 * @short_description: D-Bus Connections
 * @include: gio/gio.h
 *
 * The #GDBusConnection type is used for D-Bus connections to remote
 * peers such as a message buses. It is a low-level API that offers a
 * lot of flexibility. For instance, it lets you establish a connection
 * over any transport that can by represented as an #GIOStream.
 *
 * This class is rarely used directly in D-Bus clients. If you are writing
 * an D-Bus client, it is often easier to use the g_bus_own_name(),
 * g_bus_watch_name() or g_dbus_proxy_new_for_bus() APIs.
 *
 * As an exception to the usual GLib rule that a particular object must not be
 * used by two threads at the same time, #GDBusConnection's methods may be
 * called from any thread<footnote>
 * <para>
 *   This is so that g_bus_get() and g_bus_get_sync() can safely return the
 *   same #GDBusConnection when called from any thread.
 * </para>
 * </footnote>.
 *
 * Most of the ways to obtain a #GDBusConnection automatically initialize it
 * (i.e. connect to D-Bus): for instance, g_dbus_connection_new() and
 * g_bus_get(), and the synchronous versions of those methods, give you an
 * initialized connection. Language bindings for GIO should use
 * g_initable_new() or g_async_initable_new_async(), which also initialize the
 * connection.
 *
 * If you construct an uninitialized #GDBusConnection, such as via
 * g_object_new(), you must initialize it via g_initable_init() or
 * g_async_initable_init_async() before using its methods or properties.
 * Calling methods or accessing properties on a #GDBusConnection that has not
 * completed initialization successfully is considered to be invalid, and leads
 * to undefined behaviour. In particular, if initialization fails with a
 * #GError, the only valid thing you can do with that #GDBusConnection is to
 * free it with g_object_unref().
 *
 * <example id="gdbus-server"><title>D-Bus server example</title><programlisting><xi:include xmlns:xi="http://www.w3.org/2001/XInclude" parse="text" href="../../../../gio/tests/gdbus-example-server.c"><xi:fallback>FIXME: MISSING XINCLUDE CONTENT</xi:fallback></xi:include></programlisting></example>
 *
 * <example id="gdbus-subtree-server"><title>D-Bus subtree example</title><programlisting><xi:include xmlns:xi="http://www.w3.org/2001/XInclude" parse="text" href="../../../../gio/tests/gdbus-example-subtree.c"><xi:fallback>FIXME: MISSING XINCLUDE CONTENT</xi:fallback></xi:include></programlisting></example>
 *
 * <example id="gdbus-unix-fd-client"><title>D-Bus UNIX File Descriptor example</title><programlisting><xi:include xmlns:xi="http://www.w3.org/2001/XInclude" parse="text" href="../../../../gio/tests/gdbus-example-unix-fd-client.c"><xi:fallback>FIXME: MISSING XINCLUDE CONTENT</xi:fallback></xi:include></programlisting></example>
 *
 * <example id="gdbus-export"><title>Exporting a GObject</title><programlisting><xi:include xmlns:xi="http://www.w3.org/2001/XInclude" parse="text" href="../../../../gio/tests/gdbus-example-export.c"><xi:fallback>FIXME: MISSING XINCLUDE CONTENT</xi:fallback></xi:include></programlisting></example>
 */


/**
 * SECTION:gdbuserror
 * @title: GDBusError
 * @short_description: Mapping D-Bus errors to and from GError
 * @include: gio/gio.h
 *
 * All facilities that return errors from remote methods (such as
 * g_dbus_connection_call_sync()) use #GError to represent both D-Bus
 * errors (e.g. errors returned from the other peer) and locally
 * in-process generated errors.
 *
 * To check if a returned #GError is an error from a remote peer, use
 * g_dbus_error_is_remote_error(). To get the actual D-Bus error name,
 * use g_dbus_error_get_remote_error(). Before presenting an error,
 * always use g_dbus_error_strip_remote_error().
 *
 * In addition, facilities used to return errors to a remote peer also
 * use #GError. See g_dbus_method_invocation_return_error() for
 * discussion about how the D-Bus error name is set.
 *
 * Applications can associate a #GError error domain with a set of D-Bus errors in order to
 * automatically map from D-Bus errors to #GError and back. This
 * is typically done in the function returning the #GQuark for the
 * error domain:
 * <example id="error-registration"><title>Error Registration</title><programlisting>
 * /<!-- -->* foo-bar-error.h: *<!-- -->/
 *
 * #define FOO_BAR_ERROR (foo_bar_error_quark ())
 * GQuark foo_bar_error_quark (void);
 *
 * typedef enum
 * {
 *   FOO_BAR_ERROR_FAILED,
 *   FOO_BAR_ERROR_ANOTHER_ERROR,
 *   FOO_BAR_ERROR_SOME_THIRD_ERROR,
 * } FooBarError;
 *
 * /<!-- -->* foo-bar-error.c: *<!-- -->/
 *
 * static const GDBusErrorEntry foo_bar_error_entries[] =
 * {
 *   {FOO_BAR_ERROR_FAILED,           "org.project.Foo.Bar.Error.Failed"},
 *   {FOO_BAR_ERROR_ANOTHER_ERROR,    "org.project.Foo.Bar.Error.AnotherError"},
 *   {FOO_BAR_ERROR_SOME_THIRD_ERROR, "org.project.Foo.Bar.Error.SomeThirdError"},
 * };
 *
 * GQuark
 * foo_bar_error_quark (void)
 * {
 *   static volatile gsize quark_volatile = 0;
 *   g_dbus_error_register_error_domain ("foo-bar-error-quark",
 *                                       &quark_volatile,
 *                                       foo_bar_error_entries,
 *                                       G_N_ELEMENTS (foo_bar_error_entries));
 *   G_STATIC_ASSERT (G_N_ELEMENTS (foo_bar_error_entries) - 1 == FOO_BAR_ERROR_SOME_THIRD_ERROR);
 *   return (GQuark) quark_volatile;
 * }
 * </programlisting></example>
 * With this setup, a D-Bus peer can transparently pass e.g. %FOO_BAR_ERROR_ANOTHER_ERROR and
 * other peers will see the D-Bus error name <literal>org.project.Foo.Bar.Error.AnotherError</literal>.
 * If the other peer is using GDBus, the peer will see also %FOO_BAR_ERROR_ANOTHER_ERROR instead
 * of %G_IO_ERROR_DBUS_ERROR. Note that GDBus clients can still recover
 * <literal>org.project.Foo.Bar.Error.AnotherError</literal> using g_dbus_error_get_remote_error().
 *
 * Note that errors in the %G_DBUS_ERROR error domain is intended only
 * for returning errors from a remote message bus process. Errors
 * generated locally in-process by e.g. #GDBusConnection is from the
 * %G_IO_ERROR domain.
 */


/**
 * SECTION:gdbusinterface
 * @short_description: Base type for D-Bus interfaces
 * @include: gio/gio.h
 *
 * The #GDBusInterface type is the base type for D-Bus interfaces both
 * on the service side (see #GDBusInterfaceSkeleton) and client side
 * (see #GDBusProxy).
 */


/**
 * SECTION:gdbusinterfaceskeleton
 * @short_description: Service-side D-Bus interface
 * @include: gio/gio.h
 *
 * Abstract base class for D-Bus interfaces on the service side.
 */


/**
 * SECTION:gdbusintrospection
 * @title: D-Bus Introspection Data
 * @short_description: Node and interface description data structures
 * @include: gio/gio.h
 *
 * Various data structures and convenience routines to parse and
 * generate D-Bus introspection XML. Introspection information is
 * used when registering objects with g_dbus_connection_register_object().
 *
 * The format of D-Bus introspection XML is specified in the
 * <ulink url="http://dbus.freedesktop.org/doc/dbus-specification.html#introspection-format">D-Bus specification</ulink>.
 */


/**
 * SECTION:gdbusmenumodel
 * @title: GDBusMenuModel
 * @short_description: A D-Bus GMenuModel implementation
 * @see_also: <link linkend="gio-GMenuModel-exporter">GMenuModel Exporter</link>
 *
 * #GDBusMenuModel is an implementation of #GMenuModel that can be used
 * as a proxy for a menu model that is exported over D-Bus with
 * g_dbus_connection_export_menu_model().
 */


/**
 * SECTION:gdbusmessage
 * @short_description: D-Bus Message
 * @include: gio/gio.h
 *
 * A type for representing D-Bus messages that can be sent or received
 * on a #GDBusConnection.
 */


/**
 * SECTION:gdbusmethodinvocation
 * @short_description: Object for handling remote calls
 * @include: gio/gio.h
 *
 * Instances of the #GDBusMethodInvocation class are used when
 * handling D-Bus method calls. It provides a way to asynchronously
 * return results and errors.
 *
 * The normal way to obtain a #GDBusMethodInvocation object is to receive
 * it as an argument to the handle_method_call() function in a
 * #GDBusInterfaceVTable that was passed to g_dbus_connection_register_object().
 */


/**
 * SECTION:gdbusnameowning
 * @title: Owning Bus Names
 * @short_description: Simple API for owning bus names
 * @include: gio/gio.h
 *
 * Convenience API for owning bus names.
 *
 * <example id="gdbus-owning-names"><title>Simple application owning a name</title><programlisting><xi:include xmlns:xi="http://www.w3.org/2001/XInclude" parse="text" href="../../../../gio/tests/gdbus-example-own-name.c"><xi:fallback>FIXME: MISSING XINCLUDE CONTENT</xi:fallback></xi:include></programlisting></example>
 */


/**
 * SECTION:gdbusnamewatching
 * @title: Watching Bus Names
 * @short_description: Simple API for watching bus names
 * @include: gio/gio.h
 *
 * Convenience API for watching bus names.
 *
 * <example id="gdbus-watching-names"><title>Simple application watching a name</title><programlisting><xi:include xmlns:xi="http://www.w3.org/2001/XInclude" parse="text" href="../../../../gio/tests/gdbus-example-watch-name.c"><xi:fallback>FIXME: MISSING XINCLUDE CONTENT</xi:fallback></xi:include></programlisting></example>
 */


/**
 * SECTION:gdbusobject
 * @short_description: Base type for D-Bus objects
 * @include: gio/gio.h
 *
 * The #GDBusObject type is the base type for D-Bus objects on both
 * the service side (see #GDBusObjectSkeleton) and the client side
 * (see #GDBusObjectProxy). It is essentially just a container of
 * interfaces.
 */


/**
 * SECTION:gdbusobjectmanager
 * @short_description: Base type for D-Bus object managers
 * @include: gio/gio.h
 *
 * The #GDBusObjectManager type is the base type for service- and
 * client-side implementations of the standardized <ulink
 * url="http://dbus.freedesktop.org/doc/dbus-specification.html#standard-interfaces-objectmanager">org.freedesktop.DBus.ObjectManager</ulink>
 * interface.
 *
 * See #GDBusObjectManagerClient for the client-side implementation
 * and #GDBusObjectManagerServer for the service-side implementation.
 */


/**
 * SECTION:gdbusobjectmanagerclient
 * @short_description: Client-side object manager
 * @include: gio/gio.h
 *
 * #GDBusObjectManagerClient is used to create, monitor and delete object
 * proxies for remote objects exported by a #GDBusObjectManagerServer (or any
 * code implementing the <ulink
 * url="http://dbus.freedesktop.org/doc/dbus-specification.html#standard-interfaces-objectmanager">org.freedesktop.DBus.ObjectManager</ulink>
 * interface).
 *
 * Once an instance of this type has been created, you can connect to
 * the #GDBusObjectManager::object-added and
 * #GDBusObjectManager::object-removed signals and inspect the
 * #GDBusObjectProxy objects returned by
 * g_dbus_object_manager_get_objects().
 *
 * If the name for a #GDBusObjectManagerClient is not owned by anyone at
 * object construction time, the default behavior is to request the
 * message bus to launch an owner for the name. This behavior can be
 * disabled using the %G_DBUS_OBJECT_MANAGER_CLIENT_FLAGS_DO_NOT_AUTO_START
 * flag. It's also worth noting that this only works if the name of
 * interest is activatable in the first place. E.g. in some cases it
 * is not possible to launch an owner for the requested name. In this
 * case, #GDBusObjectManagerClient object construction still succeeds but
 * there will be no object proxies
 * (e.g. g_dbus_object_manager_get_objects() returns the empty list) and
 * the #GDBusObjectManagerClient:name-owner property is %NULL.
 *
 * The owner of the requested name can come and go (for example
 * consider a system service being restarted) – #GDBusObjectManagerClient
 * handles this case too; simply connect to the #GObject::notify
 * signal to watch for changes on the #GDBusObjectManagerClient:name-owner
 * property. When the name owner vanishes, the behavior is that
 * #GDBusObjectManagerClient:name-owner is set to %NULL (this includes
 * emission of the #GObject::notify signal) and then
 * #GDBusObjectManager::object-removed signals are synthesized
 * for all currently existing object proxies. Since
 * #GDBusObjectManagerClient:name-owner is %NULL when this happens, you can
 * use this information to disambiguate a synthesized signal from a
 * genuine signal caused by object removal on the remote
 * #GDBusObjectManager. Similarly, when a new name owner appears,
 * #GDBusObjectManager::object-added signals are synthesized
 * while #GDBusObjectManagerClient:name-owner is still %NULL. Only when all
 * object proxies have been added, the #GDBusObjectManagerClient:name-owner
 * is set to the new name owner (this includes emission of the
 * #GObject::notify signal).  Furthermore, you are guaranteed that
 * #GDBusObjectManagerClient:name-owner will alternate between a name owner
 * (e.g. <literal>:1.42</literal>) and %NULL even in the case where
 * the name of interest is atomically replaced
 *
 * Ultimately, #GDBusObjectManagerClient is used to obtain #GDBusProxy
 * instances. All signals (including the
 * <literal>org.freedesktop.DBus.Properties::PropertiesChanged</literal>
 * signal) delivered to #GDBusProxy instances are guaranteed to
 * originate from the name owner. This guarantee along with the
 * behavior described above, means that certain race conditions
 * including the <emphasis><quote>half the proxy is from the old owner
 * and the other half is from the new owner</quote></emphasis> problem
 * cannot happen.
 *
 * To avoid having the application connect to signals on the returned
 * #GDBusObjectProxy and #GDBusProxy objects, the
 * #GDBusObject::interface-added,
 * #GDBusObject::interface-removed,
 * #GDBusProxy::g-properties-changed and
 * #GDBusProxy::g-signal signals
 * are also emitted on the #GDBusObjectManagerClient instance managing these
 * objects. The signals emitted are
 * #GDBusObjectManager::interface-added,
 * #GDBusObjectManager::interface-removed,
 * #GDBusObjectManagerClient::interface-proxy-properties-changed and
 * #GDBusObjectManagerClient::interface-proxy-signal.
 *
 * Note that all callbacks and signals are emitted in the
 * <link linkend="g-main-context-push-thread-default">thread-default main loop</link>
 * that the #GDBusObjectManagerClient object was constructed
 * in. Additionally, the #GDBusObjectProxy and #GDBusProxy objects
 * originating from the #GDBusObjectManagerClient object will be created in
 * the same context and, consequently, will deliver signals in the
 * same main loop.
 */


/**
 * SECTION:gdbusobjectmanagerserver
 * @short_description: Service-side object manager
 * @include: gio/gio.h
 *
 * #GDBusObjectManagerServer is used to export #GDBusObject instances using
 * the standardized <ulink
 * url="http://dbus.freedesktop.org/doc/dbus-specification.html#standard-interfaces-objectmanager">org.freedesktop.DBus.ObjectManager</ulink>
 * interface. For example, remote D-Bus clients can get all objects
 * and properties in a single call. Additionally, any change in the
 * object hierarchy is broadcast using signals. This means that D-Bus
 * clients can keep caches up to date by only listening to D-Bus
 * signals.
 *
 * See #GDBusObjectManagerClient for the client-side code that is
 * intended to be used with #GDBusObjectManagerServer or any D-Bus
 * object implementing the org.freedesktop.DBus.ObjectManager
 * interface.
 */


/**
 * SECTION:gdbusobjectproxy
 * @short_description: Client-side D-Bus object
 * @include: gio/gio.h
 *
 * A #GDBusObjectProxy is an object used to represent a remote object
 * with one or more D-Bus interfaces. Normally, you don't instantiate
 * a #GDBusObjectProxy yourself - typically #GDBusObjectManagerClient
 * is used to obtain it.
 *
 * Since: 2.30
 */


/**
 * SECTION:gdbusobjectskeleton
 * @short_description: Service-side D-Bus object
 * @include: gio/gio.h
 *
 * A #GDBusObjectSkeleton instance is essentially a group of D-Bus
 * interfaces. The set of exported interfaces on the object may be
 * dynamic and change at runtime.
 *
 * This type is intended to be used with #GDBusObjectManager.
 */


/**
 * SECTION:gdbusproxy
 * @short_description: Client-side D-Bus interface proxy
 * @include: gio/gio.h
 *
 * #GDBusProxy is a base class used for proxies to access a D-Bus
 * interface on a remote object. A #GDBusProxy can be constructed for
 * both well-known and unique names.
 *
 * By default, #GDBusProxy will cache all properties (and listen to
 * changes) of the remote object, and proxy all signals that gets
 * emitted. This behaviour can be changed by passing suitable
 * #GDBusProxyFlags when the proxy is created. If the proxy is for a
 * well-known name, the property cache is flushed when the name owner
 * vanishes and reloaded when a name owner appears.
 *
 * If a #GDBusProxy is used for a well-known name, the owner of the
 * name is tracked and can be read from
 * #GDBusProxy:g-name-owner. Connect to the #GObject::notify signal to
 * get notified of changes. Additionally, only signals and property
 * changes emitted from the current name owner are considered and
 * calls are always sent to the current name owner. This avoids a
 * number of race conditions when the name is lost by one owner and
 * claimed by another. However, if no name owner currently exists,
 * then calls will be sent to the well-known name which may result in
 * the message bus launching an owner (unless
 * %G_DBUS_PROXY_FLAGS_DO_NOT_AUTO_START is set).
 *
 * The generic #GDBusProxy::g-properties-changed and
 * #GDBusProxy::g-signal signals are not very convenient to work
 * with. Therefore, the recommended way of working with proxies is to
 * subclass #GDBusProxy, and have more natural properties and signals
 * in your derived class. See <xref linkend="gdbus-example-gdbus-codegen"/>
 * for how this can easily be done using the
 * <command><link linkend="gdbus-codegen">gdbus-codegen</link></command>
 * tool.
 *
 * A #GDBusProxy instance can be used from multiple threads but note
 * that all signals (e.g. #GDBusProxy::g-signal, #GDBusProxy::g-properties-changed
 * and #GObject::notify) are emitted in the
 * <link linkend="g-main-context-push-thread-default">thread-default main loop</link>
 * of the thread where the instance was constructed.
 *
 * <example id="gdbus-wellknown-proxy"><title>GDBusProxy for a well-known-name</title><programlisting><xi:include xmlns:xi="http://www.w3.org/2001/XInclude" parse="text" href="../../../../gio/tests/gdbus-example-watch-proxy.c"><xi:fallback>FIXME: MISSING XINCLUDE CONTENT</xi:fallback></xi:include></programlisting></example>
 */


/**
 * SECTION:gdbusserver
 * @short_description: Helper for accepting connections
 * @include: gio/gio.h
 *
 * #GDBusServer is a helper for listening to and accepting D-Bus
 * connections. This can be used to create a new D-Bus server, allowing two
 * peers to use the D-Bus protocol for their own specialized communication.
 * A server instance provided in this way will not perform message routing or
 * implement the org.freedesktop.DBus interface.
 *
 * To just export an object on a well-known name on a message bus, such as the
 * session or system bus, you should instead use g_bus_own_name().
 *
 * <example id="gdbus-peer-to-peer"><title>D-Bus peer-to-peer example</title><programlisting><xi:include xmlns:xi="http://www.w3.org/2001/XInclude" parse="text" href="../../../../gio/tests/gdbus-example-peer.c"><xi:fallback>FIXME: MISSING XINCLUDE CONTENT</xi:fallback></xi:include></programlisting></example>
 */


/**
 * SECTION:gdbusutils
 * @title: D-Bus Utilities
 * @short_description: Various utilities related to D-Bus.
 * @include: gio/gio.h
 *
 * Various utility routines related to D-Bus.
 */


/**
 * SECTION:gdesktopappinfo
 * @title: GDesktopAppInfo
 * @short_description: Application information from desktop files
 * @include: gio/gdesktopappinfo.h
 *
 * #GDesktopAppInfo is an implementation of #GAppInfo based on
 * desktop files.
 *
 * Note that <filename>&lt;gio/gdesktopappinfo.h&gt;</filename> belongs to
 * the UNIX-specific GIO interfaces, thus you have to use the
 * <filename>gio-unix-2.0.pc</filename> pkg-config file when using it.
 */


/**
 * SECTION:gdrive
 * @short_description: Drive management
 * @include: gio/gio.h
 *
 * #GDrive - this represent a piece of hardware connected to the machine.
 * It's generally only created for removable hardware or hardware with
 * removable media.
 *
 * #GDrive is a container class for #GVolume objects that stem from
 * the same piece of media. As such, #GDrive abstracts a drive with
 * (or without) removable media and provides operations for querying
 * whether media is available, determing whether media change is
 * automatically detected and ejecting the media.
 *
 * If the #GDrive reports that media isn't automatically detected, one
 * can poll for media; typically one should not do this periodically
 * as a poll for media operation is potententially expensive and may
 * spin up the drive creating noise.
 *
 * #GDrive supports starting and stopping drives with authentication
 * support for the former. This can be used to support a diverse set
 * of use cases including connecting/disconnecting iSCSI devices,
 * powering down external disk enclosures and starting/stopping
 * multi-disk devices such as RAID devices. Note that the actual
 * semantics and side-effects of starting/stopping a #GDrive may vary
 * according to implementation. To choose the correct verbs in e.g. a
 * file manager, use g_drive_get_start_stop_type().
 *
 * For porting from GnomeVFS note that there is no equivalent of
 * #GDrive in that API.
 */


/**
 * SECTION:gemblem
 * @short_description: An object for emblems
 * @include: gio/gio.h
 * @see_also: #GIcon, #GEmblemedIcon, #GLoadableIcon, #GThemedIcon
 *
 * #GEmblem is an implementation of #GIcon that supports
 * having an emblem, which is an icon with additional properties.
 * It can than be added to a #GEmblemedIcon.
 *
 * Currently, only metainformation about the emblem's origin is
 * supported. More may be added in the future.
 */


/**
 * SECTION:gemblemedicon
 * @short_description: Icon with emblems
 * @include: gio/gio.h
 * @see_also: #GIcon, #GLoadableIcon, #GThemedIcon, #GEmblem
 *
 * #GEmblemedIcon is an implementation of #GIcon that supports
 * adding an emblem to an icon. Adding multiple emblems to an
 * icon is ensured via g_emblemed_icon_add_emblem().
 *
 * Note that #GEmblemedIcon allows no control over the position
 * of the emblems. See also #GEmblem for more information.
 */


/**
 * SECTION:gfile
 * @short_description: File and Directory Handling
 * @include: gio/gio.h
 * @see_also: #GFileInfo, #GFileEnumerator
 *
 * #GFile is a high level abstraction for manipulating files on a
 * virtual file system. #GFile<!-- -->s are lightweight, immutable
 * objects that do no I/O upon creation. It is necessary to understand that
 * #GFile objects do not represent files, merely an identifier for a file. All
 * file content I/O is implemented as streaming operations (see #GInputStream and
 * #GOutputStream).
 *
 * To construct a #GFile, you can use:
 * g_file_new_for_path() if you have a path.
 * g_file_new_for_uri() if you have a URI.
 * g_file_new_for_commandline_arg() for a command line argument.
 * g_file_new_tmp() to create a temporary file from a template.
 * g_file_parse_name() from a utf8 string gotten from g_file_get_parse_name().
 *
 * One way to think of a #GFile is as an abstraction of a pathname. For normal
 * files the system pathname is what is stored internally, but as #GFile<!-- -->s
 * are extensible it could also be something else that corresponds to a pathname
 * in a userspace implementation of a filesystem.
 *
 * #GFile<!-- -->s make up hierarchies of directories and files that correspond to the
 * files on a filesystem. You can move through the file system with #GFile using
 * g_file_get_parent() to get an identifier for the parent directory, g_file_get_child()
 * to get a child within a directory, g_file_resolve_relative_path() to resolve a relative
 * path between two #GFile<!-- -->s. There can be multiple hierarchies, so you may not
 * end up at the same root if you repeatedly call g_file_get_parent() on two different
 * files.
 *
 * All #GFile<!-- -->s have a basename (get with g_file_get_basename()). These names
 * are byte strings that are used to identify the file on the filesystem (relative to
 * its parent directory) and there is no guarantees that they have any particular charset
 * encoding or even make any sense at all. If you want to use filenames in a user
 * interface you should use the display name that you can get by requesting the
 * %G_FILE_ATTRIBUTE_STANDARD_DISPLAY_NAME attribute with g_file_query_info().
 * This is guaranteed to be in utf8 and can be used in a user interface. But always
 * store the real basename or the #GFile to use to actually access the file, because
 * there is no way to go from a display name to the actual name.
 *
 * Using #GFile as an identifier has the same weaknesses as using a path in that
 * there may be multiple aliases for the same file. For instance, hard or
 * soft links may cause two different #GFile<!-- -->s to refer to the same file.
 * Other possible causes for aliases are: case insensitive filesystems, short
 * and long names on Fat/NTFS, or bind mounts in Linux. If you want to check if
 * two #GFile<!-- -->s point to the same file you can query for the
 * %G_FILE_ATTRIBUTE_ID_FILE attribute. Note that #GFile does some trivial
 * canonicalization of pathnames passed in, so that trivial differences in the
 * path string used at creation (duplicated slashes, slash at end of path, "."
 * or ".." path segments, etc) does not create different #GFile<!-- -->s.
 *
 * Many #GFile operations have both synchronous and asynchronous versions
 * to suit your application. Asynchronous versions of synchronous functions
 * simply have _async() appended to their function names. The asynchronous
 * I/O functions call a #GAsyncReadyCallback which is then used to finalize
 * the operation, producing a GAsyncResult which is then passed to the
 * function's matching _finish() operation.
 *
 * Some #GFile operations do not have synchronous analogs, as they may
 * take a very long time to finish, and blocking may leave an application
 * unusable. Notable cases include:
 * g_file_mount_mountable() to mount a mountable file.
 * g_file_unmount_mountable_with_operation() to unmount a mountable file.
 * g_file_eject_mountable_with_operation() to eject a mountable file.
 *
 * <para id="gfile-etag"><indexterm><primary>entity tag</primary></indexterm>
 * One notable feature of #GFile<!-- -->s are entity tags, or "etags" for
 * short. Entity tags are somewhat like a more abstract version of the
 * traditional mtime, and can be used to quickly determine if the file has
 * been modified from the version on the file system. See the HTTP 1.1
 * <ulink url="http://www.w3.org/Protocols/rfc2616/rfc2616-sec14.html">specification</ulink>
 * for HTTP Etag headers, which are a very similar concept.
 * </para>
 */


/**
 * SECTION:gfileattribute
 * @short_description: Key-Value Paired File Attributes
 * @include: gio/gio.h
 * @see_also: #GFile, #GFileInfo
 *
 * File attributes in GIO consist of a list of key-value pairs.
 *
 * Keys are strings that contain a key namespace and a key name, separated
 * by a colon, e.g. "namespace:keyname". Namespaces are included to sort
 * key-value pairs by namespaces for relevance. Keys can be retrived
 * using wildcards, e.g. "standard::*" will return all of the keys in the
 * "standard" namespace.
 *
 * The list of possible attributes for a filesystem (pointed to by a #GFile) is
 * available as a #GFileAttributeInfoList. This list is queryable by key names
 * as indicated earlier.
 *
 * Information is stored within the list in #GFileAttributeInfo structures.
 * The info structure can store different types, listed in the enum
 * #GFileAttributeType. Upon creation of a #GFileAttributeInfo, the type will
 * be set to %G_FILE_ATTRIBUTE_TYPE_INVALID.
 *
 * Classes that implement #GFileIface will create a #GFileAttributeInfoList and
 * install default keys and values for their given file system, architecture,
 * and other possible implementation details (e.g., on a UNIX system, a file
 * attribute key will be registered for the user id for a given file).
 *
 * <para>
 * <table>
 * <title>GFileAttributes Default Namespaces</title>
 * <tgroup cols='2' align='left'><thead>
 * <row><entry>Namspace</entry><entry>Description</entry></row>
 * </thead>
 * <tbody>
 * <row><entry>"standard"</entry><entry>The "Standard" namespace. General file
 * information that any application may need should be put in this namespace.
 * Examples include the file's name, type, and size.</entry></row>
 * <row><entry>"etag"</entry><entry>The <link linkend="gfile-etag">"Entity Tag"</link>
 * namespace. Currently, the only key in this namespace is "value", which contains
 * the value of the current entity tag.</entry></row>
 * <row><entry>"id"</entry><entry>The "Identification" namespace. This
 * namespace is used by file managers and applications that list directories
 * to check for loops and to uniquely identify files.</entry></row>
 * <row><entry>"access"</entry><entry>The "Access" namespace. Used to check
 * if a user has the proper privilidges to access files and perform
 * file operations. Keys in this namespace are made to be generic
 * and easily understood, e.g. the "can_read" key is %TRUE if
 * the current user has permission to read the file. UNIX permissions and
 * NTFS ACLs in Windows should be mapped to these values.</entry></row>
 * <row><entry>"mountable"</entry><entry>The "Mountable" namespace. Includes
 * simple boolean keys for checking if a file or path supports mount operations, e.g.
 * mount, unmount, eject. These are used for files of type %G_FILE_TYPE_MOUNTABLE.</entry></row>
 * <row><entry>"time"</entry><entry>The "Time" namespace. Includes file
 * access, changed, created times. </entry></row>
 * <row><entry>"unix"</entry><entry>The "Unix" namespace. Includes UNIX-specific
 * information and may not be available for all files. Examples include
 * the UNIX "UID", "GID", etc.</entry></row>
 * <row><entry>"dos"</entry><entry>The "DOS" namespace. Includes DOS-specific
 * information and may not be available for all files. Examples include
 * "is_system" for checking if a file is marked as a system file, and "is_archive"
 * for checking if a file is marked as an archive file.</entry></row>
 * <row><entry>"owner"</entry><entry>The "Owner" namespace. Includes information
 * about who owns a file. May not be available for all file systems. Examples include
 * "user" for getting the user name of the file owner. This information is often mapped from
 * some backend specific data such as a unix UID.</entry></row>
 * <row><entry>"thumbnail"</entry><entry>The "Thumbnail" namespace. Includes
 * information about file thumbnails and their location within the file system. Examples of
 * keys in this namespace include "path" to get the location of a thumbnail, and "failed"
 * to check if thumbnailing of the file failed.</entry></row>
 * <row><entry>"filesystem"</entry><entry>The "Filesystem" namespace. Gets information
 * about the file system where a file is located, such as its type, how much
 * space is left available, and the overall size of the file system.</entry></row>
 * <row><entry>"gvfs"</entry><entry>The "GVFS" namespace. Keys in this namespace
 * contain information about the current GVFS backend in use. </entry></row>
 * <row><entry>"xattr"</entry><entry>The "xattr" namespace. Gets information
 * about extended user attributes. See attr(5). The "user." prefix of the
 * extended user attribute name is stripped away when constructing keys in
 * this namespace, e.g. "xattr::mime_type" for the extended attribute with
 * the name "user.mime_type". Note that this information is only available
 * if GLib has been built with extended attribute support.</entry></row>
 * <row><entry>"xattr-sys"</entry><entry>The "xattr-sys" namespace.
 * Gets information about extended attributes which are not user-specific.
 * See attr(5). Note that this information is only available if GLib
 * has been built with extended attribute support.</entry></row>
 * <row><entry>"selinux"</entry><entry>The "SELinux" namespace. Includes
 * information about the SELinux context of files. Note that this information
 * is only available if GLib has been built with SELinux support.</entry></row>
 * </tbody>
 * </tgroup>
 * </table>
 * </para>
 *
 * Please note that these are not all of the possible namespaces.
 * More namespaces can be added from GIO modules or by individual applications.
 * For more information about writing GIO modules, see #GIOModule.
 *
 * <!-- TODO: Implementation note about using extended attributes on supported
 * file systems -->
 *
 * <para><table>
 * <title>GFileAttributes Built-in Keys and Value Types</title>
 * <tgroup cols='3' align='left'><thead>
 * <row><entry>Enum Value</entry><entry>Namespace:Key</entry><entry>Value Type</entry></row>
 * </thead><tbody>
 * <row><entry>%G_FILE_ATTRIBUTE_STANDARD_TYPE</entry><entry>standard::type</entry><entry>uint32 (#GFileType)</entry></row>
 * <row><entry>%G_FILE_ATTRIBUTE_STANDARD_IS_HIDDEN</entry><entry>standard::is-hidden</entry><entry>boolean</entry></row>
 * <row><entry>%G_FILE_ATTRIBUTE_STANDARD_IS_BACKUP</entry><entry>standard::is-backup</entry><entry>boolean</entry></row>
 * <row><entry>%G_FILE_ATTRIBUTE_STANDARD_IS_SYMLINK</entry><entry>standard::is-symlink</entry><entry>boolean</entry></row>
 * <row><entry>%G_FILE_ATTRIBUTE_STANDARD_IS_VIRTUAL</entry><entry>standard::is-virtual</entry><entry>boolean</entry></row>
 * <row><entry>%G_FILE_ATTRIBUTE_STANDARD_NAME</entry><entry>standard::name</entry><entry>byte string</entry></row>
 * <row><entry>%G_FILE_ATTRIBUTE_STANDARD_DISPLAY_NAME</entry><entry>standard::display-name</entry><entry>string</entry></row>
 * <row><entry>%G_FILE_ATTRIBUTE_STANDARD_EDIT_NAME</entry><entry>standard::edit-name</entry><entry>string</entry></row>
 * <row><entry>%G_FILE_ATTRIBUTE_STANDARD_ICON</entry><entry>standard::icon</entry><entry>object (#GIcon)</entry></row>
 * <row><entry>%G_FILE_ATTRIBUTE_STANDARD_CONTENT_TYPE</entry><entry>standard::content-type</entry><entry>string</entry></row>
 * <row><entry>%G_FILE_ATTRIBUTE_STANDARD_FAST_CONTENT_TYPE</entry><entry>standard::fast-content-type</entry><entry>string</entry></row>
 * <row><entry>%G_FILE_ATTRIBUTE_STANDARD_SIZE</entry><entry>standard::size</entry><entry>uint64</entry></row>
 * <row><entry>%G_FILE_ATTRIBUTE_STANDARD_ALLOCATED_SIZE</entry><entry>standard::allocated-size</entry><entry>uint64</entry></row>
 * <row><entry>%G_FILE_ATTRIBUTE_STANDARD_SYMLINK_TARGET</entry><entry>standard::symlink-target</entry><entry>byte string</entry></row>
 * <row><entry>%G_FILE_ATTRIBUTE_STANDARD_TARGET_URI</entry><entry>standard::target-uri</entry><entry>string</entry></row>
 * <row><entry>%G_FILE_ATTRIBUTE_STANDARD_SORT_ORDER</entry><entry>standard::sort-order</entry><entry>int32</entry></row>
 * <row><entry>%G_FILE_ATTRIBUTE_ETAG_VALUE</entry><entry>etag::value</entry><entry>string</entry></row>
 * <row><entry>%G_FILE_ATTRIBUTE_ID_FILE</entry><entry>id::file</entry><entry>string</entry></row>
 * <row><entry>%G_FILE_ATTRIBUTE_ID_FILESYSTEM</entry><entry>id::filesystem</entry><entry>string</entry></row>
 * <row><entry>%G_FILE_ATTRIBUTE_ACCESS_CAN_READ</entry><entry>access::can-read</entry><entry>boolean</entry></row>
 * <row><entry>%G_FILE_ATTRIBUTE_ACCESS_CAN_WRITE</entry><entry>access::can-write</entry><entry>boolean</entry></row>
 * <row><entry>%G_FILE_ATTRIBUTE_ACCESS_CAN_EXECUTE</entry><entry>access::can-execute</entry><entry>boolean</entry></row>
 * <row><entry>%G_FILE_ATTRIBUTE_ACCESS_CAN_DELETE</entry><entry>access::can-delete</entry><entry>boolean</entry></row>
 * <row><entry>%G_FILE_ATTRIBUTE_ACCESS_CAN_TRASH</entry><entry>access::can-trash</entry><entry>boolean</entry></row>
 * <row><entry>%G_FILE_ATTRIBUTE_ACCESS_CAN_RENAME</entry><entry>access::can-rename</entry><entry>boolean</entry></row>
 * <row><entry>%G_FILE_ATTRIBUTE_MOUNTABLE_CAN_MOUNT</entry><entry>mountable::can-mount</entry><entry>boolean</entry></row>
 * <row><entry>%G_FILE_ATTRIBUTE_MOUNTABLE_CAN_UNMOUNT</entry><entry>mountable::can-unmount</entry><entry>boolean</entry></row>
 * <row><entry>%G_FILE_ATTRIBUTE_MOUNTABLE_CAN_EJECT</entry><entry>mountable::can-eject</entry><entry>boolean</entry></row>
 * <row><entry>%G_FILE_ATTRIBUTE_MOUNTABLE_UNIX_DEVICE</entry><entry>mountable::unix-device</entry><entry>uint32</entry></row>
 * <row><entry>%G_FILE_ATTRIBUTE_MOUNTABLE_UNIX_DEVICE_FILE</entry><entry>mountable::unix-device-file</entry><entry>string</entry></row>
 * <row><entry>%G_FILE_ATTRIBUTE_MOUNTABLE_HAL_UDI</entry><entry>mountable::hal-udi</entry><entry>string</entry></row>
 * <row><entry>%G_FILE_ATTRIBUTE_TIME_MODIFIED</entry><entry>time::modified</entry><entry>uint64</entry></row>
 * <row><entry>%G_FILE_ATTRIBUTE_TIME_MODIFIED_USEC</entry><entry>time::modified-usec</entry><entry>uint32</entry></row>
 * <row><entry>%G_FILE_ATTRIBUTE_TIME_ACCESS</entry><entry>time::access</entry><entry>uint64</entry></row>
 * <row><entry>%G_FILE_ATTRIBUTE_TIME_ACCESS_USEC</entry><entry>time::access-usec</entry><entry>uint32</entry></row>
 * <row><entry>%G_FILE_ATTRIBUTE_TIME_CHANGED</entry><entry>time::changed</entry><entry>uint64</entry></row>
 * <row><entry>%G_FILE_ATTRIBUTE_TIME_CHANGED_USEC</entry><entry>time::changed-usec</entry><entry>uint32</entry></row>
 * <row><entry>%G_FILE_ATTRIBUTE_TIME_CREATED</entry><entry>time::created</entry><entry>uint64</entry></row>
 * <row><entry>%G_FILE_ATTRIBUTE_TIME_CREATED_USEC</entry><entry>time::created-usec</entry><entry>uint32</entry></row>
 * <row><entry>%G_FILE_ATTRIBUTE_UNIX_DEVICE</entry><entry>unix::device</entry><entry>uint32</entry></row>
 * <row><entry>%G_FILE_ATTRIBUTE_UNIX_INODE</entry><entry>unix::inode</entry><entry>uint64</entry></row>
 * <row><entry>%G_FILE_ATTRIBUTE_UNIX_MODE</entry><entry>unix::mode</entry><entry>uint32</entry></row>
 * <row><entry>%G_FILE_ATTRIBUTE_UNIX_NLINK</entry><entry>unix::nlink</entry><entry>uint32</entry></row>
 * <row><entry>%G_FILE_ATTRIBUTE_UNIX_UID</entry><entry>unix::uid</entry><entry>uint32</entry></row>
 * <row><entry>%G_FILE_ATTRIBUTE_UNIX_GID</entry><entry>unix::gid</entry><entry>uint32</entry></row>
 * <row><entry>%G_FILE_ATTRIBUTE_UNIX_RDEV</entry><entry>unix::rdev</entry><entry>uint32</entry></row>
 * <row><entry>%G_FILE_ATTRIBUTE_UNIX_BLOCK_SIZE</entry><entry>unix::block-size</entry><entry>uint32</entry></row>
 * <row><entry>%G_FILE_ATTRIBUTE_UNIX_BLOCKS</entry><entry>unix::blocks</entry><entry>uint64</entry></row>
 * <row><entry>%G_FILE_ATTRIBUTE_UNIX_IS_MOUNTPOINT</entry><entry>unix::is-mountpoint</entry><entry>boolean</entry></row>
 * <row><entry>%G_FILE_ATTRIBUTE_DOS_IS_ARCHIVE</entry><entry>dos::is-archive</entry><entry>boolean</entry></row>
 * <row><entry>%G_FILE_ATTRIBUTE_DOS_IS_SYSTEM</entry><entry>dos::is-system</entry><entry>boolean</entry></row>
 * <row><entry>%G_FILE_ATTRIBUTE_OWNER_USER</entry><entry>owner::user</entry><entry>string</entry></row>
 * <row><entry>%G_FILE_ATTRIBUTE_OWNER_USER_REAL</entry><entry>owner::user-real</entry><entry>string</entry></row>
 * <row><entry>%G_FILE_ATTRIBUTE_OWNER_GROUP</entry><entry>owner::group</entry><entry>string</entry></row>
 * <row><entry>%G_FILE_ATTRIBUTE_THUMBNAIL_PATH</entry><entry>thumbnail::path</entry><entry>bytestring</entry></row>
 * <row><entry>%G_FILE_ATTRIBUTE_THUMBNAILING_FAILED</entry><entry>thumbnail::failed</entry><entry>boolean</entry></row>
 * <row><entry>%G_FILE_ATTRIBUTE_PREVIEW_ICON</entry><entry>preview::icon</entry><entry>object (#GIcon)</entry></row>
 * <row><entry>%G_FILE_ATTRIBUTE_FILESYSTEM_SIZE</entry><entry>filesystem::size</entry><entry>uint64</entry></row>
 * <row><entry>%G_FILE_ATTRIBUTE_FILESYSTEM_FREE</entry><entry>filesystem::free</entry><entry>uint64</entry></row>
 * <row><entry>%G_FILE_ATTRIBUTE_FILESYSTEM_USED</entry><entry>filesystem::used</entry><entry>uint64</entry></row>
 * <row><entry>%G_FILE_ATTRIBUTE_FILESYSTEM_TYPE</entry><entry>filesystem::type</entry><entry>string</entry></row>
 * <row><entry>%G_FILE_ATTRIBUTE_FILESYSTEM_READONLY</entry><entry>filesystem::readonly</entry><entry>boolean</entry></row>
 * <row><entry>%G_FILE_ATTRIBUTE_GVFS_BACKEND</entry><entry>gvfs::backend</entry><entry>string</entry></row>
 * <row><entry>%G_FILE_ATTRIBUTE_SELINUX_CONTEXT</entry><entry>selinux::context</entry><entry>string</entry></row>
 * </tbody></tgroup></table></para>
 *
 * Note that there are no predefined keys in the "xattr" and "xattr-sys"
 * namespaces. Keys for the "xattr" namespace are constructed by stripping
 * away the "user." prefix from the extended user attribute, and prepending
 * "xattr::". Keys for the "xattr-sys" namespace are constructed by
 * concatenating "xattr-sys::" with the extended attribute name. All extended
 * attribute values are returned as hex-encoded strings in which bytes outside
 * the ASCII range are encoded as hexadecimal escape sequences of the form
 * \x<replaceable>nn</replaceable>.
 */


/**
 * SECTION:gfiledescriptorbased
 * @short_description: Interface for file descriptor based IO
 * @include: gio/gfiledescriptorbased.h
 * @see_also: #GInputStream, #GOutputStream
 *
 * #GFileDescriptorBased is implemented by streams (implementations of
 * #GInputStream or #GOutputStream) that are based on file descriptors.
 *
 * Note that <filename>&lt;gio/gfiledescriptorbased.h&gt;</filename> belongs to
 * the UNIX-specific GIO interfaces, thus you have to use the
 * <filename>gio-unix-2.0.pc</filename> pkg-config file when using it.
 *
 * Since: 2.24
 */


/**
 * SECTION:gfileenumerator
 * @short_description: Enumerated Files Routines
 * @include: gio/gio.h
 *
 * #GFileEnumerator allows you to operate on a set of #GFile<!-- -->s,
 * returning a #GFileInfo structure for each file enumerated (e.g.
 * g_file_enumerate_children() will return a #GFileEnumerator for each
 * of the children within a directory).
 *
 * To get the next file's information from a #GFileEnumerator, use
 * g_file_enumerator_next_file() or its asynchronous version,
 * g_file_enumerator_next_files_async(). Note that the asynchronous
 * version will return a list of #GFileInfo<!---->s, whereas the
 * synchronous will only return the next file in the enumerator.
 *
 * To close a #GFileEnumerator, use g_file_enumerator_close(), or
 * its asynchronous version, g_file_enumerator_close_async(). Once
 * a #GFileEnumerator is closed, no further actions may be performed
 * on it, and it should be freed with g_object_unref().
 */


/**
 * SECTION:gfileicon
 * @short_description: Icons pointing to an image file
 * @include: gio/gio.h
 * @see_also: #GIcon, #GLoadableIcon
 *
 * #GFileIcon specifies an icon by pointing to an image file
 * to be used as icon.
 */


/**
 * SECTION:gfileinfo
 * @short_description: File Information and Attributes
 * @include: gio/gio.h
 * @see_also: #GFile, <link linkend="gio-GFileAttribute">GFileAttribute</link>
 *
 * Functionality for manipulating basic metadata for files. #GFileInfo
 * implements methods for getting information that all files should
 * contain, and allows for manipulation of extended attributes.
 *
 * See <link linkend="gio-GFileAttribute">GFileAttribute</link> for more
 * information on how GIO handles file attributes.
 *
 * To obtain a #GFileInfo for a #GFile, use g_file_query_info() (or its
 * async variant). To obtain a #GFileInfo for a file input or output
 * stream, use g_file_input_stream_query_info() or
 * g_file_output_stream_query_info() (or their async variants).
 *
 * To change the actual attributes of a file, you should then set the
 * attribute in the #GFileInfo and call g_file_set_attributes_from_info()
 * or g_file_set_attributes_async() on a GFile.
 *
 * However, not all attributes can be changed in the file. For instance,
 * the actual size of a file cannot be changed via g_file_info_set_size().
 * You may call g_file_query_settable_attributes() and
 * g_file_query_writable_namespaces() to discover the settable attributes
 * of a particular file at runtime.
 *
 * #GFileAttributeMatcher allows for searching through a #GFileInfo for
 * attributes.
 */


/**
 * SECTION:gfileinputstream
 * @short_description: File input streaming operations
 * @include: gio/gio.h
 * @see_also: #GInputStream, #GDataInputStream, #GSeekable
 *
 * GFileInputStream provides input streams that take their
 * content from a file.
 *
 * GFileInputStream implements #GSeekable, which allows the input
 * stream to jump to arbitrary positions in the file, provided the
 * filesystem of the file allows it. To find the position of a file
 * input stream, use g_seekable_tell(). To find out if a file input
 * stream supports seeking, use g_seekable_can_seek().
 * To position a file input stream, use g_seekable_seek().
 */


/**
 * SECTION:gfileiostream
 * @short_description: File read and write streaming operations
 * @include: gio/gio.h
 * @see_also: #GIOStream, #GFileInputStream, #GFileOutputStream, #GSeekable
 *
 * GFileIOStream provides io streams that both read and write to the same
 * file handle.
 *
 * GFileIOStream implements #GSeekable, which allows the io
 * stream to jump to arbitrary positions in the file and to truncate
 * the file, provided the filesystem of the file supports these
 * operations.
 *
 * To find the position of a file io stream, use
 * g_seekable_tell().
 *
 * To find out if a file io stream supports seeking, use g_seekable_can_seek().
 * To position a file io stream, use g_seekable_seek().
 * To find out if a file io stream supports truncating, use
 * g_seekable_can_truncate(). To truncate a file io
 * stream, use g_seekable_truncate().
 *
 * The default implementation of all the #GFileIOStream operations
 * and the implementation of #GSeekable just call into the same operations
 * on the output stream.
 *
 * Since: 2.22
 */


/**
 * SECTION:gfilemonitor
 * @short_description: File Monitor
 * @include: gio/gio.h
 *
 * Monitors a file or directory for changes.
 *
 * To obtain a #GFileMonitor for a file or directory, use
 * g_file_monitor(), g_file_monitor_file(), or
 * g_file_monitor_directory().
 *
 * To get informed about changes to the file or directory you are
 * monitoring, connect to the #GFileMonitor::changed signal. The
 * signal will be emitted in the <link
 * linkend="g-main-context-push-thread-default">thread-default main
 * context</link> of the thread that the monitor was created in
 * (though if the global default main context is blocked, this may
 * cause notifications to be blocked even if the thread-default
 * context is still running).
 */


/**
 * SECTION:gfilenamecompleter
 * @short_description: Filename Completer
 * @include: gio/gio.h
 *
 * Completes partial file and directory names given a partial string by
 * looking in the file system for clues. Can return a list of possible
 * completion strings for widget implementations.
 */


/**
 * SECTION:gfileoutputstream
 * @short_description: File output streaming operations
 * @include: gio/gio.h
 * @see_also: #GOutputStream, #GDataOutputStream, #GSeekable
 *
 * GFileOutputStream provides output streams that write their
 * content to a file.
 *
 * GFileOutputStream implements #GSeekable, which allows the output
 * stream to jump to arbitrary positions in the file and to truncate
 * the file, provided the filesystem of the file supports these
 * operations.
 *
 * To find the position of a file output stream, use g_seekable_tell().
 * To find out if a file output stream supports seeking, use
 * g_seekable_can_seek().To position a file output stream, use
 * g_seekable_seek(). To find out if a file output stream supports
 * truncating, use g_seekable_can_truncate(). To truncate a file output
 * stream, use g_seekable_truncate().
 */


/**
 * SECTION:gfilterinputstream
 * @short_description: Filter Input Stream
 * @include: gio/gio.h
 *
 * Base class for input stream implementations that perform some
 * kind of filtering operation on a base stream. Typical examples
 * of filtering operations are character set conversion, compression
 * and byte order flipping.
 */


/**
 * SECTION:gfilteroutputstream
 * @short_description: Filter Output Stream
 * @include: gio/gio.h
 *
 * Base class for output stream implementations that perform some
 * kind of filtering operation on a base stream. Typical examples
 * of filtering operations are character set conversion, compression
 * and byte order flipping.
 */


/**
 * SECTION:gicon
 * @short_description: Interface for icons
 * @include: gio/gio.h
 *
 * #GIcon is a very minimal interface for icons. It provides functions
 * for checking the equality of two icons, hashing of icons and
 * serializing an icon to and from strings.
 *
 * #GIcon does not provide the actual pixmap for the icon as this is out
 * of GIO's scope, however implementations of #GIcon may contain the name
 * of an icon (see #GThemedIcon), or the path to an icon (see #GLoadableIcon).
 *
 * To obtain a hash of a #GIcon, see g_icon_hash().
 *
 * To check if two #GIcons are equal, see g_icon_equal().
 *
 * For serializing a #GIcon, use g_icon_to_string() and
 * g_icon_new_for_string().
 *
 * If your application or library provides one or more #GIcon
 * implementations you need to ensure that each #GType is registered
 * with the type system prior to calling g_icon_new_for_string().
 */


/**
 * SECTION:ginetaddress
 * @short_description: An IPv4/IPv6 address
 *
 * #GInetAddress represents an IPv4 or IPv6 internet address. Use
 * g_resolver_lookup_by_name() or g_resolver_lookup_by_name_async() to
 * look up the #GInetAddress for a hostname. Use
 * g_resolver_lookup_by_address() or
 * g_resolver_lookup_by_address_async() to look up the hostname for a
 * #GInetAddress.
 *
 * To actually connect to a remote host, you will need a
 * #GInetSocketAddress (which includes a #GInetAddress as well as a
 * port number).
 */


/**
 * SECTION:ginetaddressmask
 * @short_description: An IPv4/IPv6 address mask
 *
 * #GInetAddressMask represents a range of IPv4 or IPv6 addresses
 * described by a base address and a length indicating how many bits
 * of the base address are relevant for matching purposes. These are
 * often given in string form. Eg, "10.0.0.0/8", or "fe80::/10".
 */


/**
 * SECTION:ginetsocketaddress
 * @short_description: Internet GSocketAddress
 *
 * An IPv4 or IPv6 socket address; that is, the combination of a
 * #GInetAddress and a port number.
 */


/**
 * SECTION:ginitable
 * @short_description: Failable object initialization interface
 * @include: gio/gio.h
 * @see_also: #GAsyncInitable
 *
 * #GInitable is implemented by objects that can fail during
 * initialization. If an object implements this interface then
 * it must be initialized as the first thing after construction,
 * either via g_initable_init() or g_async_initable_init_async()
 * (the latter is only available if it also implements #GAsyncInitable).
 *
 * If the object is not initialized, or initialization returns with an
 * error, then all operations on the object except g_object_ref() and
 * g_object_unref() are considered to be invalid, and have undefined
 * behaviour. They will often fail with g_critical() or g_warning(), but
 * this must not be relied on.
 *
 * Users of objects implementing this are not intended to use
 * the interface method directly, instead it will be used automatically
 * in various ways. For C applications you generally just call
 * g_initable_new() directly, or indirectly via a foo_thing_new() wrapper.
 * This will call g_initable_init() under the cover, returning %NULL and
 * setting a #GError on failure (at which point the instance is
 * unreferenced).
 *
 * For bindings in languages where the native constructor supports
 * exceptions the binding could check for objects implemention %GInitable
 * during normal construction and automatically initialize them, throwing
 * an exception on failure.
 */


/**
 * SECTION:ginputstream
 * @short_description: Base class for implementing streaming input
 * @include: gio/gio.h
 *
 * #GInputStream has functions to read from a stream (g_input_stream_read()),
 * to close a stream (g_input_stream_close()) and to skip some content
 * (g_input_stream_skip()).
 *
 * To copy the content of an input stream to an output stream without
 * manually handling the reads and writes, use g_output_stream_splice().
 *
 * All of these functions have async variants too.
 */


/**
 * SECTION:gioerror
 * @short_description: Error helper functions
 * @include: gio/gio.h
 *
 * Contains helper functions for reporting errors to the user.
 */


/**
 * SECTION:giomodule
 * @short_description: Loadable GIO Modules
 * @include: gio/gio.h
 *
 * Provides an interface and default functions for loading and unloading
 * modules. This is used internally to make GIO extensible, but can also
 * be used by others to implement module loading.
 */


/**
 * SECTION:gioscheduler
 * @short_description: I/O Scheduler
 * @include: gio/gio.h
 *
 * Schedules asynchronous I/O operations. #GIOScheduler integrates
 * into the main event loop (#GMainLoop) and uses threads.
 *
 * <para id="io-priority"><indexterm><primary>I/O priority</primary></indexterm>
 * Each I/O operation has a priority, and the scheduler uses the priorities
 * to determine the order in which operations are executed. They are
 * <emphasis>not</emphasis> used to determine system-wide I/O scheduling.
 * Priorities are integers, with lower numbers indicating higher priority.
 * It is recommended to choose priorities between %G_PRIORITY_LOW and
 * %G_PRIORITY_HIGH, with %G_PRIORITY_DEFAULT as a default.
 * </para>
 */


/**
 * SECTION:giostream
 * @short_description: Base class for implementing read/write streams
 * @include: gio/gio.h
 * @see_also: #GInputStream, #GOutputStream
 *
 * GIOStream represents an object that has both read and write streams.
 * Generally the two streams acts as separate input and output streams,
 * but they share some common resources and state. For instance, for
 * seekable streams they may use the same position in both streams.
 *
 * Examples of #GIOStream objects are #GSocketConnection which represents
 * a two-way network connection, and #GFileIOStream which represent a
 * file handle opened in read-write mode.
 *
 * To do the actual reading and writing you need to get the substreams
 * with g_io_stream_get_input_stream() and g_io_stream_get_output_stream().
 *
 * The #GIOStream object owns the input and the output streams, not the other
 * way around, so keeping the substreams alive will not keep the #GIOStream
 * object alive. If the #GIOStream object is freed it will be closed, thus
 * closing the substream, so even if the substreams stay alive they will
 * always just return a %G_IO_ERROR_CLOSED for all operations.
 *
 * To close a stream use g_io_stream_close() which will close the common
 * stream object and also the individual substreams. You can also close
 * the substreams themselves. In most cases this only marks the
 * substream as closed, so further I/O on it fails. However, some streams
 * may support "half-closed" states where one direction of the stream
 * is actually shut down.
 *
 * Since: 2.22
 */


/**
 * SECTION:gloadableicon
 * @short_description: Loadable Icons
 * @include: gio/gio.h
 * @see_also: #GIcon, #GThemedIcon
 *
 * Extends the #GIcon interface and adds the ability to
 * load icons from streams.
 */


/**
 * SECTION:gmemoryinputstream
 * @short_description: Streaming input operations on memory chunks
 * @include: gio/gio.h
 * @see_also: #GMemoryOutputStream
 *
 * #GMemoryInputStream is a class for using arbitrary
 * memory chunks as input for GIO streaming input operations.
 *
 * As of GLib 2.34, #GMemoryInputStream implements
 * #GPollableInputStream.
 */


/**
 * SECTION:gmemoryoutputstream
 * @short_description: Streaming output operations on memory chunks
 * @include: gio/gio.h
 * @see_also: #GMemoryInputStream
 *
 * #GMemoryOutputStream is a class for using arbitrary
 * memory chunks as output for GIO streaming output operations.
 *
 * As of GLib 2.34, #GMemoryOutputStream implements
 * #GPollableOutputStream.
 */


/**
 * SECTION:gmenu
 * @title: GMenu
 * @short_description: A simple implementation of GMenuModel
 *
 * #GMenu is a simple implementation of #GMenuModel.
 * You populate a #GMenu by adding #GMenuItem instances to it.
 *
 * There are some convenience functions to allow you to directly
 * add items (avoiding #GMenuItem) for the common cases. To add
 * a regular item, use g_menu_insert(). To add a section, use
 * g_menu_insert_section(). To add a submenu, use
 * g_menu_insert_submenu().
 */


/**
 * SECTION:gmenuexporter
 * @title: GMenuModel exporter
 * @short_description: Export GMenuModels on D-Bus
 * @see_also: #GMenuModel, #GDBusMenuModel
 *
 * These functions support exporting a #GMenuModel on D-Bus.
 * The D-Bus interface that is used is a private implementation
 * detail.
 *
 * To access an exported #GMenuModel remotely, use
 * g_dbus_menu_model_get() to obtain a #GDBusMenuModel.
 */


/**
 * SECTION:gmenumodel
 * @title: GMenuModel
 * @short_description: An abstract class representing the contents of a menu
 * @see_also: #GActionGroup
 *
 * #GMenuModel represents the contents of a menu -- an ordered list of
 * menu items. The items are associated with actions, which can be
 * activated through them. Items can be grouped in sections, and may
 * have submenus associated with them. Both items and sections usually
 * have some representation data, such as labels or icons. The type of
 * the associated action (ie whether it is stateful, and what kind of
 * state it has) can influence the representation of the item.
 *
 * The conceptual model of menus in #GMenuModel is hierarchical:
 * sections and submenus are again represented by #GMenuModels.
 * Menus themselves do not define their own roles. Rather, the role
 * of a particular #GMenuModel is defined by the item that references
 * it (or, in the case of the 'root' menu, is defined by the context
 * in which it is used).
 *
 * As an example, consider the visible portions of the menu in
 * <xref linkend="menu-example"/>.
 *
 * <figure id="menu-example">
 *   <title>An example menu</title>
 *   <graphic fileref="menu-example.png" format="PNG"></graphic>
 * </figure>
 *
 * There are 8 "menus" visible in the screenshot: one menubar, two
 * submenus and 5 sections:
 * <itemizedlist>
 * <listitem>the toplevel menubar (containing 4 items)</listitem>
 * <listitem>the View submenu (containing 3 sections)</listitem>
 * <listitem>the first section of the View submenu (containing 2 items)</listitem>
 * <listitem>the second section of the View submenu (containing 1 item)</listitem>
 * <listitem>the final section of the View submenu (containing 1 item)</listitem>
 * <listitem>the Highlight Mode submenu (containing 2 sections)</listitem>
 * <listitem>the Sources section (containing 2 items)</listitem>
 * <listitem>the Markup section (containing 2 items)</listitem>
 * </itemizedlist>
 *
 * <xref linkend="menu-model"/> illustrates the conceptual connection between
 * these 8 menus. Each large block in the figure represents a menu and the
 * smaller blocks within the large block represent items in that menu. Some
 * items contain references to other menus.
 *
 * <figure id="menu-model">
 *   <title>A menu model</title>
 *   <graphic fileref="menu-model.png" format="PNG"></graphic>
 * </figure>
 *
 * Notice that the separators visible in <xref linkend="menu-example"/>
 * appear nowhere in <xref linkend="menu-model"/>. This is because
 * separators are not explicitly represented in the menu model. Instead,
 * a separator is inserted between any two non-empty sections of a menu.
 * Section items can have labels just like any other item. In that case,
 * a display system may show a section header instead of a separator.
 *
 * The motivation for this abstract model of application controls is
 * that modern user interfaces tend to make these controls available
 * outside the application. Examples include global menus, jumplists,
 * dash boards, etc. To support such uses, it is necessary to 'export'
 * information about actions and their representation in menus, which
 * is exactly what the
 * <link linkend="gio-GActionGroup-exporter">GActionGroup exporter</link>
 * and the
 * <link linkend="gio-GMenuModel-exporter">GMenuModel exporter</link>
 * do for #GActionGroup and #GMenuModel. The client-side counterparts
 * to make use of the exported information are #GDBusActionGroup and
 * #GDBusMenuModel.
 *
 * The API of #GMenuModel is very generic, with iterators for the
 * attributes and links of an item, see g_menu_model_iterate_item_attributes()
 * and g_menu_model_iterate_item_links(). The 'standard' attributes and
 * link types have predefined names: %G_MENU_ATTRIBUTE_LABEL,
 * %G_MENU_ATTRIBUTE_ACTION, %G_MENU_ATTRIBUTE_TARGET, %G_MENU_LINK_SECTION
 * and %G_MENU_LINK_SUBMENU.
 *
 * Items in a #GMenuModel represent active controls if they refer to
 * an action that can get activated when the user interacts with the
 * menu item. The reference to the action is encoded by the string id
 * in the %G_MENU_ATTRIBUTE_ACTION attribute. An action id uniquely
 * identifies an action in an action group. Which action group(s) provide
 * actions depends on the context in which the menu model is used.
 * E.g. when the model is exported as the application menu of a
 * #GtkApplication, actions can be application-wide or window-specific
 * (and thus come from two different action groups). By convention, the
 * application-wide actions have names that start with "app.", while the
 * names of window-specific actions start with "win.".
 *
 * While a wide variety of stateful actions is possible, the following
 * is the minimum that is expected to be supported by all users of exported
 * menu information:
 * <itemizedlist>
 * <listitem>an action with no parameter type and no state</listitem>
 * <listitem>an action with no parameter type and boolean state</listitem>
 * <listitem>an action with string parameter type and string state</listitem>
 * </itemizedlist>
 *
 * <formalpara><title>Stateless</title>
 * <para>
 * A stateless action typically corresponds to an ordinary menu item.
 * </para>
 * <para>
 * Selecting such a menu item will activate the action (with no parameter).
 * </para>
 * </formalpara>
 *
 * <formalpara><title>Boolean State</title>
 * <para>
 * An action with a boolean state will most typically be used with a "toggle"
 * or "switch" menu item. The state can be set directly, but activating the
 * action (with no parameter) results in the state being toggled.
 * </para>
 * <para>
 * Selecting a toggle menu item will activate the action. The menu item should
 * be rendered as "checked" when the state is true.
 * </para>
 * </formalpara>
 *
 * <formalpara><title>String Parameter and State</title>
 * <para>
 * Actions with string parameters and state will most typically be used to
 * represent an enumerated choice over the items available for a group of
 * radio menu items. Activating the action with a string parameter is
 * equivalent to setting that parameter as the state.
 * </para>
 * <para>
 * Radio menu items, in addition to being associated with the action, will
 * have a target value. Selecting that menu item will result in activation
 * of the action with the target value as the parameter. The menu item should
 * be rendered as "selected" when the state of the action is equal to the
 * target value of the menu item.
 * </para>
 * </formalpara>
 */


/**
 * SECTION:gmount
 * @short_description: Mount management
 * @include: gio/gio.h
 * @see_also: GVolume, GUnixMountEntry, GUnixMountPoint
 *
 * The #GMount interface represents user-visible mounts. Note, when
 * porting from GnomeVFS, #GMount is the moral equivalent of #GnomeVFSVolume.
 *
 * #GMount is a "mounted" filesystem that you can access. Mounted is in
 * quotes because it's not the same as a unix mount, it might be a gvfs
 * mount, but you can still access the files on it if you use GIO. Might or
 * might not be related to a volume object.
 *
 * Unmounting a #GMount instance is an asynchronous operation. For
 * more information about asynchronous operations, see #GAsyncResult
 * and #GSimpleAsyncResult. To unmount a #GMount instance, first call
 * g_mount_unmount_with_operation() with (at least) the #GMount instance and a
 * #GAsyncReadyCallback.  The callback will be fired when the
 * operation has resolved (either with success or failure), and a
 * #GAsyncReady structure will be passed to the callback.  That
 * callback should then call g_mount_unmount_with_operation_finish() with the #GMount
 * and the #GAsyncReady data to see if the operation was completed
 * successfully.  If an @error is present when g_mount_unmount_with_operation_finish()
 * is called, then it will be filled with any error information.
 */


/**
 * SECTION:gmountoperation
 * @short_description: Object used for authentication and user interaction
 * @include: gio/gio.h
 *
 * #GMountOperation provides a mechanism for interacting with the user.
 * It can be used for authenticating mountable operations, such as loop
 * mounting files, hard drive partitions or server locations. It can
 * also be used to ask the user questions or show a list of applications
 * preventing unmount or eject operations from completing.
 *
 * Note that #GMountOperation is used for more than just #GMount
 * objects – for example it is also used in g_drive_start() and
 * g_drive_stop().
 *
 * Users should instantiate a subclass of this that implements all the
 * various callbacks to show the required dialogs, such as
 * #GtkMountOperation. If no user interaction is desired (for example
 * when automounting filesystems at login time), usually %NULL can be
 * passed, see each method taking a #GMountOperation for details.
 */


/**
 * SECTION:gnetworkaddress
 * @short_description: A GSocketConnectable for resolving hostnames
 * @include: gio/gio.h
 *
 * #GNetworkAddress provides an easy way to resolve a hostname and
 * then attempt to connect to that host, handling the possibility of
 * multiple IP addresses and multiple address families.
 *
 * See #GSocketConnectable for and example of using the connectable
 * interface.
 */


/**
 * SECTION:gnetworkmonitor
 * @title: GNetworkMonitor
 * @short_description: Network status monitor
 * @include: gio/gio.h
 *
 * #GNetworkMonitor provides an easy-to-use cross-platform API
 * for monitoring network connectivity. On Linux, the implementation
 * is based on the kernels netlink interface.
 */


/**
 * SECTION:gnetworkservice
 * @short_description: A GSocketConnectable for resolving SRV records
 * @include: gio/gio.h
 *
 * Like #GNetworkAddress does with hostnames, #GNetworkService
 * provides an easy way to resolve a SRV record, and then attempt to
 * connect to one of the hosts that implements that service, handling
 * service priority/weighting, multiple IP addresses, and multiple
 * address families.
 *
 * See #GSrvTarget for more information about SRV records, and see
 * #GSocketConnectable for and example of using the connectable
 * interface.
 */


/**
 * SECTION:goutputstream
 * @short_description: Base class for implementing streaming output
 * @include: gio/gio.h
 *
 * #GOutputStream has functions to write to a stream (g_output_stream_write()),
 * to close a stream (g_output_stream_close()) and to flush pending writes
 * (g_output_stream_flush()).
 *
 * To copy the content of an input stream to an output stream without
 * manually handling the reads and writes, use g_output_stream_splice().
 *
 * All of these functions have async variants too.
 */


/**
 * SECTION:gpermission
 * @title: GPermission
 * @short_description: An object representing the permission to perform a certain action
 *
 * A #GPermission represents the status of the caller's permission to
 * perform a certain action.
 *
 * You can query if the action is currently allowed and if it is
 * possible to acquire the permission so that the action will be allowed
 * in the future.
 *
 * There is also an API to actually acquire the permission and one to
 * release it.
 *
 * As an example, a #GPermission might represent the ability for the
 * user to write to a #GSettings object.  This #GPermission object could
 * then be used to decide if it is appropriate to show a "Click here to
 * unlock" button in a dialog and to provide the mechanism to invoke
 * when that button is clicked.
 */


/**
 * SECTION:gpollableinputstream
 * @short_description: Interface for pollable input streams
 * @include: gio/gio.h
 * @see_also: #GInputStream, #GPollableOutputStream, #GFileDescriptorBased
 *
 * #GPollableInputStream is implemented by #GInputStream<!-- -->s that
 * can be polled for readiness to read. This can be used when
 * interfacing with a non-GIO API that expects
 * UNIX-file-descriptor-style asynchronous I/O rather than GIO-style.
 *
 * Since: 2.28
 */


/**
 * SECTION:gpollableoutputstream
 * @short_description: Interface for pollable output streams
 * @include: gio/gio.h
 * @see_also: #GOutputStream, #GFileDescriptorBased, #GPollableInputStream
 *
 * #GPollableOutputStream is implemented by #GOutputStream<!-- -->s that
 * can be polled for readiness to write. This can be used when
 * interfacing with a non-GIO API that expects
 * UNIX-file-descriptor-style asynchronous I/O rather than GIO-style.
 *
 * Since: 2.28
 */


/**
 * SECTION:gpollableutils
 * @short_description: #GPollableInputStream / #GPollableOutputStream utilities
 * @include: gio/gio.h
 *
 * Utility functions for #GPollableInputStream and
 * #GPollableOutputStream implementations.
 */


/**
 * SECTION:gproxy
 * @short_description: Interface for proxy handling
 *
 * A #GProxy handles connecting to a remote host via a given type of
 * proxy server. It is implemented by the 'gio-proxy' extension point.
 * The extensions are named after their proxy protocol name. As an
 * example, a SOCKS5 proxy implementation can be retrieved with the
 * name 'socks5' using the function
 * g_io_extension_point_get_extension_by_name().
 *
 * Since: 2.26
 */


/**
 * SECTION:gproxyaddress
 * @short_description: An internet address with proxy information
 *
 * Support for proxied #GInetSocketAddress.
 */


/**
 * SECTION:gproxyresolver
 * @short_description: Asynchronous and cancellable network proxy resolver
 * @include: gio/gio.h
 *
 * #GProxyResolver provides synchronous and asynchronous network proxy
 * resolution. #GProxyResolver is used within #GSocketClient through
 * the method g_socket_connectable_proxy_enumerate().
 */


/**
 * SECTION:gremoteactiongroup
 * @title: GRemoteActionGroup
 * @short_description: a #GActionGroup that interacts with other processes
 *
 * The GRemoteActionGroup interface is implemented by #GActionGroup
 * instances that either transmit action invocations to other processes
 * or receive action invocations in the local process from other
 * processes.
 *
 * The interface has <literal>_full</literal> variants of the two
 * methods on #GActionGroup used to activate actions:
 * g_action_group_activate_action() and
 * g_action_group_change_action_state().  These variants allow a
 * "platform data" #GVariant to be specified: a dictionary providing
 * context for the action invocation (for example: timestamps, startup
 * notification IDs, etc).
 *
 * #GDBusActionGroup implements #GRemoteActionGroup.  This provides a
 * mechanism to send platform data for action invocations over D-Bus.
 *
 * Additionally, g_dbus_connection_export_action_group() will check if
 * the exported #GActionGroup implements #GRemoteActionGroup and use the
 * <literal>_full</literal> variants of the calls if available.  This
 * provides a mechanism by which to receive platform data for action
 * invocations that arrive by way of D-Bus.
 *
 * Since: 2.32
 */


/**
 * SECTION:gresolver
 * @short_description: Asynchronous and cancellable DNS resolver
 * @include: gio/gio.h
 *
 * #GResolver provides cancellable synchronous and asynchronous DNS
 * resolution, for hostnames (g_resolver_lookup_by_address(),
 * g_resolver_lookup_by_name() and their async variants) and SRV
 * (service) records (g_resolver_lookup_service()).
 *
 * #GNetworkAddress and #GNetworkService provide wrappers around
 * #GResolver functionality that also implement #GSocketConnectable,
 * making it easy to connect to a remote host/service.
 */


/**
 * SECTION:gresource
 * @short_description: Resource framework
 * @include: gio/gio.h
 *
 * Applications and libraries often contain binary or textual data that is really part of the
 * application, rather than user data. For instance #GtkBuilder .ui files, splashscreen images,
 * GMenu markup xml, CSS files, icons, etc. These are often shipped as files in <filename>$datadir/appname</filename>, or
 * manually included as literal strings in the code.
 *
 * The #GResource API and the <link linkend="glib-compile-resources">glib-compile-resources</link> program
 * provide a convenient and efficient alternative to this which has some nice properties. You
 * maintain the files as normal files, so its easy to edit them, but during the build the files
 * are combined into a binary bundle that is linked into the executable. This means that loading
 * the resource files are efficient (as they are already in memory, shared with other instances) and
 * simple (no need to check for things like I/O errors or locate the files in the filesystem). It
 * also makes it easier to create relocatable applications.
 *
 * Resource files can also be marked as compressed. Such files will be included in the resource bundle
 * in a compressed form, but will be automatically uncompressed when the resource is used. This
 * is very useful e.g. for larger text files that are parsed once (or rarely) and then thrown away.
 *
 * Resource files can also be marked to be preprocessed, by setting the value of the
 * <literal>preprocess</literal> attribute to a comma-separated list of preprocessing options.
 * The only options currently supported are:
 *
 * <literal>xml-stripblanks</literal> which will use <command>xmllint</command> to strip
 * ignorable whitespace from the xml file. For this to work, the <envar>XMLLINT</envar>
 * environment variable must be set to the full path to the xmllint executable, or xmllint
 * must be in the PATH; otherwise the preprocessing step is skipped.
 *
 * <literal>to-pixdata</literal> which will use <command>gdk-pixbuf-pixdata</command> to convert
 * images to the GdkPixdata format, which allows you to create pixbufs directly using the data inside
 * the resource file, rather than an (uncompressed) copy if it. For this, the gdk-pixbuf-pixdata
 * program must be in the PATH, or the <envar>GDK_PIXBUF_PIXDATA</envar> environment variable must be
 * set to the full path to the gdk-pixbuf-pixdata executable; otherwise the resource compiler will
 * abort.
 *
 * Resource bundles are created by the <link linkend="glib-compile-resources">glib-compile-resources</link> program
 * which takes an xml file that describes the bundle, and a set of files that the xml references. These
 * are combined into a binary resource bundle.
 *
 * <example id="resource-example"><title>Example resource description</title>
 * <programlisting><![CDATA[
 * <?xml version="1.0" encoding="UTF-8"?>
 * <gresources>
 *   <gresource prefix="/org/gtk/Example">
 *     <file>data/splashscreen.png</file>
 *     <file compressed="true">dialog.ui</file>
 *     <file preprocess="xml-stripblanks">menumarkup.xml</file>
 *   </gresource>
 * </gresources>
 * ]]></programlisting></example>
 *
 * This will create a resource bundle with the following files:
 * <programlisting><![CDATA[
 * /org/gtk/Example/data/splashscreen.png
 * /org/gtk/Example/dialog.ui
 * /org/gtk/Example/menumarkup.xml
 * ]]></programlisting>
 *
 * Note that all resources in the process share the same namespace, so use java-style
 * path prefixes (like in the above example) to avoid conflicts.
 *
 * You can then use <link linkend="glib-compile-resources">glib-compile-resources</link> to compile the xml to a
 * binary bundle that you can load with g_resource_load(). However, its more common to use the --generate-source and
 * --generate-header arguments to create a source file and header to link directly into your application.
 *
 * Once a #GResource has been created and registered all the data in it can be accessed globally in the process by
 * using API calls like g_resources_open_stream() to stream the data or g_resources_lookup_data() to get a direct pointer
 * to the data. You can also use uris like "resource:///org/gtk/Example/data/splashscreen.png" with #GFile to access
 * the resource data.
 *
 * There are two forms of the generated source, the default version uses the compiler support for constructor
 * and destructor functions (where available) to automatically create and register the #GResource on startup
 * or library load time. If you pass --manual-register two functions to register/unregister the resource is instead
 * created. This requires an explicit initialization call in your application/library, but it works on all platforms,
 * even on the minor ones where this is not available. (Constructor support is available for at least Win32, MacOS and Linux.)
 *
 * Note that resource data can point directly into the data segment of e.g. a library, so if you are unloading libraries
 * during runtime you need to be very careful with keeping around pointers to data from a resource, as this goes away
 * when the library is unloaded. However, in practice this is not generally a problem, since most resource accesses
 * is for your own resources, and resource data is often used once, during parsing, and then released.
 *
 * Since: 2.32
 */


/**
 * SECTION:gseekable
 * @short_description: Stream seeking interface
 * @include: gio/gio.h
 * @see_also: #GInputStream, #GOutputStream
 *
 * #GSeekable is implemented by streams (implementations of
 * #GInputStream or #GOutputStream) that support seeking.
 */


/**
 * SECTION:gsettings
 * @short_description: High-level API for application settings
 *
 * The #GSettings class provides a convenient API for storing and retrieving
 * application settings.
 *
 * Reads and writes can be considered to be non-blocking.  Reading
 * settings with #GSettings is typically extremely fast: on
 * approximately the same order of magnitude (but slower than) a
 * #GHashTable lookup.  Writing settings is also extremely fast in terms
 * of time to return to your application, but can be extremely expensive
 * for other threads and other processes.  Many settings backends
 * (including dconf) have lazy initialisation which means in the common
 * case of the user using their computer without modifying any settings
 * a lot of work can be avoided.  For dconf, the D-Bus service doesn't
 * even need to be started in this case.  For this reason, you should
 * only ever modify #GSettings keys in response to explicit user action.
 * Particular care should be paid to ensure that modifications are not
 * made during startup -- for example, when setting the initial value
 * of preferences widgets.  The built-in g_settings_bind() functionality
 * is careful not to write settings in response to notify signals as a
 * result of modifications that it makes to widgets.
 *
 * When creating a GSettings instance, you have to specify a schema
 * that describes the keys in your settings and their types and default
 * values, as well as some other information.
 *
 * Normally, a schema has as fixed path that determines where the settings
 * are stored in the conceptual global tree of settings. However, schemas
 * can also be 'relocatable', i.e. not equipped with a fixed path. This is
 * useful e.g. when the schema describes an 'account', and you want to be
 * able to store a arbitrary number of accounts.
 *
 * Paths must start with and end with a forward slash character ('/')
 * and must not contain two sequential slash characters.  Paths should
 * be chosen based on a domain name associated with the program or
 * library to which the settings belong.  Examples of paths are
 * "/org/gtk/settings/file-chooser/" and "/ca/desrt/dconf-editor/".
 * Paths should not start with "/apps/", "/desktop/" or "/system/" as
 * they often did in GConf.
 *
 * Unlike other configuration systems (like GConf), GSettings does not
 * restrict keys to basic types like strings and numbers. GSettings stores
 * values as #GVariant, and allows any #GVariantType for keys. Key names
 * are restricted to lowercase characters, numbers and '-'. Furthermore,
 * the names must begin with a lowercase character, must not end
 * with a '-', and must not contain consecutive dashes.
 *
 * Similar to GConf, the default values in GSettings schemas can be
 * localized, but the localized values are stored in gettext catalogs
 * and looked up with the domain that is specified in the
 * <tag class="attribute">gettext-domain</tag> attribute of the
 * <tag class="starttag">schemalist</tag> or <tag class="starttag">schema</tag>
 * elements and the category that is specified in the l10n attribute of the
 * <tag class="starttag">key</tag> element.
 *
 * GSettings uses schemas in a compact binary form that is created
 * by the <link linkend="glib-compile-schemas">glib-compile-schemas</link>
 * utility. The input is a schema description in an XML format that can be
 * described by the following DTD:
 * |[<xi:include xmlns:xi="http://www.w3.org/2001/XInclude" parse="text" href="../../../../gio/gschema.dtd"><xi:fallback>FIXME: MISSING XINCLUDE CONTENT</xi:fallback></xi:include>]|
 *
 * glib-compile-schemas expects schema files to have the extension <filename>.gschema.xml</filename>
 *
 * At runtime, schemas are identified by their id (as specified
 * in the <tag class="attribute">id</tag> attribute of the
 * <tag class="starttag">schema</tag> element). The
 * convention for schema ids is to use a dotted name, similar in
 * style to a D-Bus bus name, e.g. "org.gnome.SessionManager". In particular,
 * if the settings are for a specific service that owns a D-Bus bus name,
 * the D-Bus bus name and schema id should match. For schemas which deal
 * with settings not associated with one named application, the id should
 * not use StudlyCaps, e.g. "org.gnome.font-rendering".
 *
 * In addition to #GVariant types, keys can have types that have enumerated
 * types. These can be described by a <tag class="starttag">choice</tag>,
 * <tag class="starttag">enum</tag> or <tag class="starttag">flags</tag> element, see
 * <xref linkend="schema-enumerated"/>. The underlying type of
 * such a key is string, but you can use g_settings_get_enum(),
 * g_settings_set_enum(), g_settings_get_flags(), g_settings_set_flags()
 * access the numeric values corresponding to the string value of enum
 * and flags keys.
 *
 * <example id="schema-default-values"><title>Default values</title>
 * <programlisting><![CDATA[
 * <schemalist>
 *   <schema id="org.gtk.Test" path="/org/gtk/Test/" gettext-domain="test">
 *
 *     <key name="greeting" type="s">
 *       <default l10n="messages">"Hello, earthlings"</default>
 *       <summary>A greeting</summary>
 *       <description>
 *         Greeting of the invading martians
 *       </description>
 *     </key>
 *
 *     <key name="box" type="(ii)">
 *       <default>(20,30)</default>
 *     </key>
 *
 *   </schema>
 * </schemalist>
 * ]]></programlisting></example>
 *
 * <example id="schema-enumerated"><title>Ranges, choices and enumerated types</title>
 * <programlisting><![CDATA[
 * <schemalist>
 *
 *   <enum id="org.gtk.Test.myenum">
 *     <value nick="first" value="1"/>
 *     <value nick="second" value="2"/>
 *   </enum>
 *
 *   <flags id="org.gtk.Test.myflags">
 *     <value nick="flag1" value="1"/>
 *     <value nick="flag2" value="2"/>
 *     <value nick="flag3" value="4"/>
 *   </flags>
 *
 *   <schema id="org.gtk.Test">
 *
 *     <key name="key-with-range" type="i">
 *       <range min="1" max="100"/>
 *       <default>10</default>
 *     </key>
 *
 *     <key name="key-with-choices" type="s">
 *       <choices>
 *         <choice value='Elisabeth'/>
 *         <choice value='Annabeth'/>
 *         <choice value='Joe'/>
 *       </choices>
 *       <aliases>
 *         <alias value='Anna' target='Annabeth'/>
 *         <alias value='Beth' target='Elisabeth'/>
 *       </aliases>
 *       <default>'Joe'</default>
 *     </key>
 *
 *     <key name='enumerated-key' enum='org.gtk.Test.myenum'>
 *       <default>'first'</default>
 *     </key>
 *
 *     <key name='flags-key' flags='org.gtk.Test.myflags'>
 *       <default>["flag1",flag2"]</default>
 *     </key>
 *   </schema>
 * </schemalist>
 * ]]></programlisting></example>
 *
 * <refsect2>
 *   <title>Vendor overrides</title>
 *   <para>
 *     Default values are defined in the schemas that get installed by
 *     an application. Sometimes, it is necessary for a vendor or distributor
 *     to adjust these defaults. Since patching the XML source for the schema
 *     is inconvenient and error-prone,
 *     <link linkend="glib-compile-schemas">glib-compile-schemas</link> reads
 *     so-called 'vendor override' files. These are keyfiles in the same
 *     directory as the XML schema sources which can override default values.
 *     The schema id serves as the group name in the key file, and the values
 *     are expected in serialized GVariant form, as in the following example:
 *     <informalexample><programlisting>
 *     [org.gtk.Example]
 *     key1='string'
 *     key2=1.5
 *     </programlisting></informalexample>
 *   </para>
 *   <para>
 *     glib-compile-schemas expects schema files to have the extension
 *     <filename>.gschema.override</filename>
 *   </para>
 * </refsect2>
 *
 * <refsect2>
 *   <title>Binding</title>
 *   <para>
 *     A very convenient feature of GSettings lets you bind #GObject properties
 *     directly to settings, using g_settings_bind(). Once a GObject property
 *     has been bound to a setting, changes on either side are automatically
 *     propagated to the other side. GSettings handles details like
 *     mapping between GObject and GVariant types, and preventing infinite
 *     cycles.
 *   </para>
 *   <para>
 *     This makes it very easy to hook up a preferences dialog to the
 *     underlying settings. To make this even more convenient, GSettings
 *     looks for a boolean property with the name "sensitivity" and
 *     automatically binds it to the writability of the bound setting.
 *     If this 'magic' gets in the way, it can be suppressed with the
 *     #G_SETTINGS_BIND_NO_SENSITIVITY flag.
 *   </para>
 * </refsect2>
 */


/**
 * SECTION:gsettingsbackend
 * @title: GSettingsBackend
 * @short_description: Interface for settings backend implementations
 * @include: gio/gsettingsbackend.h
 * @see_also: #GSettings, #GIOExtensionPoint
 *
 * The #GSettingsBackend interface defines a generic interface for
 * non-strictly-typed data that is stored in a hierarchy. To implement
 * an alternative storage backend for #GSettings, you need to implement
 * the #GSettingsBackend interface and then make it implement the
 * extension point #G_SETTINGS_BACKEND_EXTENSION_POINT_NAME.
 *
 * The interface defines methods for reading and writing values, a
 * method for determining if writing of certain values will fail
 * (lockdown) and a change notification mechanism.
 *
 * The semantics of the interface are very precisely defined and
 * implementations must carefully adhere to the expectations of
 * callers that are documented on each of the interface methods.
 *
 * Some of the GSettingsBackend functions accept or return a #GTree.
 * These trees always have strings as keys and #GVariant as values.
 * g_settings_backend_create_tree() is a convenience function to create
 * suitable trees.
 *
 * <note><para>
 * The #GSettingsBackend API is exported to allow third-party
 * implementations, but does not carry the same stability guarantees
 * as the public GIO API. For this reason, you have to define the
 * C preprocessor symbol #G_SETTINGS_ENABLE_BACKEND before including
 * <filename>gio/gsettingsbackend.h</filename>
 * </para></note>
 */


/**
 * SECTION:gsettingsschema
 * @short_description: introspecting and controlling the loading of #GSettings schemas
 *
 * The #GSettingsSchemaSource and #GSettingsSchema APIs provide a
 * mechanism for advanced control over the loading of schemas and a
 * mechanism for introspecting their content.
 *
 * Plugin loading systems that wish to provide plugins a way to access
 * settings face the problem of how to make the schemas for these
 * settings visible to GSettings.  Typically, a plugin will want to ship
 * the schema along with itself and it won't be installed into the
 * standard system directories for schemas.
 *
 * #GSettingsSchemaSource provides a mechanism for dealing with this by
 * allowing the creation of a new 'schema source' from which schemas can
 * be acquired.  This schema source can then become part of the metadata
 * associated with the plugin and queried whenever the plugin requires
 * access to some settings.
 *
 * Consider the following example:
 *
 * |[
 * typedef struct
 * {
 *    ...
 *    GSettingsSchemaSource *schema_source;
 *    ...
 * } Plugin;
 *
 * Plugin *
 * initialise_plugin (const gchar *dir)
 * {
 *   Plugin *plugin;
 *
 *   ...
 *
 *   plugin->schema_source =
 *     g_settings_new_schema_source_from_directory (dir,
 *       g_settings_schema_source_get_default (), FALSE, NULL);
 *
 *   ...
 *
 *   return plugin;
 * }
 *
 * ...
 *
 * GSettings *
 * plugin_get_settings (Plugin      *plugin,
 *                      const gchar *schema_id)
 * {
 *   GSettingsSchema *schema;
 *
 *   if (schema_id == NULL)
 *     schema_id = plugin->identifier;
 *
 *   schema = g_settings_schema_source_lookup (plugin->schema_source,
 *                                             schema_id, FALSE);
 *
 *   if (schema == NULL)
 *     {
 *       ... disable the plugin or abort, etc ...
 *     }
 *
 *   return g_settings_new_full (schema, NULL, NULL);
 * }
 * ]|
 *
 * The code above shows how hooks should be added to the code that
 * initialises (or enables) the plugin to create the schema source and
 * how an API can be added to the plugin system to provide a convenient
 * way for the plugin to access its settings, using the schemas that it
 * ships.
 *
 * From the standpoint of the plugin, it would need to ensure that it
 * ships a gschemas.compiled file as part of itself, and then simply do
 * the following:
 *
 * |[
 * {
 *   GSettings *settings;
 *   gint some_value;
 *
 *   settings = plugin_get_settings (self, NULL);
 *   some_value = g_settings_get_int (settings, "some-value");
 *   ...
 * }
 * ]|
 *
 * It's also possible that the plugin system expects the schema source
 * files (ie: .gschema.xml files) instead of a gschemas.compiled file.
 * In that case, the plugin loading system must compile the schemas for
 * itself before attempting to create the settings source.
 *
 * Since: 2.32
 */


/**
 * SECTION:gsimpleaction
 * @title: GSimpleAction
 * @short_description: A simple GAction implementation
 *
 * A #GSimpleAction is the obvious simple implementation of the #GAction
 * interface. This is the easiest way to create an action for purposes of
 * adding it to a #GSimpleActionGroup.
 *
 * See also #GtkAction.
 */


/**
 * SECTION:gsimpleactiongroup
 * @title: GSimpleActionGroup
 * @short_description: A simple GActionGroup implementation
 *
 * #GSimpleActionGroup is a hash table filled with #GAction objects,
 * implementing the #GActionGroup and #GActionMap interfaces.
 */


/**
 * SECTION:gsimpleasyncresult
 * @short_description: Simple asynchronous results implementation
 * @include: gio/gio.h
 * @see_also: #GAsyncResult
 *
 * Implements #GAsyncResult for simple cases. Most of the time, this
 * will be all an application needs, and will be used transparently.
 * Because of this, #GSimpleAsyncResult is used throughout GIO for
 * handling asynchronous functions.
 *
 * GSimpleAsyncResult handles #GAsyncReadyCallback<!-- -->s, error
 * reporting, operation cancellation and the final state of an operation,
 * completely transparent to the application. Results can be returned
 * as a pointer e.g. for functions that return data that is collected
 * asynchronously, a boolean value for checking the success or failure
 * of an operation, or a #gssize for operations which return the number
 * of bytes modified by the operation; all of the simple return cases
 * are covered.
 *
 * Most of the time, an application will not need to know of the details
 * of this API; it is handled transparently, and any necessary operations
 * are handled by #GAsyncResult's interface. However, if implementing a
 * new GIO module, for writing language bindings, or for complex
 * applications that need better control of how asynchronous operations
 * are completed, it is important to understand this functionality.
 *
 * GSimpleAsyncResults are tagged with the calling function to ensure
 * that asynchronous functions and their finishing functions are used
 * together correctly.
 *
 * To create a new #GSimpleAsyncResult, call g_simple_async_result_new().
 * If the result needs to be created for a #GError, use
 * g_simple_async_result_new_from_error() or
 * g_simple_async_result_new_take_error(). If a #GError is not available
 * (e.g. the asynchronous operation's doesn't take a #GError argument),
 * but the result still needs to be created for an error condition, use
 * g_simple_async_result_new_error() (or g_simple_async_result_set_error_va()
 * if your application or binding requires passing a variable argument list
 * directly), and the error can then be propagated through the use of
 * g_simple_async_result_propagate_error().
 *
 * An asynchronous operation can be made to ignore a cancellation event by
 * calling g_simple_async_result_set_handle_cancellation() with a
 * #GSimpleAsyncResult for the operation and %FALSE. This is useful for
 * operations that are dangerous to cancel, such as close (which would
 * cause a leak if cancelled before being run).
 *
 * GSimpleAsyncResult can integrate into GLib's event loop, #GMainLoop,
 * or it can use #GThread<!-- -->s.
 * g_simple_async_result_complete() will finish an I/O task directly
 * from the point where it is called. g_simple_async_result_complete_in_idle()
 * will finish it from an idle handler in the <link
 * linkend="g-main-context-push-thread-default">thread-default main
 * context</link>. g_simple_async_result_run_in_thread() will run the
 * job in a separate thread and then deliver the result to the
 * thread-default main context.
 *
 * To set the results of an asynchronous function,
 * g_simple_async_result_set_op_res_gpointer(),
 * g_simple_async_result_set_op_res_gboolean(), and
 * g_simple_async_result_set_op_res_gssize()
 * are provided, setting the operation's result to a gpointer, gboolean, or
 * gssize, respectively.
 *
 * Likewise, to get the result of an asynchronous function,
 * g_simple_async_result_get_op_res_gpointer(),
 * g_simple_async_result_get_op_res_gboolean(), and
 * g_simple_async_result_get_op_res_gssize() are
 * provided, getting the operation's result as a gpointer, gboolean, and
 * gssize, respectively.
 *
 * For the details of the requirements implementations must respect, see
 * #GAsyncResult.  A typical implementation of an asynchronous operation
 * using GSimpleAsyncResult looks something like this:
 *
 * |[
 * static void
 * baked_cb (Cake    *cake,
 *           gpointer user_data)
 * {
 *   /&ast; In this example, this callback is not given a reference to the cake, so
 *    &ast; the GSimpleAsyncResult has to take a reference to it.
 *    &ast;/
 *   GSimpleAsyncResult *result = user_data;
 *
 *   if (cake == NULL)
 *     g_simple_async_result_set_error (result,
 *                                      BAKER_ERRORS,
 *                                      BAKER_ERROR_NO_FLOUR,
 *                                      "Go to the supermarket");
 *   else
 *     g_simple_async_result_set_op_res_gpointer (result,
 *                                                g_object_ref (cake),
 *                                                g_object_unref);
 *
 *
 *   /&ast; In this example, we assume that baked_cb is called as a callback from
 *    &ast; the mainloop, so it's safe to complete the operation synchronously here.
 *    &ast; If, however, _baker_prepare_cake () might call its callback without
 *    &ast; first returning to the mainloop — inadvisable, but some APIs do so —
 *    &ast; we would need to use g_simple_async_result_complete_in_idle().
 *    &ast;/
 *   g_simple_async_result_complete (result);
 *   g_object_unref (result);
 * }
 *
 * void
 * baker_bake_cake_async (Baker              *self,
 *                        guint               radius,
 *                        GAsyncReadyCallback callback,
 *                        gpointer            user_data)
 * {
 *   GSimpleAsyncResult *simple;
 *   Cake               *cake;
 *
 *   if (radius < 3)
 *     {
 *       g_simple_async_report_error_in_idle (G_OBJECT (self),
 *                                            callback,
 *                                            user_data,
 *                                            BAKER_ERRORS,
 *                                            BAKER_ERROR_TOO_SMALL,
 *                                            "%ucm radius cakes are silly",
 *                                            radius);
 *       return;
 *     }
 *
 *   simple = g_simple_async_result_new (G_OBJECT (self),
 *                                       callback,
 *                                       user_data,
 *                                       baker_bake_cake_async);
 *   cake = _baker_get_cached_cake (self, radius);
 *
 *   if (cake != NULL)
 *     {
 *       g_simple_async_result_set_op_res_gpointer (simple,
 *                                                  g_object_ref (cake),
 *                                                  g_object_unref);
 *       g_simple_async_result_complete_in_idle (simple);
 *       g_object_unref (simple);
 *       /&ast; Drop the reference returned by _baker_get_cached_cake(); the
 *        &ast; GSimpleAsyncResult has taken its own reference.
 *        &ast;/
 *       g_object_unref (cake);
 *       return;
 *     }
 *
 *   _baker_prepare_cake (self, radius, baked_cb, simple);
 * }
 *
 * Cake *
 * baker_bake_cake_finish (Baker        *self,
 *                         GAsyncResult *result,
 *                         GError      **error)
 * {
 *   GSimpleAsyncResult *simple;
 *   Cake               *cake;
 *
 *   g_return_val_if_fail (g_simple_async_result_is_valid (result,
 *                                                         G_OBJECT (self),
 *                                                         baker_bake_cake_async),
 *                         NULL);
 *
 *   simple = (GSimpleAsyncResult *) result;
 *
 *   if (g_simple_async_result_propagate_error (simple, error))
 *     return NULL;
 *
 *   cake = CAKE (g_simple_async_result_get_op_res_gpointer (simple));
 *   return g_object_ref (cake);
 * }
 * ]|
 */


/**
 * SECTION:gsimplepermission
 * @title: GSimplePermission
 * @short_description: A GPermission that doesn't change value
 *
 * #GSimplePermission is a trivial implementation of #GPermission that
 * represents a permission that is either always or never allowed.  The
 * value is given at construction and doesn't change.
 *
 * Calling request or release will result in errors.
 */


/**
 * SECTION:gsocket
 * @short_description: Low-level socket object
 * @include: gio/gio.h
 * @see_also: #GInitable
 *
 * A #GSocket is a low-level networking primitive. It is a more or less
 * direct mapping of the BSD socket API in a portable GObject based API.
 * It supports both the UNIX socket implementations and winsock2 on Windows.
 *
 * #GSocket is the platform independent base upon which the higher level
 * network primitives are based. Applications are not typically meant to
 * use it directly, but rather through classes like #GSocketClient,
 * #GSocketService and #GSocketConnection. However there may be cases where
 * direct use of #GSocket is useful.
 *
 * #GSocket implements the #GInitable interface, so if it is manually constructed
 * by e.g. g_object_new() you must call g_initable_init() and check the
 * results before using the object. This is done automatically in
 * g_socket_new() and g_socket_new_from_fd(), so these functions can return
 * %NULL.
 *
 * Sockets operate in two general modes, blocking or non-blocking. When
 * in blocking mode all operations block until the requested operation
 * is finished or there is an error. In non-blocking mode all calls that
 * would block return immediately with a %G_IO_ERROR_WOULD_BLOCK error.
 * To know when a call would successfully run you can call g_socket_condition_check(),
 * or g_socket_condition_wait(). You can also use g_socket_create_source() and
 * attach it to a #GMainContext to get callbacks when I/O is possible.
 * Note that all sockets are always set to non blocking mode in the system, and
 * blocking mode is emulated in GSocket.
 *
 * When working in non-blocking mode applications should always be able to
 * handle getting a %G_IO_ERROR_WOULD_BLOCK error even when some other
 * function said that I/O was possible. This can easily happen in case
 * of a race condition in the application, but it can also happen for other
 * reasons. For instance, on Windows a socket is always seen as writable
 * until a write returns %G_IO_ERROR_WOULD_BLOCK.
 *
 * #GSocket<!-- -->s can be either connection oriented or datagram based.
 * For connection oriented types you must first establish a connection by
 * either connecting to an address or accepting a connection from another
 * address. For connectionless socket types the target/source address is
 * specified or received in each I/O operation.
 *
 * All socket file descriptors are set to be close-on-exec.
 *
 * Note that creating a #GSocket causes the signal %SIGPIPE to be
 * ignored for the remainder of the program. If you are writing a
 * command-line utility that uses #GSocket, you may need to take into
 * account the fact that your program will not automatically be killed
 * if it tries to write to %stdout after it has been closed.
 *
 * Since: 2.22
 */


/**
 * SECTION:gsocketaddress
 * @short_description: Abstract base class representing endpoints for socket communication
 *
 * #GSocketAddress is the equivalent of <type>struct sockaddr</type>
 * in the BSD sockets API. This is an abstract class; use
 * #GInetSocketAddress for internet sockets, or #GUnixSocketAddress
 * for UNIX domain sockets.
 */


/**
 * SECTION:gsocketclient
 * @short_description: Helper for connecting to a network service
 * @include: gio/gio.h
 * @see_also: #GSocketConnection, #GSocketListener
 *
 * #GSocketClient is a lightweight high-level utility class for connecting to
 * a network host using a connection oriented socket type.
 *
 * You create a #GSocketClient object, set any options you want, and then
 * call a sync or async connect operation, which returns a #GSocketConnection
 * subclass on success.
 *
 * The type of the #GSocketConnection object returned depends on the type of
 * the underlying socket that is in use. For instance, for a TCP/IP connection
 * it will be a #GTcpConnection.
 *
 * As #GSocketClient is a lightweight object, you don't need to cache it. You
 * can just create a new one any time you need one.
 *
 * Since: 2.22
 */


/**
 * SECTION:gsocketconnectable
 * @short_description: Interface for potential socket endpoints
 *
 * Objects that describe one or more potential socket endpoints
 * implement #GSocketConnectable. Callers can then use
 * g_socket_connectable_enumerate() to get a #GSocketAddressEnumerator
 * to try out each socket address in turn until one succeeds, as shown
 * in the sample code below.
 *
 * |[
 * MyConnectionType *
 * connect_to_host (const char    *hostname,
 *                  guint16        port,
 *                  GCancellable  *cancellable,
 *                  GError       **error)
 * {
 *   MyConnection *conn = NULL;
 *   GSocketConnectable *addr;
 *   GSocketAddressEnumerator *enumerator;
 *   GSocketAddress *sockaddr;
 *   GError *conn_error = NULL;
 *
 *   addr = g_network_address_new ("www.gnome.org", 80);
 *   enumerator = g_socket_connectable_enumerate (addr);
 *   g_object_unref (addr);
 *
 *   /<!-- -->* Try each sockaddr until we succeed. Record the first
 *    * connection error, but not any further ones (since they'll probably
 *    * be basically the same as the first).
 *    *<!-- -->/
 *   while (!conn && (sockaddr = g_socket_address_enumerator_next (enumerator, cancellable, error))
 *     {
 *       conn = connect_to_sockaddr (sockaddr, conn_error ? NULL : &conn_error);
 *       g_object_unref (sockaddr);
 *     }
 *   g_object_unref (enumerator);
 *
 *   if (conn)
 *     {
 *       if (conn_error)
 *         {
 *           /<!-- -->* We couldn't connect to the first address, but we succeeded
 *            * in connecting to a later address.
 *            *<!-- -->/
 *           g_error_free (conn_error);
 *         }
 *       return conn;
 *     }
 *   else if (error)
 *     {
 *       /<!-- -->* Either the initial lookup failed, or else the caller
 *        * cancelled us.
 *        *<!-- -->/
 *       if (conn_error)
 *         g_error_free (conn_error);
 *       return NULL;
 *     }
 *   else
 *     {
 *       g_error_propagate (error, conn_error);
 *       return NULL;
 *     }
 * }
 * ]|
 */


/**
 * SECTION:gsocketconnection
 * @short_description: A socket connection
 * @include: gio/gio.h
 * @see_also: #GIOStream, #GSocketClient, #GSocketListener
 *
 * #GSocketConnection is a #GIOStream for a connected socket. They
 * can be created either by #GSocketClient when connecting to a host,
 * or by #GSocketListener when accepting a new client.
 *
 * The type of the #GSocketConnection object returned from these calls
 * depends on the type of the underlying socket that is in use. For
 * instance, for a TCP/IP connection it will be a #GTcpConnection.
 *
 * Choosing what type of object to construct is done with the socket
 * connection factory, and it is possible for 3rd parties to register
 * custom socket connection types for specific combination of socket
 * family/type/protocol using g_socket_connection_factory_register_type().
 *
 * Since: 2.22
 */


/**
 * SECTION:gsocketcontrolmessage
 * @title: GSocketControlMessage
 * @short_description: A GSocket control message
 * @see_also: #GSocket.
 *
 * A #GSocketControlMessage is a special-purpose utility message that
 * can be sent to or received from a #GSocket. These types of
 * messages are often called "ancillary data".
 *
 * The message can represent some sort of special instruction to or
 * information from the socket or can represent a special kind of
 * transfer to the peer (for example, sending a file description over
 * a UNIX socket).
 *
 * These messages are sent with g_socket_send_message() and received
 * with g_socket_receive_message().
 *
 * To extend the set of control message that can be sent, subclass this
 * class and override the get_size, get_level, get_type and serialize
 * methods.
 *
 * To extend the set of control messages that can be received, subclass
 * this class and implement the deserialize method. Also, make sure your
 * class is registered with the GType typesystem before calling
 * g_socket_receive_message() to read such a message.
 *
 * Since: 2.22
 */


/**
 * SECTION:gsocketlistener
 * @title: GSocketListener
 * @short_description: Helper for accepting network client connections
 * @see_also: #GThreadedSocketService, #GSocketService.
 *
 * A #GSocketListener is an object that keeps track of a set
 * of server sockets and helps you accept sockets from any of the
 * socket, either sync or async.
 *
 * If you want to implement a network server, also look at #GSocketService
 * and #GThreadedSocketService which are subclass of #GSocketListener
 * that makes this even easier.
 *
 * Since: 2.22
 */


/**
 * SECTION:gsocketservice
 * @title: GSocketService
 * @short_description: Make it easy to implement a network service
 * @see_also: #GThreadedSocketService, #GSocketListener.
 *
 * A #GSocketService is an object that represents a service that
 * is provided to the network or over local sockets.  When a new
 * connection is made to the service the #GSocketService::incoming
 * signal is emitted.
 *
 * A #GSocketService is a subclass of #GSocketListener and you need
 * to add the addresses you want to accept connections on with the
 * #GSocketListener APIs.
 *
 * There are two options for implementing a network service based on
 * #GSocketService. The first is to create the service using
 * g_socket_service_new() and to connect to the #GSocketService::incoming
 * signal. The second is to subclass #GSocketService and override the
 * default signal handler implementation.
 *
 * In either case, the handler must immediately return, or else it
 * will block additional incoming connections from being serviced.
 * If you are interested in writing connection handlers that contain
 * blocking code then see #GThreadedSocketService.
 *
 * The socket service runs on the main loop of the <link
 * linkend="g-main-context-push-thread-default-context">thread-default
 * context</link> of the thread it is created in, and is not
 * threadsafe in general. However, the calls to start and stop the
 * service are thread-safe so these can be used from threads that
 * handle incoming clients.
 *
 * Since: 2.22
 */


/**
 * SECTION:gsrvtarget
 * @short_description: DNS SRV record target
 * @include: gio/gio.h
 *
 * SRV (service) records are used by some network protocols to provide
 * service-specific aliasing and load-balancing. For example, XMPP
 * (Jabber) uses SRV records to locate the XMPP server for a domain;
 * rather than connecting directly to "example.com" or assuming a
 * specific server hostname like "xmpp.example.com", an XMPP client
 * would look up the "xmpp-client" SRV record for "example.com", and
 * then connect to whatever host was pointed to by that record.
 *
 * You can use g_resolver_lookup_service() or
 * g_resolver_lookup_service_async() to find the #GSrvTarget<!-- -->s
 * for a given service. However, if you are simply planning to connect
 * to the remote service, you can use #GNetworkService's
 * #GSocketConnectable interface and not need to worry about
 * #GSrvTarget at all.
 */


/**
 * SECTION:gtcpconnection
 * @title: GTcpConnection
 * @short_description: A TCP GSocketConnection
 * @see_also: #GSocketConnection.
 *
 * This is the subclass of #GSocketConnection that is created
 * for TCP/IP sockets.
 *
 * Since: 2.22
 */


/**
 * SECTION:gtcpwrapperconnection
 * @title: GTcpWrapperConnection
 * @short_description: wrapper for non-GSocketConnection-based, GSocket-based GIOStreams
 * @see_also: #GSocketConnection.
 *
 * A #GTcpWrapperConnection can be used to wrap a #GIOStream that is
 * based on a #GSocket, but which is not actually a
 * #GSocketConnection. This is used by #GSocketClient so that it can
 * always return a #GSocketConnection, even when the connection it has
 * actually created is not directly a #GSocketConnection.
 *
 * Since: 2.28
 */


/**
 * SECTION:gtestdbus
 * @short_description: D-Bus testing helper
 * @include: gio/gio.h
 *
 * Helper to test D-Bus code wihtout messing up with user' session bus.
 */


/**
 * SECTION:gthemedicon
 * @short_description: Icon theming support
 * @include: gio/gio.h
 * @see_also: #GIcon, #GLoadableIcon
 *
 * #GThemedIcon is an implementation of #GIcon that supports icon themes.
 * #GThemedIcon contains a list of all of the icons present in an icon
 * theme, so that icons can be looked up quickly. #GThemedIcon does
 * not provide actual pixmaps for icons, just the icon names.
 * Ideally something like gtk_icon_theme_choose_icon() should be used to
 * resolve the list of names so that fallback icons work nicely with
 * themes that inherit other themes.
 */


/**
 * SECTION:gthreadedsocketservice
 * @title: GThreadedSocketService
 * @short_description: A threaded GSocketService
 * @see_also: #GSocketService.
 *
 * A #GThreadedSocketService is a simple subclass of #GSocketService
 * that handles incoming connections by creating a worker thread and
 * dispatching the connection to it by emitting the
 * #GThreadedSocketService::run signal in the new thread.
 *
 * The signal handler may perform blocking IO and need not return
 * until the connection is closed.
 *
 * The service is implemented using a thread pool, so there is a
 * limited amount of threads available to serve incoming requests.
 * The service automatically stops the #GSocketService from accepting
 * new connections when all threads are busy.
 *
 * As with #GSocketService, you may connect to #GThreadedSocketService::run,
 * or subclass and override the default handler.
 */


/**
 * SECTION:gtls
 * @title: TLS Overview
 * @short_description: TLS (aka SSL) support for GSocketConnection
 * @include: gio/gio.h
 *
 * #GTlsConnection and related classes provide TLS (Transport Layer
 * Security, previously known as SSL, Secure Sockets Layer) support for
 * gio-based network streams.
 *
 * In the simplest case, for a client connection, you can just set the
 * #GSocketClient:tls flag on a #GSocketClient, and then any
 * connections created by that client will have TLS negotiated
 * automatically, using appropriate default settings, and rejecting
 * any invalid or self-signed certificates (unless you change that
 * default by setting the #GSocketClient:tls-validation-flags
 * property). The returned object will be a #GTcpWrapperConnection,
 * which wraps the underlying #GTlsClientConnection.
 *
 * For greater control, you can create your own #GTlsClientConnection,
 * wrapping a #GSocketConnection (or an arbitrary #GIOStream with
 * pollable input and output streams) and then connect to its signals,
 * such as #GTlsConnection::accept-certificate, before starting the
 * handshake.
 *
 * Server-side TLS is similar, using #GTlsServerConnection. At the
 * moment, there is no support for automatically wrapping server-side
 * connections in the way #GSocketClient does for client-side
 * connections.
 */


/**
 * SECTION:gtlsbackend
 * @title: GTlsBackend
 * @short_description: TLS backend implementation
 * @include: gio/gio.h
 *
 *
 */


/**
 * SECTION:gtlscertificate
 * @title: GTlsCertificate
 * @short_description: TLS certificate
 * @see_also: #GTlsConnection
 *
 * A certificate used for TLS authentication and encryption.
 * This can represent either a public key only (eg, the certificate
 * received by a client from a server), or the combination of
 * a public key and a private key (which is needed when acting as a
 * #GTlsServerConnection).
 *
 * Since: 2.28
 */


/**
 * SECTION:gtlsclientconnection
 * @short_description: TLS client-side connection
 * @include: gio/gio.h
 *
 * #GTlsClientConnection is the client-side subclass of
 * #GTlsConnection, representing a client-side TLS connection.
 */


/**
 * SECTION:gtlsconnection
 * @short_description: TLS connection type
 * @include: gio/gio.h
 *
 * #GTlsConnection is the base TLS connection class type, which wraps
 * a #GIOStream and provides TLS encryption on top of it. Its
 * subclasses, #GTlsClientConnection and #GTlsServerConnection,
 * implement client-side and server-side TLS, respectively.
 *
 * Since: 2.28
 */


/**
 * SECTION:gtlsdatabase
 * @short_description: TLS database type
 * @include: gio/gio.h
 *
 * #GTlsDatabase is used to lookup certificates and other information
 * from a certificate or key store. It is an abstract base class which
 * TLS library specific subtypes override.
 *
 * Most common client applications will not directly interact with
 * #GTlsDatabase. It is used internally by #GTlsConnection.
 *
 * Since: 2.30
 */


/**
 * SECTION:gtlsfiledatabase
 * @short_description: TLS file based database type
 * @include: gio/gio.h
 *
 * #GTlsFileDatabase is implemented by #GTlsDatabase objects which load
 * their certificate information from a file. It is in interface which
 * TLS library specific subtypes implement.
 *
 * Since: 2.30
 */


/**
 * SECTION:gtlsinteraction
 * @short_description: Interaction with the user during TLS operations.
 * @include: gio/gio.h
 *
 * #GTlsInteraction provides a mechanism for the TLS connection and database
 * code to interact with the user. It can be used to ask the user for passwords.
 *
 * To use a #GTlsInteraction with a TLS connection use
 * g_tls_connection_set_interaction().
 *
 * Callers should instantiate a derived class that implements the various
 * interaction methods to show the required dialogs.
 *
 * Callers should use the 'invoke' functions like
 * g_tls_interaction_invoke_ask_password() to run interaction methods. These
 * functions make sure that the interaction is invoked in the main loop
 * and not in the current thread, if the current thread is not running the
 * main loop.
 *
 * Derived classes can choose to implement whichever interactions methods they'd
 * like to support by overriding those virtual methods in their class
 * initialization function. Any interactions not implemented will return
 * %G_TLS_INTERACTION_UNHANDLED. If a derived class implements an async method,
 * it must also implement the corresponding finish method.
 */


/**
 * SECTION:gtlspassword
 * @title: GTlsPassword
 * @short_description: TLS Passwords for prompting
 * @include: gio/gio.h
 *
 * Holds a password used in TLS.
 */


/**
 * SECTION:gtlsserverconnection
 * @short_description: TLS server-side connection
 * @include: gio/gio.h
 *
 * #GTlsServerConnection is the server-side subclass of #GTlsConnection,
 * representing a server-side TLS connection.
 *
 * Since: 2.28
 */


/**
 * SECTION:gunixconnection
 * @title: GUnixConnection
 * @short_description: A UNIX domain GSocketConnection
 * @include: gio/gunixconnection.h
 * @see_also: #GSocketConnection.
 *
 * This is the subclass of #GSocketConnection that is created
 * for UNIX domain sockets.
 *
 * It contains functions to do some of the UNIX socket specific
 * functionality like passing file descriptors.
 *
 * Note that <filename>&lt;gio/gunixconnection.h&gt;</filename> belongs to
 * the UNIX-specific GIO interfaces, thus you have to use the
 * <filename>gio-unix-2.0.pc</filename> pkg-config file when using it.
 *
 * Since: 2.22
 */


/**
 * SECTION:gunixcredentialsmessage
 * @title: GUnixCredentialsMessage
 * @short_description: A GSocketControlMessage containing credentials
 * @include: gio/gunixcredentialsmessage.h
 * @see_also: #GUnixConnection, #GSocketControlMessage
 *
 * This #GSocketControlMessage contains a #GCredentials instance.  It
 * may be sent using g_socket_send_message() and received using
 * g_socket_receive_message() over UNIX sockets (ie: sockets in the
 * %G_SOCKET_FAMILY_UNIX family).
 *
 * For an easier way to send and receive credentials over
 * stream-oriented UNIX sockets, see
 * g_unix_connection_send_credentials() and
 * g_unix_connection_receive_credentials(). To receive credentials of
 * a foreign process connected to a socket, use
 * g_socket_get_credentials().
 */


/**
 * SECTION:gunixfdlist
 * @title: GUnixFDList
 * @short_description: An object containing a set of UNIX file descriptors
 * @include: gio/gunixfdlist.h
 * @see_also: #GUnixFDMessage
 *
 * A #GUnixFDList contains a list of file descriptors.  It owns the file
 * descriptors that it contains, closing them when finalized.
 *
 * It may be wrapped in a #GUnixFDMessage and sent over a #GSocket in
 * the %G_SOCKET_ADDRESS_UNIX family by using g_socket_send_message()
 * and received using g_socket_receive_message().
 *
 * Note that <filename>&lt;gio/gunixfdlist.h&gt;</filename> belongs to
 * the UNIX-specific GIO interfaces, thus you have to use the
 * <filename>gio-unix-2.0.pc</filename> pkg-config file when using it.
 */


/**
 * SECTION:gunixfdmessage
 * @title: GUnixFDMessage
 * @short_description: A GSocketControlMessage containing a GUnixFDList
 * @include: gio/gunixfdmessage.h
 * @see_also: #GUnixConnection, #GUnixFDList, #GSocketControlMessage
 *
 * This #GSocketControlMessage contains a #GUnixFDList.
 * It may be sent using g_socket_send_message() and received using
 * g_socket_receive_message() over UNIX sockets (ie: sockets in the
 * %G_SOCKET_ADDRESS_UNIX family). The file descriptors are copied
 * between processes by the kernel.
 *
 * For an easier way to send and receive file descriptors over
 * stream-oriented UNIX sockets, see g_unix_connection_send_fd() and
 * g_unix_connection_receive_fd().
 *
 * Note that <filename>&lt;gio/gunixfdmessage.h&gt;</filename> belongs to
 * the UNIX-specific GIO interfaces, thus you have to use the
 * <filename>gio-unix-2.0.pc</filename> pkg-config file when using it.
 */


/**
 * SECTION:gunixinputstream
 * @short_description: Streaming input operations for UNIX file descriptors
 * @include: gio/gunixinputstream.h
 * @see_also: #GInputStream
 *
 * #GUnixInputStream implements #GInputStream for reading from a UNIX
 * file descriptor, including asynchronous operations. (If the file
 * descriptor refers to a socket or pipe, this will use poll() to do
 * asynchronous I/O. If it refers to a regular file, it will fall back
 * to doing asynchronous I/O in another thread.)
 *
 * Note that <filename>&lt;gio/gunixinputstream.h&gt;</filename> belongs
 * to the UNIX-specific GIO interfaces, thus you have to use the
 * <filename>gio-unix-2.0.pc</filename> pkg-config file when using it.
 */


/**
 * SECTION:gunixmounts
 * @include: gio/gunixmounts.h
 * @short_description: UNIX mounts
 *
 * Routines for managing mounted UNIX mount points and paths.
 *
 * Note that <filename>&lt;gio/gunixmounts.h&gt;</filename> belongs to the
 * UNIX-specific GIO interfaces, thus you have to use the
 * <filename>gio-unix-2.0.pc</filename> pkg-config file when using it.
 */


/**
 * SECTION:gunixoutputstream
 * @short_description: Streaming output operations for UNIX file descriptors
 * @include: gio/gunixoutputstream.h
 * @see_also: #GOutputStream
 *
 * #GUnixOutputStream implements #GOutputStream for writing to a UNIX
 * file descriptor, including asynchronous operations. (If the file
 * descriptor refers to a socket or pipe, this will use poll() to do
 * asynchronous I/O. If it refers to a regular file, it will fall back
 * to doing asynchronous I/O in another thread.)
 *
 * Note that <filename>&lt;gio/gunixoutputstream.h&gt;</filename> belongs
 * to the UNIX-specific GIO interfaces, thus you have to use the
 * <filename>gio-unix-2.0.pc</filename> pkg-config file when using it.
 */


/**
 * SECTION:gunixsocketaddress
 * @short_description: UNIX GSocketAddress
 * @include: gio/gunixsocketaddress.h
 *
 * Support for UNIX-domain (also known as local) sockets.
 *
 * UNIX domain sockets are generally visible in the filesystem.
 * However, some systems support abstract socket names which are not
 * visible in the filesystem and not affected by the filesystem
 * permissions, visibility, etc. Currently this is only supported
 * under Linux. If you attempt to use abstract sockets on other
 * systems, function calls may return %G_IO_ERROR_NOT_SUPPORTED
 * errors. You can use g_unix_socket_address_abstract_names_supported()
 * to see if abstract names are supported.
 *
 * Note that <filename>&lt;gio/gunixsocketaddress.h&gt;</filename> belongs to
 * the UNIX-specific GIO interfaces, thus you have to use the
 * <filename>gio-unix-2.0.pc</filename> pkg-config file when using it.
 */


/**
 * SECTION:gvfs
 * @short_description: Virtual File System
 * @include: gio/gio.h
 *
 * Entry point for using GIO functionality.
 */


/**
 * SECTION:gvolume
 * @short_description: Volume management
 * @include: gio/gio.h
 *
 * The #GVolume interface represents user-visible objects that can be
 * mounted. Note, when porting from GnomeVFS, #GVolume is the moral
 * equivalent of #GnomeVFSDrive.
 *
 * Mounting a #GVolume instance is an asynchronous operation. For more
 * information about asynchronous operations, see #GAsyncResult and
 * #GSimpleAsyncResult. To mount a #GVolume, first call
 * g_volume_mount() with (at least) the #GVolume instance, optionally
 * a #GMountOperation object and a #GAsyncReadyCallback.
 *
 * Typically, one will only want to pass %NULL for the
 * #GMountOperation if automounting all volumes when a desktop session
 * starts since it's not desirable to put up a lot of dialogs asking
 * for credentials.
 *
 * The callback will be fired when the operation has resolved (either
 * with success or failure), and a #GAsyncReady structure will be
 * passed to the callback.  That callback should then call
 * g_volume_mount_finish() with the #GVolume instance and the
 * #GAsyncReady data to see if the operation was completed
 * successfully.  If an @error is present when g_volume_mount_finish()
 * is called, then it will be filled with any error information.
 *
 * <para id="volume-identifier">
 * It is sometimes necessary to directly access the underlying
 * operating system object behind a volume (e.g. for passing a volume
 * to an application via the commandline). For this purpose, GIO
 * allows to obtain an 'identifier' for the volume. There can be
 * different kinds of identifiers, such as Hal UDIs, filesystem labels,
 * traditional Unix devices (e.g. <filename>/dev/sda2</filename>),
 * uuids. GIO uses predefind strings as names for the different kinds
 * of identifiers: #G_VOLUME_IDENTIFIER_KIND_HAL_UDI,
 * #G_VOLUME_IDENTIFIER_KIND_LABEL, etc. Use g_volume_get_identifier()
 * to obtain an identifier for a volume.
 * </para>
 *
 * Note that #G_VOLUME_IDENTIFIER_KIND_HAL_UDI will only be available
 * when the gvfs hal volume monitor is in use. Other volume monitors
 * will generally be able to provide the #G_VOLUME_IDENTIFIER_KIND_UNIX_DEVICE
 * identifier, which can be used to obtain a hal device by means of
 * libhal_manager_find_device_string_match().
 */


/**
 * SECTION:gvolumemonitor
 * @short_description: Volume Monitor
 * @include: gio/gio.h
 * @see_also: #GFileMonitor
 *
 * #GVolumeMonitor is for listing the user interesting devices and volumes
 * on the computer. In other words, what a file selector or file manager
 * would show in a sidebar.
 *
 * #GVolumeMonitor is not <link
 * linkend="g-main-context-push-thread-default">thread-default-context
 * aware</link>, and so should not be used other than from the main
 * thread, with no thread-default-context active.
 */


/**
 * SECTION:gwin32inputstream
 * @short_description: Streaming input operations for Windows file handles
 * @include: gio/gwin32inputstream.h
 * @see_also: #GInputStream
 *
 * #GWin32InputStream implements #GInputStream for reading from a
 * Windows file handle.
 *
 * Note that <filename>&lt;gio/gwin32inputstream.h&gt;</filename> belongs
 * to the Windows-specific GIO interfaces, thus you have to use the
 * <filename>gio-windows-2.0.pc</filename> pkg-config file when using it.
 */


/**
 * SECTION:gwin32outputstream
 * @short_description: Streaming output operations for Windows file handles
 * @include: gio/gwin32outputstream.h
 * @see_also: #GOutputStream
 *
 * #GWin32OutputStream implements #GOutputStream for writing to a
 * Windows file handle.
 *
 * Note that <filename>&lt;gio/gwin32outputstream.h&gt;</filename> belongs
 * to the Windows-specific GIO interfaces, thus you have to use the
 * <filename>gio-windows-2.0.pc</filename> pkg-config file when using it.
 */


/**
 * SECTION:gzcompressor
 * @short_description: Zlib compressor
 * @include: gio/gio.h
 *
 * #GZlibCompressor is an implementation of #GConverter that
 * compresses data using zlib.
 */


/**
 * SECTION:gzdecompressor
 * @short_description: Zlib decompressor
 * @include: gio/gio.h
 *
 * #GZlibDecompressor is an implementation of #GConverter that
 * decompresses data compressed with zlib.
 */


/**
 * _g_io_module_get_default:
 * @extension_point: the name of an extension point
 * @envvar: (allow-none): the name of an environment variable to override the default implementation.
 * @verify_func: (allow-none): a function to call to verify that a given implementation is usable in the current environment.
 *
 * Retrieves the default object implementing @extension_point.
 *
 * If @envvar is not %NULL, and the environment variable with that
 * name is set, then the implementation it specifies will be tried
 * first. After that, or if @envvar is not set, all other
 * implementations will be tried in order of decreasing priority.
 *
 * If an extension point implementation implements #GInitable, then
 * that implementation will only be used if it initializes
 * successfully. Otherwise, if @verify_func is not %NULL, then it will
 * be called on each candidate implementation after construction, to
 * check if it is actually usable or not.
 *
 * The result is cached after it is generated the first time, and
 * the function is thread-safe.
 *
 * Returns: (transfer none): an object implementing @extension_point, or %NULL if there are no usable implementations.
 */


/**
 * g_action_activate:
 * @action: a #GAction
 * @parameter: (allow-none): the parameter to the activation
 *
 * Activates the action.
 *
 * @parameter must be the correct type of parameter for the action (ie:
 * the parameter type given at construction time).  If the parameter
 * type was %NULL then @parameter must also be %NULL.
 *
 * Since: 2.28
 */


/**
 * g_action_change_state:
 * @action: a #GAction
 * @value: the new state
 *
 * Request for the state of @action to be changed to @value.
 *
 * The action must be stateful and @value must be of the correct type.
 * See g_action_get_state_type().
 *
 * This call merely requests a change.  The action may refuse to change
 * its state or may change its state to something other than @value.
 * See g_action_get_state_hint().
 *
 * If the @value GVariant is floating, it is consumed.
 *
 * Since: 2.30
 */


/**
 * g_action_get_enabled:
 * @action: a #GAction
 *
 * Checks if @action is currently enabled.
 *
 * An action must be enabled in order to be activated or in order to
 * have its state changed from outside callers.
 *
 * Returns: whether the action is enabled
 * Since: 2.28
 */


/**
 * g_action_get_name:
 * @action: a #GAction
 *
 * Queries the name of @action.
 *
 * Returns: the name of the action
 * Since: 2.28
 */


/**
 * g_action_get_parameter_type:
 * @action: a #GAction
 *
 * Queries the type of the parameter that must be given when activating
 * @action.
 *
 * When activating the action using g_action_activate(), the #GVariant
 * given to that function must be of the type returned by this function.
 *
 * In the case that this function returns %NULL, you must not give any
 * #GVariant, but %NULL instead.
 *
 * Returns: (allow-none): the parameter type
 * Since: 2.28
 */


/**
 * g_action_get_state:
 * @action: a #GAction
 *
 * Queries the current state of @action.
 *
 * If the action is not stateful then %NULL will be returned.  If the
 * action is stateful then the type of the return value is the type
 * given by g_action_get_state_type().
 *
 * The return value (if non-%NULL) should be freed with
 * g_variant_unref() when it is no longer required.
 *
 * Returns: (transfer full): the current state of the action
 * Since: 2.28
 */


/**
 * g_action_get_state_hint:
 * @action: a #GAction
 *
 * Requests a hint about the valid range of values for the state of
 * @action.
 *
 * If %NULL is returned it either means that the action is not stateful
 * or that there is no hint about the valid range of values for the
 * state of the action.
 *
 * If a #GVariant array is returned then each item in the array is a
 * possible value for the state.  If a #GVariant pair (ie: two-tuple) is
 * returned then the tuple specifies the inclusive lower and upper bound
 * of valid values for the state.
 *
 * In any case, the information is merely a hint.  It may be possible to
 * have a state value outside of the hinted range and setting a value
 * within the range may fail.
 *
 * The return value (if non-%NULL) should be freed with
 * g_variant_unref() when it is no longer required.
 *
 * Returns: (transfer full): the state range hint
 * Since: 2.28
 */


/**
 * g_action_get_state_type:
 * @action: a #GAction
 *
 * Queries the type of the state of @action.
 *
 * If the action is stateful (e.g. created with
 * g_simple_action_new_stateful()) then this function returns the
 * #GVariantType of the state.  This is the type of the initial value
 * given as the state. All calls to g_action_change_state() must give a
 * #GVariant of this type and g_action_get_state() will return a
 * #GVariant of the same type.
 *
 * If the action is not stateful (e.g. created with g_simple_action_new())
 * then this function will return %NULL. In that case, g_action_get_state()
 * will return %NULL and you must not call g_action_change_state().
 *
 * Returns: (allow-none): the state type, if the action is stateful
 * Since: 2.28
 */


/**
 * g_action_group_action_added:
 * @action_group: a #GActionGroup
 * @action_name: the name of an action in the group
 *
 * Emits the #GActionGroup::action-added signal on @action_group.
 *
 * This function should only be called by #GActionGroup implementations.
 *
 * Since: 2.28
 */


/**
 * g_action_group_action_enabled_changed:
 * @action_group: a #GActionGroup
 * @action_name: the name of an action in the group
 * @enabled: whether or not the action is now enabled
 *
 * Emits the #GActionGroup::action-enabled-changed signal on @action_group.
 *
 * This function should only be called by #GActionGroup implementations.
 *
 * Since: 2.28
 */


/**
 * g_action_group_action_removed:
 * @action_group: a #GActionGroup
 * @action_name: the name of an action in the group
 *
 * Emits the #GActionGroup::action-removed signal on @action_group.
 *
 * This function should only be called by #GActionGroup implementations.
 *
 * Since: 2.28
 */


/**
 * g_action_group_action_state_changed:
 * @action_group: a #GActionGroup
 * @action_name: the name of an action in the group
 * @state: the new state of the named action
 *
 * Emits the #GActionGroup::action-state-changed signal on @action_group.
 *
 * This function should only be called by #GActionGroup implementations.
 *
 * Since: 2.28
 */


/**
 * g_action_group_activate_action:
 * @action_group: a #GActionGroup
 * @action_name: the name of the action to activate
 * @parameter: (allow-none): parameters to the activation
 *
 * Activate the named action within @action_group.
 *
 * If the action is expecting a parameter, then the correct type of
 * parameter must be given as @parameter.  If the action is expecting no
 * parameters then @parameter must be %NULL.  See
 * g_action_group_get_action_parameter_type().
 *
 * Since: 2.28
 */


/**
 * g_action_group_change_action_state:
 * @action_group: a #GActionGroup
 * @action_name: the name of the action to request the change on
 * @value: the new state
 *
 * Request for the state of the named action within @action_group to be
 * changed to @value.
 *
 * The action must be stateful and @value must be of the correct type.
 * See g_action_group_get_action_state_type().
 *
 * This call merely requests a change.  The action may refuse to change
 * its state or may change its state to something other than @value.
 * See g_action_group_get_action_state_hint().
 *
 * If the @value GVariant is floating, it is consumed.
 *
 * Since: 2.28
 */


/**
 * g_action_group_get_action_enabled:
 * @action_group: a #GActionGroup
 * @action_name: the name of the action to query
 *
 * Checks if the named action within @action_group is currently enabled.
 *
 * An action must be enabled in order to be activated or in order to
 * have its state changed from outside callers.
 *
 * Returns: whether or not the action is currently enabled
 * Since: 2.28
 */


/**
 * g_action_group_get_action_parameter_type:
 * @action_group: a #GActionGroup
 * @action_name: the name of the action to query
 *
 * Queries the type of the parameter that must be given when activating
 * the named action within @action_group.
 *
 * When activating the action using g_action_group_activate_action(),
 * the #GVariant given to that function must be of the type returned
 * by this function.
 *
 * In the case that this function returns %NULL, you must not give any
 * #GVariant, but %NULL instead.
 *
 * The parameter type of a particular action will never change but it is
 * possible for an action to be removed and for a new action to be added
 * with the same name but a different parameter type.
 *
 * Returns: the parameter type
 * Since: 2.28
 */


/**
 * g_action_group_get_action_state:
 * @action_group: a #GActionGroup
 * @action_name: the name of the action to query
 *
 * Queries the current state of the named action within @action_group.
 *
 * If the action is not stateful then %NULL will be returned.  If the
 * action is stateful then the type of the return value is the type
 * given by g_action_group_get_action_state_type().
 *
 * The return value (if non-%NULL) should be freed with
 * g_variant_unref() when it is no longer required.
 *
 * Returns: (allow-none): the current state of the action
 * Since: 2.28
 */


/**
 * g_action_group_get_action_state_hint:
 * @action_group: a #GActionGroup
 * @action_name: the name of the action to query
 *
 * Requests a hint about the valid range of values for the state of the
 * named action within @action_group.
 *
 * If %NULL is returned it either means that the action is not stateful
 * or that there is no hint about the valid range of values for the
 * state of the action.
 *
 * If a #GVariant array is returned then each item in the array is a
 * possible value for the state.  If a #GVariant pair (ie: two-tuple) is
 * returned then the tuple specifies the inclusive lower and upper bound
 * of valid values for the state.
 *
 * In any case, the information is merely a hint.  It may be possible to
 * have a state value outside of the hinted range and setting a value
 * within the range may fail.
 *
 * The return value (if non-%NULL) should be freed with
 * g_variant_unref() when it is no longer required.
 *
 * Returns: (transfer full): the state range hint
 * Since: 2.28
 */


/**
 * g_action_group_get_action_state_type:
 * @action_group: a #GActionGroup
 * @action_name: the name of the action to query
 *
 * Queries the type of the state of the named action within
 * @action_group.
 *
 * If the action is stateful then this function returns the
 * #GVariantType of the state.  All calls to
 * g_action_group_change_action_state() must give a #GVariant of this
 * type and g_action_group_get_action_state() will return a #GVariant
 * of the same type.
 *
 * If the action is not stateful then this function will return %NULL.
 * In that case, g_action_group_get_action_state() will return %NULL
 * and you must not call g_action_group_change_action_state().
 *
 * The state type of a particular action will never change but it is
 * possible for an action to be removed and for a new action to be added
 * with the same name but a different state type.
 *
 * Returns: (transfer full): the state type, if the action is stateful
 * Since: 2.28
 */


/**
 * g_action_group_has_action:
 * @action_group: a #GActionGroup
 * @action_name: the name of the action to check for
 *
 * Checks if the named action exists within @action_group.
 *
 * Returns: whether the named action exists
 * Since: 2.28
 */


/**
 * g_action_group_list_actions:
 * @action_group: a #GActionGroup
 *
 * Lists the actions contained within @action_group.
 *
 * The caller is responsible for freeing the list with g_strfreev() when
 * it is no longer required.
 *
 * Returns: (transfer full): a %NULL-terminated array of the names of the actions in the groupb
 * Since: 2.28
 */


/**
 * g_action_group_query_action:
 * @action_group: a #GActionGroup
 * @action_name: the name of an action in the group
 * @enabled: (out): if the action is presently enabled
 * @parameter_type: (out) (allow-none): the parameter type, or %NULL if none needed
 * @state_type: (out) (allow-none): the state type, or %NULL if stateless
 * @state_hint: (out) (allow-none): the state hint, or %NULL if none
 * @state: (out) (allow-none): the current state, or %NULL if stateless
 *
 * Queries all aspects of the named action within an @action_group.
 *
 * This function acquires the information available from
 * g_action_group_has_action(), g_action_group_get_action_enabled(),
 * g_action_group_get_action_parameter_type(),
 * g_action_group_get_action_state_type(),
 * g_action_group_get_action_state_hint() and
 * g_action_group_get_action_state() with a single function call.
 *
 * This provides two main benefits.
 *
 * The first is the improvement in efficiency that comes with not having
 * to perform repeated lookups of the action in order to discover
 * different things about it.  The second is that implementing
 * #GActionGroup can now be done by only overriding this one virtual
 * function.
 *
 * The interface provides a default implementation of this function that
 * calls the individual functions, as required, to fetch the
 * information.  The interface also provides default implementations of
 * those functions that call this function.  All implementations,
 * therefore, must override either this function or all of the others.
 *
 * If the action exists, %TRUE is returned and any of the requested
 * fields (as indicated by having a non-%NULL reference passed in) are
 * filled.  If the action doesn't exist, %FALSE is returned and the
 * fields may or may not have been modified.
 *
 * Returns: %TRUE if the action exists, else %FALSE
 * Since: 2.32
 */


/**
 * g_action_map_add_action:
 * @action_map: a #GActionMap
 * @action: a #GAction
 *
 * Adds an action to the @action_map.
 *
 * If the action map already contains an action with the same name
 * as @action then the old action is dropped from the action map.
 *
 * The action map takes its own reference on @action.
 *
 * Since: 2.32
 */


/**
 * g_action_map_add_action_entries:
 * @action_map: a #GActionMap
 * @entries: a pointer to the first item in an array of #GActionEntry structs
 * @n_entries: the length of @entries, or -1 if @entries is %NULL-terminated
 * @user_data: the user data for signal connections
 *
 * A convenience function for creating multiple #GSimpleAction instances
 * and adding them to a #GActionMap.
 *
 * Each action is constructed as per one #GActionEntry.
 *
 * <example>
 * <title>Using g_action_map_add_action_entries()</title>
 * <programlisting>
 * static void
 * activate_quit (GSimpleAction *simple,
 *                GVariant      *parameter,
 *                gpointer       user_data)
 * {
 *   exit (0);
 * }
 *
 * static void
 * activate_print_string (GSimpleAction *simple,
 *                        GVariant      *parameter,
 *                        gpointer       user_data)
 * {
 *   g_print ("%s\n", g_variant_get_string (parameter, NULL));
 * }
 *
 * static GActionGroup *
 * create_action_group (void)
 * {
 *   const GActionEntry entries[] = {
 *     { "quit",         activate_quit              },
 *     { "print-string", activate_print_string, "s" }
 *   };
 *   GSimpleActionGroup *group;
 *
 *   group = g_simple_action_group_new ();
 *   g_action_map_add_action_entries (G_ACTION_MAP (group), entries, G_N_ELEMENTS (entries), NULL);
 *
 *   return G_ACTION_GROUP (group);
 * }
 * </programlisting>
 * </example>
 *
 * Since: 2.32
 */


/**
 * g_action_map_lookup_action:
 * @action_map: a #GActionMap
 * @action_name: the name of an action
 *
 * Looks up the action with the name @action_name in @action_map.
 *
 * If no such action exists, returns %NULL.
 *
 * Returns: (transfer none): a #GAction, or %NULL
 * Since: 2.32
 */


/**
 * g_action_map_remove_action:
 * @action_map: a #GActionMap
 * @action_name: the name of the action
 *
 * Removes the named action from the action map.
 *
 * If no action of this name is in the map then nothing happens.
 *
 * Since: 2.32
 */


/**
 * g_app_info_add_supports_type:
 * @appinfo: a #GAppInfo.
 * @content_type: a string.
 * @error: a #GError.
 *
 * Adds a content type to the application information to indicate the
 * application is capable of opening files with the given content type.
 *
 * Returns: %TRUE on success, %FALSE on error.
 */


/**
 * g_app_info_can_delete:
 * @appinfo: a #GAppInfo
 *
 * Obtains the information whether the #GAppInfo can be deleted.
 * See g_app_info_delete().
 *
 * Returns: %TRUE if @appinfo can be deleted
 * Since: 2.20
 */


/**
 * g_app_info_can_remove_supports_type:
 * @appinfo: a #GAppInfo.
 *
 * Checks if a supported content type can be removed from an application.
 *
 * Returns: %TRUE if it is possible to remove supported content types from a given @appinfo, %FALSE if not.
 */


/**
 * g_app_info_create_from_commandline:
 * @commandline: the commandline to use
 * @application_name: (allow-none): the application name, or %NULL to use @commandline
 * @flags: flags that can specify details of the created #GAppInfo
 * @error: a #GError location to store the error occurring, %NULL to ignore.
 *
 * Creates a new #GAppInfo from the given information.
 *
 * Returns: (transfer full): new #GAppInfo for given command.
 */


/**
 * g_app_info_delete:
 * @appinfo: a #GAppInfo
 *
 * Tries to delete a #GAppInfo.
 *
 * On some platforms, there may be a difference between user-defined
 * #GAppInfo<!-- -->s which can be deleted, and system-wide ones which
 * cannot. See g_app_info_can_delete().
 *
 * Virtual: do_delete
 * Returns: %TRUE if @appinfo has been deleted
 * Since: 2.20
 */


/**
 * g_app_info_dup:
 * @appinfo: a #GAppInfo.
 *
 * Creates a duplicate of a #GAppInfo.
 *
 * Returns: (transfer full): a duplicate of @appinfo.
 */


/**
 * g_app_info_equal:
 * @appinfo1: the first #GAppInfo.
 * @appinfo2: the second #GAppInfo.
 *
 * Checks if two #GAppInfo<!-- -->s are equal.
 *
 * Returns: %TRUE if @appinfo1 is equal to @appinfo2. %FALSE otherwise.
 */


/**
 * g_app_info_get_all:
 *
 * Gets a list of all of the applications currently registered
 * on this system.
 *
 * For desktop files, this includes applications that have
 * <literal>NoDisplay=true</literal> set or are excluded from
 * display by means of <literal>OnlyShowIn</literal> or
 * <literal>NotShowIn</literal>. See g_app_info_should_show().
 * The returned list does not include applications which have
 * the <literal>Hidden</literal> key set.
 *
 * Returns: (element-type GAppInfo) (transfer full): a newly allocated #GList of references to #GAppInfo<!---->s.
 */


/**
 * g_app_info_get_all_for_type:
 * @content_type: the content type to find a #GAppInfo for
 *
 * Gets a list of all #GAppInfos for a given content type,
 * including the recommended and fallback #GAppInfos. See
 * g_app_info_get_recommended_for_type() and
 * g_app_info_get_fallback_for_type().
 *
 * Returns: (element-type GAppInfo) (transfer full): #GList of #GAppInfos for given @content_type or %NULL on error.
 */


/**
 * g_app_info_get_commandline:
 * @appinfo: a #GAppInfo
 *
 * Gets the commandline with which the application will be
 * started.
 *
 * Returns: a string containing the @appinfo's commandline, or %NULL if this information is not available
 * Since: 2.20
 */


/**
 * g_app_info_get_default_for_type:
 * @content_type: the content type to find a #GAppInfo for
 * @must_support_uris: if %TRUE, the #GAppInfo is expected to support URIs
 *
 * Gets the default #GAppInfo for a given content type.
 *
 * Returns: (transfer full): #GAppInfo for given @content_type or %NULL on error.
 */


/**
 * g_app_info_get_default_for_uri_scheme:
 * @uri_scheme: a string containing a URI scheme.
 *
 * Gets the default application for handling URIs with
 * the given URI scheme. A URI scheme is the initial part
 * of the URI, up to but not including the ':', e.g. "http",
 * "ftp" or "sip".
 *
 * Returns: (transfer full): #GAppInfo for given @uri_scheme or %NULL on error.
 */


/**
 * g_app_info_get_description:
 * @appinfo: a #GAppInfo.
 *
 * Gets a human-readable description of an installed application.
 *
 * Returns: a string containing a description of the application @appinfo, or %NULL if none.
 */


/**
 * g_app_info_get_display_name:
 * @appinfo: a #GAppInfo.
 *
 * Gets the display name of the application. The display name is often more
 * descriptive to the user than the name itself.
 *
 * Returns: the display name of the application for @appinfo, or the name if no display name is available.
 * Since: 2.24
 */


/**
 * g_app_info_get_executable:
 * @appinfo: a #GAppInfo
 *
 * Gets the executable's name for the installed application.
 *
 * Returns: a string containing the @appinfo's application binaries name
 */


/**
 * g_app_info_get_fallback_for_type:
 * @content_type: the content type to find a #GAppInfo for
 *
 * Gets a list of fallback #GAppInfos for a given content type, i.e.
 * those applications which claim to support the given content type
 * by MIME type subclassing and not directly.
 *
 * Returns: (element-type GAppInfo) (transfer full): #GList of #GAppInfos for given @content_type or %NULL on error.
 * Since: 2.28
 */


/**
 * g_app_info_get_icon:
 * @appinfo: a #GAppInfo.
 *
 * Gets the icon for the application.
 *
 * Returns: (transfer none): the default #GIcon for @appinfo or %NULL if there is no default icon.
 */


/**
 * g_app_info_get_id:
 * @appinfo: a #GAppInfo.
 *
 * Gets the ID of an application. An id is a string that
 * identifies the application. The exact format of the id is
 * platform dependent. For instance, on Unix this is the
 * desktop file id from the xdg menu specification.
 *
 * Note that the returned ID may be %NULL, depending on how
 * the @appinfo has been constructed.
 *
 * Returns: a string containing the application's ID.
 */


/**
 * g_app_info_get_name:
 * @appinfo: a #GAppInfo.
 *
 * Gets the installed name of the application.
 *
 * Returns: the name of the application for @appinfo.
 */


/**
 * g_app_info_get_recommended_for_type:
 * @content_type: the content type to find a #GAppInfo for
 *
 * Gets a list of recommended #GAppInfos for a given content type, i.e.
 * those applications which claim to support the given content type exactly,
 * and not by MIME type subclassing.
 * Note that the first application of the list is the last used one, i.e.
 * the last one for which g_app_info_set_as_last_used_for_type() has been
 * called.
 *
 * Returns: (element-type GAppInfo) (transfer full): #GList of #GAppInfos for given @content_type or %NULL on error.
 * Since: 2.28
 */


/**
 * g_app_info_launch:
 * @appinfo: a #GAppInfo
 * @files: (element-type GFile): a #GList of #GFile objects
 * @launch_context: (allow-none): a #GAppLaunchContext or %NULL
 * @error: a #GError
 *
 * Launches the application. Passes @files to the launched application
 * as arguments, using the optional @launch_context to get information
 * about the details of the launcher (like what screen it is on).
 * On error, @error will be set accordingly.
 *
 * To launch the application without arguments pass a %NULL @files list.
 *
 * Note that even if the launch is successful the application launched
 * can fail to start if it runs into problems during startup. There is
 * no way to detect this.
 *
 * Some URIs can be changed when passed through a GFile (for instance
 * unsupported URIs with strange formats like mailto:), so if you have
 * a textual URI you want to pass in as argument, consider using
 * g_app_info_launch_uris() instead.
 *
 * The launched application inherits the environment of the launching
 * process, but it can be modified with g_app_launch_context_setenv() and
 * g_app_launch_context_unsetenv().
 *
 * On UNIX, this function sets the <envar>GIO_LAUNCHED_DESKTOP_FILE</envar>
 * environment variable with the path of the launched desktop file and
 * <envar>GIO_LAUNCHED_DESKTOP_FILE_PID</envar> to the process
 * id of the launched process. This can be used to ignore
 * <envar>GIO_LAUNCHED_DESKTOP_FILE</envar>, should it be inherited
 * by further processes. The <envar>DISPLAY</envar> and
 * <envar>DESKTOP_STARTUP_ID</envar> environment variables are also
 * set, based on information provided in @launch_context.
 *
 * Returns: %TRUE on successful launch, %FALSE otherwise.
 */


/**
 * g_app_info_launch_default_for_uri:
 * @uri: the uri to show
 * @launch_context: (allow-none): an optional #GAppLaunchContext.
 * @error: a #GError.
 *
 * Utility function that launches the default application
 * registered to handle the specified uri. Synchronous I/O
 * is done on the uri to detect the type of the file if
 * required.
 *
 * Returns: %TRUE on success, %FALSE on error.
 */


/**
 * g_app_info_launch_uris:
 * @appinfo: a #GAppInfo
 * @uris: (element-type utf8): a #GList containing URIs to launch.
 * @launch_context: (allow-none): a #GAppLaunchContext or %NULL
 * @error: a #GError
 *
 * Launches the application. This passes the @uris to the launched application
 * as arguments, using the optional @launch_context to get information
 * about the details of the launcher (like what screen it is on).
 * On error, @error will be set accordingly.
 *
 * To launch the application without arguments pass a %NULL @uris list.
 *
 * Note that even if the launch is successful the application launched
 * can fail to start if it runs into problems during startup. There is
 * no way to detect this.
 *
 * Returns: %TRUE on successful launch, %FALSE otherwise.
 */


/**
 * g_app_info_remove_supports_type:
 * @appinfo: a #GAppInfo.
 * @content_type: a string.
 * @error: a #GError.
 *
 * Removes a supported type from an application, if possible.
 *
 * Returns: %TRUE on success, %FALSE on error.
 */


/**
 * g_app_info_reset_type_associations:
 * @content_type: a content type
 *
 * Removes all changes to the type associations done by
 * g_app_info_set_as_default_for_type(),
 * g_app_info_set_as_default_for_extension(),
 * g_app_info_add_supports_type() or
 * g_app_info_remove_supports_type().
 *
 * Since: 2.20
 */


/**
 * g_app_info_set_as_default_for_extension:
 * @appinfo: a #GAppInfo.
 * @extension: a string containing the file extension (without the dot).
 * @error: a #GError.
 *
 * Sets the application as the default handler for the given file extension.
 *
 * Returns: %TRUE on success, %FALSE on error.
 */


/**
 * g_app_info_set_as_default_for_type:
 * @appinfo: a #GAppInfo.
 * @content_type: the content type.
 * @error: a #GError.
 *
 * Sets the application as the default handler for a given type.
 *
 * Returns: %TRUE on success, %FALSE on error.
 */


/**
 * g_app_info_set_as_last_used_for_type:
 * @appinfo: a #GAppInfo.
 * @content_type: the content type.
 * @error: a #GError.
 *
 * Sets the application as the last used application for a given type.
 * This will make the application appear as first in the list returned
 * by g_app_info_get_recommended_for_type(), regardless of the default
 * application for that content type.
 *
 * Returns: %TRUE on success, %FALSE on error.
 */


/**
 * g_app_info_should_show:
 * @appinfo: a #GAppInfo.
 *
 * Checks if the application info should be shown in menus that
 * list available applications.
 *
 * Returns: %TRUE if the @appinfo should be shown, %FALSE otherwise.
 */


/**
 * g_app_info_supports_files:
 * @appinfo: a #GAppInfo.
 *
 * Checks if the application accepts files as arguments.
 *
 * Returns: %TRUE if the @appinfo supports files.
 */


/**
 * g_app_info_supports_uris:
 * @appinfo: a #GAppInfo.
 *
 * Checks if the application supports reading files and directories from URIs.
 *
 * Returns: %TRUE if the @appinfo supports URIs.
 */


/**
 * g_app_launch_context_get_display:
 * @context: a #GAppLaunchContext
 * @info: a #GAppInfo
 * @files: (element-type GFile): a #GList of #GFile objects
 *
 * Gets the display string for the @context. This is used to ensure new
 * applications are started on the same display as the launching
 * application, by setting the <envar>DISPLAY</envar> environment variable.
 *
 * Returns: a display string for the display.
 */


/**
 * g_app_launch_context_get_environment:
 * @context: a #GAppLaunchContext
 *
 * Gets the complete environment variable list to be passed to
 * the child process when @context is used to launch an application.
 * This is a %NULL-terminated array of strings, where each string has
 * the form <literal>KEY=VALUE</literal>.
 *
 * Returns: (array zero-terminated=1) (transfer full): the child's environment
 * Since: 2.32
 */


/**
 * g_app_launch_context_get_startup_notify_id:
 * @context: a #GAppLaunchContext
 * @info: a #GAppInfo
 * @files: (element-type GFile): a #GList of of #GFile objects
 *
 * Initiates startup notification for the application and returns the
 * <envar>DESKTOP_STARTUP_ID</envar> for the launched operation,
 * if supported.
 *
 * Startup notification IDs are defined in the <ulink
 * url="http://standards.freedesktop.org/startup-notification-spec/startup-notification-latest.txt">
 * FreeDesktop.Org Startup Notifications standard</ulink>.
 *
 * Returns: a startup notification ID for the application, or %NULL if not supported.
 */


/**
 * g_app_launch_context_launch_failed:
 * @context: a #GAppLaunchContext.
 * @startup_notify_id: the startup notification id that was returned by g_app_launch_context_get_startup_notify_id().
 *
 * Called when an application has failed to launch, so that it can cancel
 * the application startup notification started in g_app_launch_context_get_startup_notify_id().
 */


/**
 * g_app_launch_context_new:
 *
 * Creates a new application launch context. This is not normally used,
 * instead you instantiate a subclass of this, such as #GdkAppLaunchContext.
 *
 * Returns: a #GAppLaunchContext.
 */


/**
 * g_app_launch_context_setenv:
 * @context: a #GAppLaunchContext
 * @variable: the environment variable to set
 * @value: the value for to set the variable to.
 *
 * Arranges for @variable to be set to @value in the child's
 * environment when @context is used to launch an application.
 *
 * Since: 2.32
 */


/**
 * g_app_launch_context_unsetenv:
 * @context: a #GAppLaunchContext
 * @variable: the environment variable to remove
 *
 * Arranges for @variable to be unset in the child's environment
 * when @context is used to launch an application.
 *
 * Since: 2.32
 */


/**
 * g_application_activate:
 * @application: a #GApplication
 *
 * Activates the application.
 *
 * In essence, this results in the #GApplication::activate signal being
 * emitted in the primary instance.
 *
 * The application must be registered before calling this function.
 *
 * Since: 2.28
 */


/**
 * g_application_command_line_get_arguments:
 * @cmdline: a #GApplicationCommandLine
 * @argc: (out) (allow-none): the length of the arguments array, or %NULL
 *
 * Gets the list of arguments that was passed on the command line.
 *
 * The strings in the array may contain non-utf8 data.
 *
 * The return value is %NULL-terminated and should be freed using
 * g_strfreev().
 *
 * Returns: (array length=argc) (transfer full): the string array containing the arguments (the argv)
 * Since: 2.28
 */


/**
 * g_application_command_line_get_cwd:
 * @cmdline: a #GApplicationCommandLine
 *
 * Gets the working directory of the command line invocation.
 * The string may contain non-utf8 data.
 *
 * It is possible that the remote application did not send a working
 * directory, so this may be %NULL.
 *
 * The return value should not be modified or freed and is valid for as
 * long as @cmdline exists.
 *
 * Returns: the current directory, or %NULL
 * Since: 2.28
 */


/**
 * g_application_command_line_get_environ:
 * @cmdline: a #GApplicationCommandLine
 *
 * Gets the contents of the 'environ' variable of the command line
 * invocation, as would be returned by g_get_environ(), ie as a
 * %NULL-terminated list of strings in the form 'NAME=VALUE'.
 * The strings may contain non-utf8 data.
 *
 * The remote application usually does not send an environment.  Use
 * %G_APPLICATION_SEND_ENVIRONMENT to affect that.  Even with this flag
 * set it is possible that the environment is still not available (due
 * to invocation messages from other applications).
 *
 * The return value should not be modified or freed and is valid for as
 * long as @cmdline exists.
 *
 * See g_application_command_line_getenv() if you are only interested
 * in the value of a single environment variable.
 *
 * Returns: (array zero-terminated=1) (transfer none): the environment strings, or %NULL if they were not sent
 * Since: 2.28
 */


/**
 * g_application_command_line_get_exit_status:
 * @cmdline: a #GApplicationCommandLine
 *
 * Gets the exit status of @cmdline.  See
 * g_application_command_line_set_exit_status() for more information.
 *
 * Returns: the exit status
 * Since: 2.28
 */


/**
 * g_application_command_line_get_is_remote:
 * @cmdline: a #GApplicationCommandLine
 *
 * Determines if @cmdline represents a remote invocation.
 *
 * Returns: %TRUE if the invocation was remote
 * Since: 2.28
 */


/**
 * g_application_command_line_get_platform_data:
 * @cmdline: #GApplicationCommandLine
 *
 * Gets the platform data associated with the invocation of @cmdline.
 *
 * This is a #GVariant dictionary containing information about the
 * context in which the invocation occurred.  It typically contains
 * information like the current working directory and the startup
 * notification ID.
 *
 * For local invocation, it will be %NULL.
 *
 * Returns: (allow-none): the platform data, or %NULL
 * Since: 2.28
 */


/**
 * g_application_command_line_getenv:
 * @cmdline: a #GApplicationCommandLine
 * @name: the environment variable to get
 *
 * Gets the value of a particular environment variable of the command
 * line invocation, as would be returned by g_getenv().  The strings may
 * contain non-utf8 data.
 *
 * The remote application usually does not send an environment.  Use
 * %G_APPLICATION_SEND_ENVIRONMENT to affect that.  Even with this flag
 * set it is possible that the environment is still not available (due
 * to invocation messages from other applications).
 *
 * The return value should not be modified or freed and is valid for as
 * long as @cmdline exists.
 *
 * Returns: the value of the variable, or %NULL if unset or unsent
 * Since: 2.28
 */


/**
 * g_application_command_line_print:
 * @cmdline: a #GApplicationCommandLine
 * @format: a printf-style format string
 * @...: arguments, as per @format
 *
 * Formats a message and prints it using the stdout print handler in the
 * invoking process.
 *
 * If @cmdline is a local invocation then this is exactly equivalent to
 * g_print().  If @cmdline is remote then this is equivalent to calling
 * g_print() in the invoking process.
 *
 * Since: 2.28
 */


/**
 * g_application_command_line_printerr:
 * @cmdline: a #GApplicationCommandLine
 * @format: a printf-style format string
 * @...: arguments, as per @format
 *
 * Formats a message and prints it using the stderr print handler in the
 * invoking process.
 *
 * If @cmdline is a local invocation then this is exactly equivalent to
 * g_printerr().  If @cmdline is remote then this is equivalent to
 * calling g_printerr() in the invoking process.
 *
 * Since: 2.28
 */


/**
 * g_application_command_line_set_exit_status:
 * @cmdline: a #GApplicationCommandLine
 * @exit_status: the exit status
 *
 * Sets the exit status that will be used when the invoking process
 * exits.
 *
 * The return value of the #GApplication::command-line signal is
 * passed to this function when the handler returns.  This is the usual
 * way of setting the exit status.
 *
 * In the event that you want the remote invocation to continue running
 * and want to decide on the exit status in the future, you can use this
 * call.  For the case of a remote invocation, the remote process will
 * typically exit when the last reference is dropped on @cmdline.  The
 * exit status of the remote process will be equal to the last value
 * that was set with this function.
 *
 * In the case that the commandline invocation is local, the situation
 * is slightly more complicated.  If the commandline invocation results
 * in the mainloop running (ie: because the use-count of the application
 * increased to a non-zero value) then the application is considered to
 * have been 'successful' in a certain sense, and the exit status is
 * always zero.  If the application use count is zero, though, the exit
 * status of the local #GApplicationCommandLine is used.
 *
 * Since: 2.28
 */


/**
 * g_application_get_application_id:
 * @application: a #GApplication
 *
 * Gets the unique identifier for @application.
 *
 * Returns: the identifier for @application, owned by @application
 * Since: 2.28
 */


/**
 * g_application_get_dbus_connection:
 * @application: a #GApplication
 *
 * Gets the #GDBusConnection being used by the application, or %NULL.
 *
 * If #GApplication is using its D-Bus backend then this function will
 * return the #GDBusConnection being used for uniqueness and
 * communication with the desktop environment and other instances of the
 * application.
 *
 * If #GApplication is not using D-Bus then this function will return
 * %NULL.  This includes the situation where the D-Bus backend would
 * normally be in use but we were unable to connect to the bus.
 *
 * This function must not be called before the application has been
 * registered.  See g_application_get_is_registered().
 *
 * Returns: (transfer none): a #GDBusConnection, or %NULL
 * Since: 2.34
 */


/**
 * g_application_get_dbus_object_path:
 * @application: a #GApplication
 *
 * Gets the D-Bus object path being used by the application, or %NULL.
 *
 * If #GApplication is using its D-Bus backend then this function will
 * return the D-Bus object path that #GApplication is using.  If the
 * application is the primary instance then there is an object published
 * at this path.  If the application is not the primary instance then
 * the result of this function is undefined.
 *
 * If #GApplication is not using D-Bus then this function will return
 * %NULL.  This includes the situation where the D-Bus backend would
 * normally be in use but we were unable to connect to the bus.
 *
 * This function must not be called before the application has been
 * registered.  See g_application_get_is_registered().
 *
 * Returns: the object path, or %NULL
 * Since: 2.34
 */


/**
 * g_application_get_default:
 *
 * Returns the default #GApplication instance for this process.
 *
 * Normally there is only one #GApplication per process and it becomes
 * the default when it is created.  You can exercise more control over
 * this by using g_application_set_default().
 *
 * If there is no default application then %NULL is returned.
 *
 * Returns: (transfer none): the default application for this process, or %NULL
 * Since: 2.32
 */


/**
 * g_application_get_flags:
 * @application: a #GApplication
 *
 * Gets the flags for @application.
 *
 * See #GApplicationFlags.
 *
 * Returns: the flags for @application
 * Since: 2.28
 */


/**
 * g_application_get_inactivity_timeout:
 * @application: a #GApplication
 *
 * Gets the current inactivity timeout for the application.
 *
 * This is the amount of time (in milliseconds) after the last call to
 * g_application_release() before the application stops running.
 *
 * Returns: the timeout, in milliseconds
 * Since: 2.28
 */


/**
 * g_application_get_is_registered:
 * @application: a #GApplication
 *
 * Checks if @application is registered.
 *
 * An application is registered if g_application_register() has been
 * successfully called.
 *
 * Returns: %TRUE if @application is registered
 * Since: 2.28
 */


/**
 * g_application_get_is_remote:
 * @application: a #GApplication
 *
 * Checks if @application is remote.
 *
 * If @application is remote then it means that another instance of
 * application already exists (the 'primary' instance).  Calls to
 * perform actions on @application will result in the actions being
 * performed by the primary instance.
 *
 * The value of this property cannot be accessed before
 * g_application_register() has been called.  See
 * g_application_get_is_registered().
 *
 * Returns: %TRUE if @application is remote
 * Since: 2.28
 */


/**
 * g_application_hold:
 * @application: a #GApplication
 *
 * Increases the use count of @application.
 *
 * Use this function to indicate that the application has a reason to
 * continue to run.  For example, g_application_hold() is called by GTK+
 * when a toplevel window is on the screen.
 *
 * To cancel the hold, call g_application_release().
 */


/**
 * g_application_id_is_valid:
 * @application_id: a potential application identifier
 *
 * Checks if @application_id is a valid application identifier.
 *
 * A valid ID is required for calls to g_application_new() and
 * g_application_set_application_id().
 *
 * For convenience, the restrictions on application identifiers are
 * reproduced here:
 * <itemizedlist>
 *   <listitem>Application identifiers must contain only the ASCII characters "[A-Z][a-z][0-9]_-." and must not begin with a digit.</listitem>
 *   <listitem>Application identifiers must contain at least one '.' (period) character (and thus at least three elements).</listitem>
 *   <listitem>Application identifiers must not begin or end with a '.' (period) character.</listitem>
 *   <listitem>Application identifiers must not contain consecutive '.' (period) characters.</listitem>
 *   <listitem>Application identifiers must not exceed 255 characters.</listitem>
 * </itemizedlist>
 *
 * Returns: %TRUE if @application_id is valid
 */


/**
 * g_application_new:
 * @application_id: (allow-none): the application id
 * @flags: the application flags
 *
 * Creates a new #GApplication instance.
 *
 * This function calls g_type_init() for you.
 *
 * If non-%NULL, the application id must be valid.  See
 * g_application_id_is_valid().
 *
 * If no application ID is given then some features of #GApplication
 * (most notably application uniqueness) will be disabled.
 *
 * Returns: a new #GApplication instance
 */


/**
 * g_application_open:
 * @application: a #GApplication
 * @files: (array length=n_files): an array of #GFiles to open
 * @n_files: the length of the @files array
 * @hint: a hint (or ""), but never %NULL
 *
 * Opens the given files.
 *
 * In essence, this results in the #GApplication::open signal being emitted
 * in the primary instance.
 *
 * @n_files must be greater than zero.
 *
 * @hint is simply passed through to the ::open signal.  It is
 * intended to be used by applications that have multiple modes for
 * opening files (eg: "view" vs "edit", etc).  Unless you have a need
 * for this functionality, you should use "".
 *
 * The application must be registered before calling this function
 * and it must have the %G_APPLICATION_HANDLES_OPEN flag set.
 *
 * Since: 2.28
 */


/**
 * g_application_quit:
 * @application: a #GApplication
 *
 * Immediately quits the application.
 *
 * Upon return to the mainloop, g_application_run() will return,
 * calling only the 'shutdown' function before doing so.
 *
 * The hold count is ignored.
 *
 * The result of calling g_application_run() again after it returns is
 * unspecified.
 *
 * Since: 2.32
 */


/**
 * g_application_register:
 * @application: a #GApplication
 * @cancellable: (allow-none): a #GCancellable, or %NULL
 * @error: a pointer to a NULL #GError, or %NULL
 *
 * Attempts registration of the application.
 *
 * This is the point at which the application discovers if it is the
 * primary instance or merely acting as a remote for an already-existing
 * primary instance.  This is implemented by attempting to acquire the
 * application identifier as a unique bus name on the session bus using
 * GDBus.
 *
 * If there is no application ID or if %G_APPLICATION_NON_UNIQUE was
 * given, then this process will always become the primary instance.
 *
 * Due to the internal architecture of GDBus, method calls can be
 * dispatched at any time (even if a main loop is not running).  For
 * this reason, you must ensure that any object paths that you wish to
 * register are registered before calling this function.
 *
 * If the application has already been registered then %TRUE is
 * returned with no work performed.
 *
 * The #GApplication::startup signal is emitted if registration succeeds
 * and @application is the primary instance (including the non-unique
 * case).
 *
 * In the event of an error (such as @cancellable being cancelled, or a
 * failure to connect to the session bus), %FALSE is returned and @error
 * is set appropriately.
 *
 * Note: the return value of this function is not an indicator that this
 * instance is or is not the primary instance of the application.  See
 * g_application_get_is_remote() for that.
 *
 * Returns: %TRUE if registration succeeded
 * Since: 2.28
 */


/**
 * g_application_release:
 * @application: a #GApplication
 *
 * Decrease the use count of @application.
 *
 * When the use count reaches zero, the application will stop running.
 *
 * Never call this function except to cancel the effect of a previous
 * call to g_application_hold().
 */


/**
 * g_application_run:
 * @application: a #GApplication
 * @argc: the argc from main() (or 0 if @argv is %NULL)
 * @argv: (array length=argc) (allow-none): the argv from main(), or %NULL
 *
 * Runs the application.
 *
 * This function is intended to be run from main() and its return value
 * is intended to be returned by main(). Although you are expected to pass
 * the @argc, @argv parameters from main() to this function, it is possible
 * to pass %NULL if @argv is not available or commandline handling is not
 * required.
 *
 * First, the local_command_line() virtual function is invoked.
 * This function always runs on the local instance. It gets passed a pointer
 * to a %NULL-terminated copy of @argv and is expected to remove the arguments
 * that it handled (shifting up remaining arguments). See
 * <xref linkend="gapplication-example-cmdline2"/> for an example of
 * parsing @argv manually. Alternatively, you may use the #GOptionContext API,
 * after setting <literal>argc = g_strv_length (argv);</literal>.
 *
 * The last argument to local_command_line() is a pointer to the @status
 * variable which can used to set the exit status that is returned from
 * g_application_run().
 *
 * If local_command_line() returns %TRUE, the command line is expected
 * to be completely handled, including possibly registering as the primary
 * instance, calling g_application_activate() or g_application_open(), etc.
 *
 * If local_command_line() returns %FALSE then the application is registered
 * and the #GApplication::command-line signal is emitted in the primary
 * instance (which may or may not be this instance). The signal handler
 * gets passed a #GApplicationCommandLine object that (among other things)
 * contains the remaining commandline arguments that have not been handled
 * by local_command_line().
 *
 * If the application has the %G_APPLICATION_HANDLES_COMMAND_LINE
 * flag set then the default implementation of local_command_line()
 * always returns %FALSE immediately, resulting in the commandline
 * always being handled in the primary instance.
 *
 * Otherwise, the default implementation of local_command_line() tries
 * to do a couple of things that are probably reasonable for most
 * applications.  First, g_application_register() is called to attempt
 * to register the application.  If that works, then the command line
 * arguments are inspected.  If no commandline arguments are given, then
 * g_application_activate() is called.  If commandline arguments are
 * given and the %G_APPLICATION_HANDLES_OPEN flag is set then they
 * are assumed to be filenames and g_application_open() is called.
 *
 * If you need to handle commandline arguments that are not filenames,
 * and you don't mind commandline handling to happen in the primary
 * instance, you should set %G_APPLICATION_HANDLES_COMMAND_LINE and
 * process the commandline arguments in your #GApplication::command-line
 * signal handler, either manually or using the #GOptionContext API.
 *
 * If you are interested in doing more complicated local handling of the
 * commandline then you should implement your own #GApplication subclass
 * and override local_command_line(). In this case, you most likely want
 * to return %TRUE from your local_command_line() implementation to
 * suppress the default handling. See
 * <xref linkend="gapplication-example-cmdline2"/> for an example.
 *
 * If, after the above is done, the use count of the application is zero
 * then the exit status is returned immediately.  If the use count is
 * non-zero then the default main context is iterated until the use count
 * falls to zero, at which point 0 is returned.
 *
 * If the %G_APPLICATION_IS_SERVICE flag is set, then the exiting at
 * use count of zero is delayed for a while (ie: the instance stays
 * around to provide its <emphasis>service</emphasis> to others).
 *
 * Returns: the exit status
 * Since: 2.28
 */


/**
 * g_application_set_action_group:
 * @application: a #GApplication
 * @action_group: (allow-none): a #GActionGroup, or %NULL
 *
 * This used to be how actions were associated with a #GApplication.
 * Now there is #GActionMap for that.
 *
 * Since: 2.28
 * Deprecated: 2.32:Use the #GActionMap interface instead.  Never ever mix use of this API with use of #GActionMap on the same @application or things will go very badly wrong.  This function is known to introduce buggy behaviour (ie: signals not emitted on changes to the action group), so you should really use #GActionMap instead.
 */


/**
 * g_application_set_application_id:
 * @application: a #GApplication
 * @application_id: (allow-none): the identifier for @application
 *
 * Sets the unique identifier for @application.
 *
 * The application id can only be modified if @application has not yet
 * been registered.
 *
 * If non-%NULL, the application id must be valid.  See
 * g_application_id_is_valid().
 *
 * Since: 2.28
 */


/**
 * g_application_set_default:
 * @application: (allow-none): the application to set as default, or %NULL
 *
 * Sets or unsets the default application for the process, as returned
 * by g_application_get_default().
 *
 * This function does not take its own reference on @application.  If
 * @application is destroyed then the default application will revert
 * back to %NULL.
 *
 * Since: 2.32
 */


/**
 * g_application_set_flags:
 * @application: a #GApplication
 * @flags: the flags for @application
 *
 * Sets the flags for @application.
 *
 * The flags can only be modified if @application has not yet been
 * registered.
 *
 * See #GApplicationFlags.
 *
 * Since: 2.28
 */


/**
 * g_application_set_inactivity_timeout:
 * @application: a #GApplication
 * @inactivity_timeout: the timeout, in milliseconds
 *
 * Sets the current inactivity timeout for the application.
 *
 * This is the amount of time (in milliseconds) after the last call to
 * g_application_release() before the application stops running.
 *
 * This call has no side effects of its own.  The value set here is only
 * used for next time g_application_release() drops the use count to
 * zero.  Any timeouts currently in progress are not impacted.
 *
 * Since: 2.28
 */


/**
 * g_async_initable_init_async:
 * @initable: a #GAsyncInitable.
 * @io_priority: the <link linkend="io-priority">I/O priority</link> of the operation.
 * @cancellable: optional #GCancellable object, %NULL to ignore.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied
 * @user_data: the data to pass to callback function
 *
 * Starts asynchronous initialization of the object implementing the
 * interface. This must be done before any real use of the object after
 * initial construction. If the object also implements #GInitable you can
 * optionally call g_initable_init() instead.
 *
 * When the initialization is finished, @callback will be called. You can
 * then call g_async_initable_init_finish() to get the result of the
 * initialization.
 *
 * Implementations may also support cancellation. If @cancellable is not
 * %NULL, then initialization can be cancelled by triggering the cancellable
 * object from another thread. If the operation was cancelled, the error
 * %G_IO_ERROR_CANCELLED will be returned. If @cancellable is not %NULL, and
 * the object doesn't support cancellable initialization, the error
 * %G_IO_ERROR_NOT_SUPPORTED will be returned.
 *
 * As with #GInitable, if the object is not initialized, or initialization
 * returns with an error, then all operations on the object except
 * g_object_ref() and g_object_unref() are considered to be invalid, and
 * have undefined behaviour. They will often fail with g_critical() or
 * g_warning(), but this must not be relied on.
 *
 * Implementations of this method must be idempotent: i.e. multiple calls
 * to this function with the same argument should return the same results.
 * Only the first call initializes the object; further calls return the result
 * of the first call. This is so that it's safe to implement the singleton
 * pattern in the GObject constructor function.
 *
 * For classes that also support the #GInitable interface, the default
 * implementation of this method will run the g_initable_init() function
 * in a thread, so if you want to support asynchronous initialization via
 * threads, just implement the #GAsyncInitable interface without overriding
 * any interface methods.
 *
 * Since: 2.22
 */


/**
 * g_async_initable_init_finish:
 * @initable: a #GAsyncInitable.
 * @res: a #GAsyncResult.
 * @error: a #GError location to store the error occurring, or %NULL to ignore.
 *
 * Finishes asynchronous initialization and returns the result.
 * See g_async_initable_init_async().
 *
 * Returns: %TRUE if successful. If an error has occurred, this function will return %FALSE and set @error appropriately if present.
 * Since: 2.22
 */


/**
 * g_async_initable_new_async:
 * @object_type: a #GType supporting #GAsyncInitable.
 * @io_priority: the <link linkend="io-priority">I/O priority</link> of the operation.
 * @cancellable: optional #GCancellable object, %NULL to ignore.
 * @callback: a #GAsyncReadyCallback to call when the initialization is finished
 * @user_data: the data to pass to callback function
 * @first_property_name: (allow-none): the name of the first property, or %NULL if no properties
 * @...: the value of the first property, followed by other property value pairs, and ended by %NULL.
 *
 * Helper function for constructing #GAsyncInitable object. This is
 * similar to g_object_new() but also initializes the object asynchronously.
 *
 * When the initialization is finished, @callback will be called. You can
 * then call g_async_initable_new_finish() to get the new object and check
 * for any errors.
 *
 * Since: 2.22
 */


/**
 * g_async_initable_new_finish:
 * @initable: the #GAsyncInitable from the callback
 * @res: the #GAsyncResult from the callback
 * @error: return location for errors, or %NULL to ignore
 *
 * Finishes the async construction for the various g_async_initable_new
 * calls, returning the created object or %NULL on error.
 *
 * Returns: (transfer full): a newly created #GObject, or %NULL on error. Free with g_object_unref().
 * Since: 2.22
 */


/**
 * g_async_initable_new_valist_async:
 * @object_type: a #GType supporting #GAsyncInitable.
 * @first_property_name: the name of the first property, followed by the value, and other property value pairs, and ended by %NULL.
 * @var_args: The var args list generated from @first_property_name.
 * @io_priority: the <link linkend="io-priority">I/O priority</link> of the operation.
 * @cancellable: optional #GCancellable object, %NULL to ignore.
 * @callback: a #GAsyncReadyCallback to call when the initialization is finished
 * @user_data: the data to pass to callback function
 *
 * Helper function for constructing #GAsyncInitable object. This is
 * similar to g_object_new_valist() but also initializes the object
 * asynchronously.
 *
 * When the initialization is finished, @callback will be called. You can
 * then call g_async_initable_new_finish() to get the new object and check
 * for any errors.
 *
 * Since: 2.22
 */


/**
 * g_async_initable_newv_async:
 * @object_type: a #GType supporting #GAsyncInitable.
 * @n_parameters: the number of parameters in @parameters
 * @parameters: the parameters to use to construct the object
 * @io_priority: the <link linkend="io-priority">I/O priority</link> of the operation.
 * @cancellable: optional #GCancellable object, %NULL to ignore.
 * @callback: a #GAsyncReadyCallback to call when the initialization is finished
 * @user_data: the data to pass to callback function
 *
 * Helper function for constructing #GAsyncInitable object. This is
 * similar to g_object_newv() but also initializes the object asynchronously.
 *
 * When the initialization is finished, @callback will be called. You can
 * then call g_async_initable_new_finish() to get the new object and check
 * for any errors.
 *
 * Since: 2.22
 */


/**
 * g_async_result_get_source_object:
 * @res: a #GAsyncResult
 *
 * Gets the source object from a #GAsyncResult.
 *
 * Returns: (transfer full): a new reference to the source object for the @res, or %NULL if there is none.
 */


/**
 * g_async_result_get_user_data:
 * @res: a #GAsyncResult.
 *
 * Gets the user data from a #GAsyncResult.
 *
 * Returns: (transfer full): the user data for @res.
 */


/**
 * g_buffered_input_stream_fill:
 * @stream: a #GBufferedInputStream
 * @count: the number of bytes that will be read from the stream
 * @cancellable: (allow-none): optional #GCancellable object, %NULL to ignore
 * @error: location to store the error occurring, or %NULL to ignore
 *
 * Tries to read @count bytes from the stream into the buffer.
 * Will block during this read.
 *
 * If @count is zero, returns zero and does nothing. A value of @count
 * larger than %G_MAXSSIZE will cause a %G_IO_ERROR_INVALID_ARGUMENT error.
 *
 * On success, the number of bytes read into the buffer is returned.
 * It is not an error if this is not the same as the requested size, as it
 * can happen e.g. near the end of a file. Zero is returned on end of file
 * (or if @count is zero),  but never otherwise.
 *
 * If @count is -1 then the attempted read size is equal to the number of
 * bytes that are required to fill the buffer.
 *
 * If @cancellable is not %NULL, then the operation can be cancelled by
 * triggering the cancellable object from another thread. If the operation
 * was cancelled, the error %G_IO_ERROR_CANCELLED will be returned. If an
 * operation was partially finished when the operation was cancelled the
 * partial result will be returned, without an error.
 *
 * On error -1 is returned and @error is set accordingly.
 *
 * For the asynchronous, non-blocking, version of this function, see
 * g_buffered_input_stream_fill_async().
 *
 * Returns: the number of bytes read into @stream's buffer, up to @count, or -1 on error.
 */


/**
 * g_buffered_input_stream_fill_async:
 * @stream: a #GBufferedInputStream
 * @count: the number of bytes that will be read from the stream
 * @io_priority: the <link linkend="io-priority">I/O priority</link> of the request
 * @cancellable: (allow-none): optional #GCancellable object
 * @callback: (scope async): a #GAsyncReadyCallback
 * @user_data: (closure): a #gpointer
 *
 * Reads data into @stream's buffer asynchronously, up to @count size.
 * @io_priority can be used to prioritize reads. For the synchronous
 * version of this function, see g_buffered_input_stream_fill().
 *
 * If @count is -1 then the attempted read size is equal to the number
 * of bytes that are required to fill the buffer.
 */


/**
 * g_buffered_input_stream_fill_finish:
 * @stream: a #GBufferedInputStream
 * @result: a #GAsyncResult
 * @error: a #GError
 *
 * Finishes an asynchronous read.
 *
 * Returns: a #gssize of the read stream, or %-1 on an error.
 */


/**
 * g_buffered_input_stream_get_available:
 * @stream: #GBufferedInputStream
 *
 * Gets the size of the available data within the stream.
 *
 * Returns: size of the available stream.
 */


/**
 * g_buffered_input_stream_get_buffer_size:
 * @stream: a #GBufferedInputStream
 *
 * Gets the size of the input buffer.
 *
 * Returns: the current buffer size.
 */


/**
 * g_buffered_input_stream_new:
 * @base_stream: a #GInputStream
 *
 * Creates a new #GInputStream from the given @base_stream, with
 * a buffer set to the default size (4 kilobytes).
 *
 * Returns: a #GInputStream for the given @base_stream.
 */


/**
 * g_buffered_input_stream_new_sized:
 * @base_stream: a #GInputStream
 * @size: a #gsize
 *
 * Creates a new #GBufferedInputStream from the given @base_stream,
 * with a buffer set to @size.
 *
 * Returns: a #GInputStream.
 */


/**
 * g_buffered_input_stream_peek:
 * @stream: a #GBufferedInputStream
 * @buffer: (array length=count) (element-type guint8): a pointer to an allocated chunk of memory
 * @offset: a #gsize
 * @count: a #gsize
 *
 * Peeks in the buffer, copying data of size @count into @buffer,
 * offset @offset bytes.
 *
 * Returns: a #gsize of the number of bytes peeked, or -1 on error.
 */


/**
 * g_buffered_input_stream_peek_buffer:
 * @stream: a #GBufferedInputStream
 * @count: (out): a #gsize to get the number of bytes available in the buffer
 *
 * Returns the buffer with the currently available bytes. The returned
 * buffer must not be modified and will become invalid when reading from
 * the stream or filling the buffer.
 *
 * Returns: (array length=count) (element-type guint8) (transfer none): read-only buffer
 */


/**
 * g_buffered_input_stream_read_byte:
 * @stream: a #GBufferedInputStream
 * @cancellable: (allow-none): optional #GCancellable object, %NULL to ignore
 * @error: location to store the error occurring, or %NULL to ignore
 *
 * Tries to read a single byte from the stream or the buffer. Will block
 * during this read.
 *
 * On success, the byte read from the stream is returned. On end of stream
 * -1 is returned but it's not an exceptional error and @error is not set.
 *
 * If @cancellable is not %NULL, then the operation can be cancelled by
 * triggering the cancellable object from another thread. If the operation
 * was cancelled, the error %G_IO_ERROR_CANCELLED will be returned. If an
 * operation was partially finished when the operation was cancelled the
 * partial result will be returned, without an error.
 *
 * On error -1 is returned and @error is set accordingly.
 *
 * Returns: the byte read from the @stream, or -1 on end of stream or error.
 */


/**
 * g_buffered_input_stream_set_buffer_size:
 * @stream: a #GBufferedInputStream
 * @size: a #gsize
 *
 * Sets the size of the internal buffer of @stream to @size, or to the
 * size of the contents of the buffer. The buffer can never be resized
 * smaller than its current contents.
 */


/**
 * g_buffered_output_stream_get_auto_grow:
 * @stream: a #GBufferedOutputStream.
 *
 * Checks if the buffer automatically grows as data is added.
 *
 * Returns: %TRUE if the @stream's buffer automatically grows, %FALSE otherwise.
 */


/**
 * g_buffered_output_stream_get_buffer_size:
 * @stream: a #GBufferedOutputStream.
 *
 * Gets the size of the buffer in the @stream.
 *
 * Returns: the current size of the buffer.
 */


/**
 * g_buffered_output_stream_new:
 * @base_stream: a #GOutputStream.
 *
 * Creates a new buffered output stream for a base stream.
 *
 * Returns: a #GOutputStream for the given @base_stream.
 */


/**
 * g_buffered_output_stream_new_sized:
 * @base_stream: a #GOutputStream.
 * @size: a #gsize.
 *
 * Creates a new buffered output stream with a given buffer size.
 *
 * Returns: a #GOutputStream with an internal buffer set to @size.
 */


/**
 * g_buffered_output_stream_set_auto_grow:
 * @stream: a #GBufferedOutputStream.
 * @auto_grow: a #gboolean.
 *
 * Sets whether or not the @stream's buffer should automatically grow.
 * If @auto_grow is true, then each write will just make the buffer
 * larger, and you must manually flush the buffer to actually write out
 * the data to the underlying stream.
 */


/**
 * g_buffered_output_stream_set_buffer_size:
 * @stream: a #GBufferedOutputStream.
 * @size: a #gsize.
 *
 * Sets the size of the internal buffer to @size.
 */


/**
 * g_bus_get:
 * @bus_type: A #GBusType.
 * @cancellable: (allow-none): A #GCancellable or %NULL.
 * @callback: A #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: The data to pass to @callback.
 *
 * Asynchronously connects to the message bus specified by @bus_type.
 *
 * When the operation is finished, @callback will be invoked. You can
 * then call g_bus_get_finish() to get the result of the operation.
 *
 * This is a asynchronous failable function. See g_bus_get_sync() for
 * the synchronous version.
 *
 * Since: 2.26
 */


/**
 * g_bus_get_finish:
 * @res: A #GAsyncResult obtained from the #GAsyncReadyCallback passed to g_bus_get().
 * @error: Return location for error or %NULL.
 *
 * Finishes an operation started with g_bus_get().
 *
 * The returned object is a singleton, that is, shared with other
 * callers of g_bus_get() and g_bus_get_sync() for @bus_type. In the
 * event that you need a private message bus connection, use
 * g_dbus_address_get_for_bus_sync() and
 * g_dbus_connection_new_for_address().
 *
 * Note that the returned #GDBusConnection object will (usually) have
 * the #GDBusConnection:exit-on-close property set to %TRUE.
 *
 * Returns: (transfer full): A #GDBusConnection or %NULL if @error is set. Free with g_object_unref().
 * Since: 2.26
 */


/**
 * g_bus_get_sync:
 * @bus_type: A #GBusType.
 * @cancellable: (allow-none): A #GCancellable or %NULL.
 * @error: Return location for error or %NULL.
 *
 * Synchronously connects to the message bus specified by @bus_type.
 * Note that the returned object may shared with other callers,
 * e.g. if two separate parts of a process calls this function with
 * the same @bus_type, they will share the same object.
 *
 * This is a synchronous failable function. See g_bus_get() and
 * g_bus_get_finish() for the asynchronous version.
 *
 * The returned object is a singleton, that is, shared with other
 * callers of g_bus_get() and g_bus_get_sync() for @bus_type. In the
 * event that you need a private message bus connection, use
 * g_dbus_address_get_for_bus_sync() and
 * g_dbus_connection_new_for_address().
 *
 * Note that the returned #GDBusConnection object will (usually) have
 * the #GDBusConnection:exit-on-close property set to %TRUE.
 *
 * Returns: (transfer full): A #GDBusConnection or %NULL if @error is set. Free with g_object_unref().
 * Since: 2.26
 */


/**
 * g_bus_own_name:
 * @bus_type: The type of bus to own a name on.
 * @name: The well-known name to own.
 * @flags: A set of flags from the #GBusNameOwnerFlags enumeration.
 * @bus_acquired_handler: (allow-none): Handler to invoke when connected to the bus of type @bus_type or %NULL.
 * @name_acquired_handler: (allow-none): Handler to invoke when @name is acquired or %NULL.
 * @name_lost_handler: (allow-none): Handler to invoke when @name is lost or %NULL.
 * @user_data: User data to pass to handlers.
 * @user_data_free_func: (allow-none): Function for freeing @user_data or %NULL.
 *
 * Starts acquiring @name on the bus specified by @bus_type and calls
 * @name_acquired_handler and @name_lost_handler when the name is
 * acquired respectively lost. Callbacks will be invoked in the <link
 * linkend="g-main-context-push-thread-default">thread-default main
 * loop</link> of the thread you are calling this function from.
 *
 * You are guaranteed that one of the @name_acquired_handler and @name_lost_handler
 * callbacks will be invoked after calling this function - there are three
 * possible cases:
 * <itemizedlist>
 *   <listitem><para>
 *     @name_lost_handler with a %NULL connection (if a connection to the bus can't be made).
 *   </para></listitem>
 *   <listitem><para>
 *     @bus_acquired_handler then @name_lost_handler (if the name can't be obtained)
 *   </para></listitem>
 *   <listitem><para>
 *     @bus_acquired_handler then @name_acquired_handler (if the name was obtained).
 *   </para></listitem>
 * </itemizedlist>
 * When you are done owning the name, just call g_bus_unown_name()
 * with the owner id this function returns.
 *
 * If the name is acquired or lost (for example another application
 * could acquire the name if you allow replacement or the application
 * currently owning the name exits), the handlers are also invoked. If the
 * #GDBusConnection that is used for attempting to own the name
 * closes, then @name_lost_handler is invoked since it is no
 * longer possible for other processes to access the process.
 *
 * You cannot use g_bus_own_name() several times for the same name (unless
 * interleaved with calls to g_bus_unown_name()) - only the first call
 * will work.
 *
 * Another guarantee is that invocations of @name_acquired_handler
 * and @name_lost_handler are guaranteed to alternate; that
 * is, if @name_acquired_handler is invoked then you are
 * guaranteed that the next time one of the handlers is invoked, it
 * will be @name_lost_handler. The reverse is also true.
 *
 * If you plan on exporting objects (using e.g.
 * g_dbus_connection_register_object()), note that it is generally too late
 * to export the objects in @name_acquired_handler. Instead, you can do this
 * in @bus_acquired_handler since you are guaranteed that this will run
 * before @name is requested from the bus.
 *
 * This behavior makes it very simple to write applications that wants
 * to own names and export objects, see <xref linkend="gdbus-owning-names"/>.
 * Simply register objects to be exported in @bus_acquired_handler and
 * unregister the objects (if any) in @name_lost_handler.
 *
 * Returns: An identifier (never 0) that an be used with g_bus_unown_name() to stop owning the name.
 * Since: 2.26
 */


/**
 * g_bus_own_name_on_connection:
 * @connection: A #GDBusConnection.
 * @name: The well-known name to own.
 * @flags: A set of flags from the #GBusNameOwnerFlags enumeration.
 * @name_acquired_handler: (allow-none): Handler to invoke when @name is acquired or %NULL.
 * @name_lost_handler: (allow-none): Handler to invoke when @name is lost or %NULL.
 * @user_data: User data to pass to handlers.
 * @user_data_free_func: (allow-none): Function for freeing @user_data or %NULL.
 *
 * Like g_bus_own_name() but takes a #GDBusConnection instead of a
 * #GBusType.
 *
 * Returns: An identifier (never 0) that an be used with g_bus_unown_name() to stop owning the name.
 * Since: 2.26
 */


/**
 * g_bus_own_name_on_connection_with_closures:
 * @connection: A #GDBusConnection.
 * @name: The well-known name to own.
 * @flags: A set of flags from the #GBusNameOwnerFlags enumeration.
 * @name_acquired_closure: (allow-none): #GClosure to invoke when @name is acquired or %NULL.
 * @name_lost_closure: (allow-none): #GClosure to invoke when @name is lost or %NULL.
 *
 * Version of g_bus_own_name_on_connection() using closures instead of callbacks for
 * easier binding in other languages.
 *
 * Returns: An identifier (never 0) that an be used with g_bus_unown_name() to stop owning the name.
 * Rename to: g_bus_own_name_on_connection
 * Since: 2.26
 */


/**
 * g_bus_own_name_with_closures:
 * @bus_type: The type of bus to own a name on.
 * @name: The well-known name to own.
 * @flags: A set of flags from the #GBusNameOwnerFlags enumeration.
 * @bus_acquired_closure: (allow-none): #GClosure to invoke when connected to the bus of type @bus_type or %NULL.
 * @name_acquired_closure: (allow-none): #GClosure to invoke when @name is acquired or %NULL.
 * @name_lost_closure: (allow-none): #GClosure to invoke when @name is lost or %NULL.
 *
 * Version of g_bus_own_name() using closures instead of callbacks for
 * easier binding in other languages.
 *
 * Returns: An identifier (never 0) that an be used with g_bus_unown_name() to stop owning the name.
 * Rename to: g_bus_own_name
 * Since: 2.26
 */


/**
 * g_bus_unown_name:
 * @owner_id: An identifier obtained from g_bus_own_name()
 *
 * Stops owning a name.
 *
 * Since: 2.26
 */


/**
 * g_bus_unwatch_name:
 * @watcher_id: An identifier obtained from g_bus_watch_name()
 *
 * Stops watching a name.
 *
 * Since: 2.26
 */


/**
 * g_bus_watch_name:
 * @bus_type: The type of bus to watch a name on.
 * @name: The name (well-known or unique) to watch.
 * @flags: Flags from the #GBusNameWatcherFlags enumeration.
 * @name_appeared_handler: (allow-none): Handler to invoke when @name is known to exist or %NULL.
 * @name_vanished_handler: (allow-none): Handler to invoke when @name is known to not exist or %NULL.
 * @user_data: User data to pass to handlers.
 * @user_data_free_func: (allow-none): Function for freeing @user_data or %NULL.
 *
 * Starts watching @name on the bus specified by @bus_type and calls
 * @name_appeared_handler and @name_vanished_handler when the name is
 * known to have a owner respectively known to lose its
 * owner. Callbacks will be invoked in the <link
 * linkend="g-main-context-push-thread-default">thread-default main
 * loop</link> of the thread you are calling this function from.
 *
 * You are guaranteed that one of the handlers will be invoked after
 * calling this function. When you are done watching the name, just
 * call g_bus_unwatch_name() with the watcher id this function
 * returns.
 *
 * If the name vanishes or appears (for example the application owning
 * the name could restart), the handlers are also invoked. If the
 * #GDBusConnection that is used for watching the name disconnects, then
 * @name_vanished_handler is invoked since it is no longer
 * possible to access the name.
 *
 * Another guarantee is that invocations of @name_appeared_handler
 * and @name_vanished_handler are guaranteed to alternate; that
 * is, if @name_appeared_handler is invoked then you are
 * guaranteed that the next time one of the handlers is invoked, it
 * will be @name_vanished_handler. The reverse is also true.
 *
 * This behavior makes it very simple to write applications that wants
 * to take action when a certain name exists, see <xref
 * linkend="gdbus-watching-names"/>. Basically, the application
 * should create object proxies in @name_appeared_handler and destroy
 * them again (if any) in @name_vanished_handler.
 *
 * Returns: An identifier (never 0) that an be used with g_bus_unwatch_name() to stop watching the name.
 * Since: 2.26
 */


/**
 * g_bus_watch_name_on_connection:
 * @connection: A #GDBusConnection.
 * @name: The name (well-known or unique) to watch.
 * @flags: Flags from the #GBusNameWatcherFlags enumeration.
 * @name_appeared_handler: (allow-none): Handler to invoke when @name is known to exist or %NULL.
 * @name_vanished_handler: (allow-none): Handler to invoke when @name is known to not exist or %NULL.
 * @user_data: User data to pass to handlers.
 * @user_data_free_func: (allow-none): Function for freeing @user_data or %NULL.
 *
 * Like g_bus_watch_name() but takes a #GDBusConnection instead of a
 * #GBusType.
 *
 * Returns: An identifier (never 0) that an be used with g_bus_unwatch_name() to stop watching the name.
 * Since: 2.26
 */


/**
 * g_bus_watch_name_on_connection_with_closures:
 * @connection: A #GDBusConnection.
 * @name: The name (well-known or unique) to watch.
 * @flags: Flags from the #GBusNameWatcherFlags enumeration.
 * @name_appeared_closure: (allow-none): #GClosure to invoke when @name is known to exist or %NULL.
 * @name_vanished_closure: (allow-none): #GClosure to invoke when @name is known to not exist or %NULL.
 *
 * Version of g_bus_watch_name_on_connection() using closures instead of callbacks for
 * easier binding in other languages.
 *
 * Returns: An identifier (never 0) that an be used with g_bus_unwatch_name() to stop watching the name.
 * Rename to: g_bus_watch_name_on_connection
 * Since: 2.26
 */


/**
 * g_bus_watch_name_with_closures:
 * @bus_type: The type of bus to watch a name on.
 * @name: The name (well-known or unique) to watch.
 * @flags: Flags from the #GBusNameWatcherFlags enumeration.
 * @name_appeared_closure: (allow-none): #GClosure to invoke when @name is known to exist or %NULL.
 * @name_vanished_closure: (allow-none): #GClosure to invoke when @name is known to not exist or %NULL.
 *
 * Version of g_bus_watch_name() using closures instead of callbacks for
 * easier binding in other languages.
 *
 * Returns: An identifier (never 0) that an be used with g_bus_unwatch_name() to stop watching the name.
 * Rename to: g_bus_watch_name
 * Since: 2.26
 */


/**
 * g_cancellable_cancel:
 * @cancellable: a #GCancellable object.
 *
 * Will set @cancellable to cancelled, and will emit the
 * #GCancellable::cancelled signal. (However, see the warning about
 * race conditions in the documentation for that signal if you are
 * planning to connect to it.)
 *
 * This function is thread-safe. In other words, you can safely call
 * it from a thread other than the one running the operation that was
 * passed the @cancellable.
 *
 * The convention within gio is that cancelling an asynchronous
 * operation causes it to complete asynchronously. That is, if you
 * cancel the operation from the same thread in which it is running,
 * then the operation's #GAsyncReadyCallback will not be invoked until
 * the application returns to the main loop.
 */


/**
 * g_cancellable_connect:
 * @cancellable: A #GCancellable.
 * @callback: The #GCallback to connect.
 * @data: Data to pass to @callback.
 * @data_destroy_func: (allow-none): Free function for @data or %NULL.
 *
 * Convenience function to connect to the #GCancellable::cancelled
 * signal. Also handles the race condition that may happen
 * if the cancellable is cancelled right before connecting.
 *
 * @callback is called at most once, either directly at the
 * time of the connect if @cancellable is already cancelled,
 * or when @cancellable is cancelled in some thread.
 *
 * @data_destroy_func will be called when the handler is
 * disconnected, or immediately if the cancellable is already
 * cancelled.
 *
 * See #GCancellable::cancelled for details on how to use this.
 *
 * Returns: The id of the signal handler or 0 if @cancellable has already been cancelled.
 * Since: 2.22
 */


/**
 * g_cancellable_disconnect:
 * @cancellable: (allow-none): A #GCancellable or %NULL.
 * @handler_id: Handler id of the handler to be disconnected, or %0.
 *
 * Disconnects a handler from a cancellable instance similar to
 * g_signal_handler_disconnect().  Additionally, in the event that a
 * signal handler is currently running, this call will block until the
 * handler has finished.  Calling this function from a
 * #GCancellable::cancelled signal handler will therefore result in a
 * deadlock.
 *
 * This avoids a race condition where a thread cancels at the
 * same time as the cancellable operation is finished and the
 * signal handler is removed. See #GCancellable::cancelled for
 * details on how to use this.
 *
 * If @cancellable is %NULL or @handler_id is %0 this function does
 * nothing.
 *
 * Since: 2.22
 */


/**
 * g_cancellable_get_current:
 *
 * Gets the top cancellable from the stack.
 *
 * Returns: (transfer none): a #GCancellable from the top of the stack, or %NULL if the stack is empty.
 */


/**
 * g_cancellable_get_fd:
 * @cancellable: a #GCancellable.
 *
 * Gets the file descriptor for a cancellable job. This can be used to
 * implement cancellable operations on Unix systems. The returned fd will
 * turn readable when @cancellable is cancelled.
 *
 * You are not supposed to read from the fd yourself, just check for
 * readable status. Reading to unset the readable status is done
 * with g_cancellable_reset().
 *
 * After a successful return from this function, you should use
 * g_cancellable_release_fd() to free up resources allocated for
 * the returned file descriptor.
 *
 * See also g_cancellable_make_pollfd().
 *
 * Returns: A valid file descriptor. %-1 if the file descriptor is not supported, or on errors.
 */


/**
 * g_cancellable_is_cancelled:
 * @cancellable: (allow-none): a #GCancellable or %NULL
 *
 * Checks if a cancellable job has been cancelled.
 *
 * Returns: %TRUE if @cancellable is cancelled, FALSE if called with %NULL or if item is not cancelled.
 */


/**
 * g_cancellable_make_pollfd:
 * @cancellable: (allow-none): a #GCancellable or %NULL
 * @pollfd: a pointer to a #GPollFD
 *
 * Creates a #GPollFD corresponding to @cancellable; this can be passed
 * to g_poll() and used to poll for cancellation. This is useful both
 * for unix systems without a native poll and for portability to
 * windows.
 *
 * When this function returns %TRUE, you should use
 * g_cancellable_release_fd() to free up resources allocated for the
 * @pollfd. After a %FALSE return, do not call g_cancellable_release_fd().
 *
 * If this function returns %FALSE, either no @cancellable was given or
 * resource limits prevent this function from allocating the necessary
 * structures for polling. (On Linux, you will likely have reached
 * the maximum number of file descriptors.) The suggested way to handle
 * these cases is to ignore the @cancellable.
 *
 * You are not supposed to read from the fd yourself, just check for
 * readable status. Reading to unset the readable status is done
 * with g_cancellable_reset().
 *
 * Returns: %TRUE if @pollfd was successfully initialized, %FALSE on failure to prepare the cancellable.
 * Since: 2.22
 */


/**
 * g_cancellable_new:
 *
 * Creates a new #GCancellable object.
 *
 * Applications that want to start one or more operations
 * that should be cancellable should create a #GCancellable
 * and pass it to the operations.
 *
 * One #GCancellable can be used in multiple consecutive
 * operations or in multiple concurrent operations.
 *
 * Returns: a #GCancellable.
 */


/**
 * g_cancellable_pop_current:
 * @cancellable: a #GCancellable object
 *
 * Pops @cancellable off the cancellable stack (verifying that @cancellable
 * is on the top of the stack).
 */


/**
 * g_cancellable_push_current:
 * @cancellable: a #GCancellable object
 *
 * Pushes @cancellable onto the cancellable stack. The current
 * cancellable can then be received using g_cancellable_get_current().
 *
 * This is useful when implementing cancellable operations in
 * code that does not allow you to pass down the cancellable object.
 *
 * This is typically called automatically by e.g. #GFile operations,
 * so you rarely have to call this yourself.
 */


/**
 * g_cancellable_release_fd:
 * @cancellable: a #GCancellable
 *
 * Releases a resources previously allocated by g_cancellable_get_fd()
 * or g_cancellable_make_pollfd().
 *
 * For compatibility reasons with older releases, calling this function
 * is not strictly required, the resources will be automatically freed
 * when the @cancellable is finalized. However, the @cancellable will
 * block scarce file descriptors until it is finalized if this function
 * is not called. This can cause the application to run out of file
 * descriptors when many #GCancellables are used at the same time.
 *
 * Since: 2.22
 */


/**
 * g_cancellable_reset:
 * @cancellable: a #GCancellable object.
 *
 * Resets @cancellable to its uncancelled state.
 *
 * If cancellable is currently in use by any cancellable operation
 * then the behavior of this function is undefined.
 */


/**
 * g_cancellable_set_error_if_cancelled:
 * @cancellable: (allow-none): a #GCancellable or %NULL
 * @error: #GError to append error state to
 *
 * If the @cancellable is cancelled, sets the error to notify
 * that the operation was cancelled.
 *
 * Returns: %TRUE if @cancellable was cancelled, %FALSE if it was not
 */


/**
 * g_cancellable_source_new: (skip)
 * @cancellable: (allow-none): a #GCancellable, or %NULL
 *
 * Creates a source that triggers if @cancellable is cancelled and
 * calls its callback of type #GCancellableSourceFunc. This is
 * primarily useful for attaching to another (non-cancellable) source
 * with g_source_add_child_source() to add cancellability to it.
 *
 * For convenience, you can call this with a %NULL #GCancellable,
 * in which case the source will never trigger.
 *
 * Returns: (transfer full): the new #GSource.
 * Since: 2.28
 */


/**
 * g_charset_converter_get_num_fallbacks:
 * @converter: a #GCharsetConverter
 *
 * Gets the number of fallbacks that @converter has applied so far.
 *
 * Returns: the number of fallbacks that @converter has applied
 * Since: 2.24
 */


/**
 * g_charset_converter_get_use_fallback:
 * @converter: a #GCharsetConverter
 *
 * Gets the #GCharsetConverter:use-fallback property.
 *
 * Returns: %TRUE if fallbacks are used by @converter
 * Since: 2.24
 */


/**
 * g_charset_converter_new:
 * @to_charset: destination charset
 * @from_charset: source charset
 * @error: #GError for error reporting, or %NULL to ignore.
 *
 * Creates a new #GCharsetConverter.
 *
 * Returns: a new #GCharsetConverter or %NULL on error.
 * Since: 2.24
 */


/**
 * g_charset_converter_set_use_fallback:
 * @converter: a #GCharsetConverter
 * @use_fallback: %TRUE to use fallbacks
 *
 * Sets the #GCharsetConverter:use-fallback property.
 *
 * Since: 2.24
 */


/**
 * g_content_type_can_be_executable:
 * @type: a content type string
 *
 * Checks if a content type can be executable. Note that for instance
 * things like text files can be executables (i.e. scripts and batch files).
 *
 * Returns: %TRUE if the file type corresponds to a type that can be executable, %FALSE otherwise.
 */


/**
 * g_content_type_equals:
 * @type1: a content type string
 * @type2: a content type string
 *
 * Compares two content types for equality.
 *
 * Returns: %TRUE if the two strings are identical or equivalent, %FALSE otherwise.
 */


/**
 * g_content_type_from_mime_type:
 * @mime_type: a mime type string
 *
 * Tries to find a content type based on the mime type name.
 *
 * Returns: (allow-none): Newly allocated string with content type or %NULL. Free with g_free()
 * Since: 2.18
 */


/**
 * g_content_type_get_description:
 * @type: a content type string
 *
 * Gets the human readable description of the content type.
 *
 * Returns: a short description of the content type @type. Free the returned string with g_free()
 */


/**
 * g_content_type_get_icon:
 * @type: a content type string
 *
 * Gets the icon for a content type.
 *
 * Returns: (transfer full): #GIcon corresponding to the content type. Free the returned object with g_object_unref()
 */


/**
 * g_content_type_get_mime_type:
 * @type: a content type string
 *
 * Gets the mime type for the content type, if one is registered.
 *
 * Returns: (allow-none): the registered mime type for the given @type, or %NULL if unknown.
 */


/**
 * g_content_type_guess:
 * @filename: (allow-none): a string, or %NULL
 * @data: (allow-none) (array length=data_size): a stream of data, or %NULL
 * @data_size: the size of @data
 * @result_uncertain: (allow-none) (out): return location for the certainty of the result, or %NULL
 *
 * Guesses the content type based on example data. If the function is
 * uncertain, @result_uncertain will be set to %TRUE. Either @filename
 * or @data may be %NULL, in which case the guess will be based solely
 * on the other argument.
 *
 * Returns: a string indicating a guessed content type for the given data. Free with g_free()
 */


/**
 * g_content_type_guess_for_tree:
 * @root: the root of the tree to guess a type for
 *
 * Tries to guess the type of the tree with root @root, by
 * looking at the files it contains. The result is an array
 * of content types, with the best guess coming first.
 *
 * The types returned all have the form x-content/foo, e.g.
 * x-content/audio-cdda (for audio CDs) or x-content/image-dcf
 * (for a camera memory card). See the <ulink url="http://www.freedesktop.org/wiki/Specifications/shared-mime-info-spec">shared-mime-info</ulink>
 * specification for more on x-content types.
 *
 * This function is useful in the implementation of
 * g_mount_guess_content_type().
 *
 * Returns: (transfer full) (array zero-terminated=1): an %NULL-terminated array of zero or more content types. Free with g_strfreev()
 * Since: 2.18
 */


/**
 * g_content_type_is_a:
 * @type: a content type string
 * @supertype: a content type string
 *
 * Determines if @type is a subset of @supertype.
 *
 * Returns: %TRUE if @type is a kind of @supertype, %FALSE otherwise.
 */


/**
 * g_content_type_is_unknown:
 * @type: a content type string
 *
 * Checks if the content type is the generic "unknown" type.
 * On UNIX this is the "application/octet-stream" mimetype,
 * while on win32 it is "*".
 *
 * Returns: %TRUE if the type is the unknown type.
 */


/**
 * g_content_types_get_registered:
 *
 * Gets a list of strings containing all the registered content types
 * known to the system. The list and its data should be freed using
 * <programlisting>
 * g_list_free_full (list, g_free);
 * </programlisting>
 *
 * Returns: (element-type utf8) (transfer full): #GList of the registered content types
 */


/**
 * g_converter_convert:
 * @converter: a #GConverter.
 * @inbuf: (array length=inbuf_size) (element-type guint8): the buffer containing the data to convert.
 * @inbuf_size: the number of bytes in @inbuf
 * @outbuf: a buffer to write converted data in.
 * @outbuf_size: the number of bytes in @outbuf, must be at least one
 * @flags: a #GConverterFlags controlling the conversion details
 * @bytes_read: (out): will be set to the number of bytes read from @inbuf on success
 * @bytes_written: (out): will be set to the number of bytes written to @outbuf on success
 * @error: location to store the error occurring, or %NULL to ignore
 *
 * This is the main operation used when converting data. It is to be called
 * multiple times in a loop, and each time it will do some work, i.e.
 * producing some output (in @outbuf) or consuming some input (from @inbuf) or
 * both. If its not possible to do any work an error is returned.
 *
 * Note that a single call may not consume all input (or any input at all).
 * Also a call may produce output even if given no input, due to state stored
 * in the converter producing output.
 *
 * If any data was either produced or consumed, and then an error happens, then
 * only the successful conversion is reported and the error is returned on the
 * next call.
 *
 * A full conversion loop involves calling this method repeatedly, each time
 * giving it new input and space output space. When there is no more input
 * data after the data in @inbuf, the flag %G_CONVERTER_INPUT_AT_END must be set.
 * The loop will be (unless some error happens) returning %G_CONVERTER_CONVERTED
 * each time until all data is consumed and all output is produced, then
 * %G_CONVERTER_FINISHED is returned instead. Note, that %G_CONVERTER_FINISHED
 * may be returned even if %G_CONVERTER_INPUT_AT_END is not set, for instance
 * in a decompression converter where the end of data is detectable from the
 * data (and there might even be other data after the end of the compressed data).
 *
 * When some data has successfully been converted @bytes_read and is set to
 * the number of bytes read from @inbuf, and @bytes_written is set to indicate
 * how many bytes was written to @outbuf. If there are more data to output
 * or consume (i.e. unless the %G_CONVERTER_INPUT_AT_END is specified) then
 * %G_CONVERTER_CONVERTED is returned, and if no more data is to be output
 * then %G_CONVERTER_FINISHED is returned.
 *
 * On error %G_CONVERTER_ERROR is returned and @error is set accordingly.
 * Some errors need special handling:
 *
 * %G_IO_ERROR_NO_SPACE is returned if there is not enough space
 * to write the resulting converted data, the application should
 * call the function again with a larger @outbuf to continue.
 *
 * %G_IO_ERROR_PARTIAL_INPUT is returned if there is not enough
 * input to fully determine what the conversion should produce,
 * and the %G_CONVERTER_INPUT_AT_END flag is not set. This happens for
 * example with an incomplete multibyte sequence when converting text,
 * or when a regexp matches up to the end of the input (and may match
 * further input). It may also happen when @inbuf_size is zero and
 * there is no more data to produce.
 *
 * When this happens the application should read more input and then
 * call the function again. If further input shows that there is no
 * more data call the function again with the same data but with
 * the %G_CONVERTER_INPUT_AT_END flag set. This may cause the conversion
 * to finish as e.g. in the regexp match case (or, to fail again with
 * %G_IO_ERROR_PARTIAL_INPUT in e.g. a charset conversion where the
 * input is actually partial).
 *
 * After g_converter_convert() has returned %G_CONVERTER_FINISHED the
 * converter object is in an invalid state where its not allowed
 * to call g_converter_convert() anymore. At this time you can only
 * free the object or call g_converter_reset() to reset it to the
 * initial state.
 *
 * If the flag %G_CONVERTER_FLUSH is set then conversion is modified
 * to try to write out all internal state to the output. The application
 * has to call the function multiple times with the flag set, and when
 * the available input has been consumed and all internal state has
 * been produced then %G_CONVERTER_FLUSHED (or %G_CONVERTER_FINISHED if
 * really at the end) is returned instead of %G_CONVERTER_CONVERTED.
 * This is somewhat similar to what happens at the end of the input stream,
 * but done in the middle of the data.
 *
 * This has different meanings for different conversions. For instance
 * in a compression converter it would mean that we flush all the
 * compression state into output such that if you uncompress the
 * compressed data you get back all the input data. Doing this may
 * make the final file larger due to padding though. Another example
 * is a regexp conversion, where if you at the end of the flushed data
 * have a match, but there is also a potential longer match. In the
 * non-flushed case we would ask for more input, but when flushing we
 * treat this as the end of input and do the match.
 *
 * Flushing is not always possible (like if a charset converter flushes
 * at a partial multibyte sequence). Converters are supposed to try
 * to produce as much output as possible and then return an error
 * (typically %G_IO_ERROR_PARTIAL_INPUT).
 *
 * Returns: a #GConverterResult, %G_CONVERTER_ERROR on error.
 * Since: 2.24
 */


/**
 * g_converter_input_stream_get_converter:
 * @converter_stream: a #GConverterInputStream
 *
 * Gets the #GConverter that is used by @converter_stream.
 *
 * Returns: (transfer none): the converter of the converter input stream
 * Since: 2.24
 */


/**
 * g_converter_input_stream_new:
 * @base_stream: a #GInputStream
 * @converter: a #GConverter
 *
 * Creates a new converter input stream for the @base_stream.
 *
 * Returns: a new #GInputStream.
 */


/**
 * g_converter_output_stream_get_converter:
 * @converter_stream: a #GConverterOutputStream
 *
 * Gets the #GConverter that is used by @converter_stream.
 *
 * Returns: (transfer none): the converter of the converter output stream
 * Since: 2.24
 */


/**
 * g_converter_output_stream_new:
 * @base_stream: a #GOutputStream
 * @converter: a #GConverter
 *
 * Creates a new converter output stream for the @base_stream.
 *
 * Returns: a new #GOutputStream.
 */


/**
 * g_converter_reset:
 * @converter: a #GConverter.
 *
 * Resets all internal state in the converter, making it behave
 * as if it was just created. If the converter has any internal
 * state that would produce output then that output is lost.
 *
 * Since: 2.24
 */


/**
 * g_credentials_get_native: (skip)
 * @credentials: A #GCredentials.
 * @native_type: The type of native credentials to get.
 *
 * Gets a pointer to native credentials of type @native_type from
 * @credentials.
 *
 * It is a programming error (which will cause an warning to be
 * logged) to use this method if there is no #GCredentials support for
 * the OS or if @native_type isn't supported by the OS.
 *
 * Returns: The pointer to native credentials or %NULL if the operation there is no #GCredentials support for the OS or if @native_type isn't supported by the OS. Do not free the returned data, it is owned by @credentials.
 * Since: 2.26
 */


/**
 * g_credentials_get_unix_user:
 * @credentials: A #GCredentials
 * @error: Return location for error or %NULL.
 *
 * Tries to get the UNIX user identifier from @credentials. This
 * method is only available on UNIX platforms.
 *
 * This operation can fail if #GCredentials is not supported on the
 * OS or if the native credentials type does not contain information
 * about the UNIX user.
 *
 * Returns: The UNIX user identifier or -1 if @error is set.
 * Since: 2.26
 */


/**
 * g_credentials_is_same_user:
 * @credentials: A #GCredentials.
 * @other_credentials: A #GCredentials.
 * @error: Return location for error or %NULL.
 *
 * Checks if @credentials and @other_credentials is the same user.
 *
 * This operation can fail if #GCredentials is not supported on the
 * the OS.
 *
 * Returns: %TRUE if @credentials and @other_credentials has the same user, %FALSE otherwise or if @error is set.
 * Since: 2.26
 */


/**
 * g_credentials_new:
 *
 * Creates a new #GCredentials object with credentials matching the
 * the current process.
 *
 * Returns: A #GCredentials. Free with g_object_unref().
 * Since: 2.26
 */


/**
 * g_credentials_set_native:
 * @credentials: A #GCredentials.
 * @native_type: The type of native credentials to set.
 * @native: A pointer to native credentials.
 *
 * Copies the native credentials of type @native_type from @native
 * into @credentials.
 *
 * It is a programming error (which will cause an warning to be
 * logged) to use this method if there is no #GCredentials support for
 * the OS or if @native_type isn't supported by the OS.
 *
 * Since: 2.26
 */


/**
 * g_credentials_set_unix_user:
 * @credentials: A #GCredentials.
 * @uid: The UNIX user identifier to set.
 * @error: Return location for error or %NULL.
 *
 * Tries to set the UNIX user identifier on @credentials. This method
 * is only available on UNIX platforms.
 *
 * This operation can fail if #GCredentials is not supported on the
 * OS or if the native credentials type does not contain information
 * about the UNIX user.
 *
 * Returns: %TRUE if @uid was set, %FALSE if error is set.
 * Since: 2.26
 */


/**
 * g_credentials_to_string:
 * @credentials: A #GCredentials object.
 *
 * Creates a human-readable textual representation of @credentials
 * that can be used in logging and debug messages. The format of the
 * returned string may change in future GLib release.
 *
 * Returns: A string that should be freed with g_free().
 * Since: 2.26
 */


/**
 * g_data_input_stream_get_byte_order:
 * @stream: a given #GDataInputStream.
 *
 * Gets the byte order for the data input stream.
 *
 * Returns: the @stream's current #GDataStreamByteOrder.
 */


/**
 * g_data_input_stream_get_newline_type:
 * @stream: a given #GDataInputStream.
 *
 * Gets the current newline type for the @stream.
 *
 * Returns: #GDataStreamNewlineType for the given @stream.
 */


/**
 * g_data_input_stream_new:
 * @base_stream: a #GInputStream.
 *
 * Creates a new data input stream for the @base_stream.
 *
 * Returns: a new #GDataInputStream.
 */


/**
 * g_data_input_stream_read_byte:
 * @stream: a given #GDataInputStream.
 * @cancellable: (allow-none): optional #GCancellable object, %NULL to ignore.
 * @error: #GError for error reporting.
 *
 * Reads an unsigned 8-bit/1-byte value from @stream.
 *
 * Returns: an unsigned 8-bit/1-byte value read from the @stream or %0 if an error occurred.
 */


/**
 * g_data_input_stream_read_int16:
 * @stream: a given #GDataInputStream.
 * @cancellable: (allow-none): optional #GCancellable object, %NULL to ignore.
 * @error: #GError for error reporting.
 *
 * Reads a 16-bit/2-byte value from @stream.
 *
 * In order to get the correct byte order for this read operation,
 * see g_data_input_stream_get_byte_order() and g_data_input_stream_set_byte_order().
 *
 * Returns: a signed 16-bit/2-byte value read from @stream or %0 if an error occurred.
 */


/**
 * g_data_input_stream_read_int32:
 * @stream: a given #GDataInputStream.
 * @cancellable: (allow-none): optional #GCancellable object, %NULL to ignore.
 * @error: #GError for error reporting.
 *
 * Reads a signed 32-bit/4-byte value from @stream.
 *
 * In order to get the correct byte order for this read operation,
 * see g_data_input_stream_get_byte_order() and g_data_input_stream_set_byte_order().
 *
 * If @cancellable is not %NULL, then the operation can be cancelled by
 * triggering the cancellable object from another thread. If the operation
 * was cancelled, the error %G_IO_ERROR_CANCELLED will be returned.
 *
 * Returns: a signed 32-bit/4-byte value read from the @stream or %0 if an error occurred.
 */


/**
 * g_data_input_stream_read_int64:
 * @stream: a given #GDataInputStream.
 * @cancellable: (allow-none): optional #GCancellable object, %NULL to ignore.
 * @error: #GError for error reporting.
 *
 * Reads a 64-bit/8-byte value from @stream.
 *
 * In order to get the correct byte order for this read operation,
 * see g_data_input_stream_get_byte_order() and g_data_input_stream_set_byte_order().
 *
 * If @cancellable is not %NULL, then the operation can be cancelled by
 * triggering the cancellable object from another thread. If the operation
 * was cancelled, the error %G_IO_ERROR_CANCELLED will be returned.
 *
 * Returns: a signed 64-bit/8-byte value read from @stream or %0 if an error occurred.
 */


/**
 * g_data_input_stream_read_line:
 * @stream: a given #GDataInputStream.
 * @length: (out): a #gsize to get the length of the data read in.
 * @cancellable: (allow-none): optional #GCancellable object, %NULL to ignore.
 * @error: #GError for error reporting.
 *
 * Reads a line from the data input stream.  Note that no encoding
 * checks or conversion is performed; the input is not guaranteed to
 * be UTF-8, and may in fact have embedded NUL characters.
 *
 * If @cancellable is not %NULL, then the operation can be cancelled by
 * triggering the cancellable object from another thread. If the operation
 * was cancelled, the error %G_IO_ERROR_CANCELLED will be returned.
 *
 * Returns: (transfer full) (array zero-terminated=1) (element-type guint8): a NUL terminated byte array with the line that was read in (without the newlines).  Set @length to a #gsize to get the length of the read line.  On an error, it will return %NULL and @error will be set. If there's no content to read, it will still return %NULL, but @error won't be set.
 */


/**
 * g_data_input_stream_read_line_async:
 * @stream: a given #GDataInputStream.
 * @io_priority: the <link linkend="io-priority">I/O priority</link> of the request.
 * @cancellable: (allow-none): optional #GCancellable object, %NULL to ignore.
 * @callback: (scope async): callback to call when the request is satisfied.
 * @user_data: (closure): the data to pass to callback function.
 *
 * The asynchronous version of g_data_input_stream_read_line().  It is
 * an error to have two outstanding calls to this function.
 *
 * When the operation is finished, @callback will be called. You
 * can then call g_data_input_stream_read_line_finish() to get
 * the result of the operation.
 *
 * Since: 2.20
 */


/**
 * g_data_input_stream_read_line_finish:
 * @stream: a given #GDataInputStream.
 * @result: the #GAsyncResult that was provided to the callback.
 * @length: (out): a #gsize to get the length of the data read in.
 * @error: #GError for error reporting.
 *
 * Finish an asynchronous call started by
 * g_data_input_stream_read_line_async().  Note the warning about
 * string encoding in g_data_input_stream_read_line() applies here as
 * well.
 *
 * Returns: (transfer full) (array zero-terminated=1) (element-type guint8): a NUL-terminated byte array with the line that was read in (without the newlines).  Set @length to a #gsize to get the length of the read line.  On an error, it will return %NULL and @error will be set. If there's no content to read, it will still return %NULL, but @error won't be set.
 * Since: 2.20
 */


/**
 * g_data_input_stream_read_line_finish_utf8:
 * @stream: a given #GDataInputStream.
 * @result: the #GAsyncResult that was provided to the callback.
 * @length: (out): a #gsize to get the length of the data read in.
 * @error: #GError for error reporting.
 *
 * Finish an asynchronous call started by
 * g_data_input_stream_read_line_async().
 *
 * Returns: (transfer full): a string with the line that was read in (without the newlines).  Set @length to a #gsize to get the length of the read line.  On an error, it will return %NULL and @error will be set. For UTF-8 conversion errors, the set error domain is %G_CONVERT_ERROR.  If there's no content to read, it will still return %NULL, but @error won't be set.
 * Since: 2.30
 */


/**
 * g_data_input_stream_read_line_utf8:
 * @stream: a given #GDataInputStream.
 * @length: (out): a #gsize to get the length of the data read in.
 * @cancellable: (allow-none): optional #GCancellable object, %NULL to ignore.
 * @error: #GError for error reporting.
 *
 * Reads a UTF-8 encoded line from the data input stream.
 *
 * If @cancellable is not %NULL, then the operation can be cancelled by
 * triggering the cancellable object from another thread. If the operation
 * was cancelled, the error %G_IO_ERROR_CANCELLED will be returned.
 *
 * Returns: (transfer full): a NUL terminated UTF-8 string with the line that was read in (without the newlines).  Set @length to a #gsize to get the length of the read line.  On an error, it will return %NULL and @error will be set.  For UTF-8 conversion errors, the set error domain is %G_CONVERT_ERROR.  If there's no content to read, it will still return %NULL, but @error won't be set.
 * Since: 2.30
 */


/**
 * g_data_input_stream_read_uint16:
 * @stream: a given #GDataInputStream.
 * @cancellable: (allow-none): optional #GCancellable object, %NULL to ignore.
 * @error: #GError for error reporting.
 *
 * Reads an unsigned 16-bit/2-byte value from @stream.
 *
 * In order to get the correct byte order for this read operation,
 * see g_data_input_stream_get_byte_order() and g_data_input_stream_set_byte_order().
 *
 * Returns: an unsigned 16-bit/2-byte value read from the @stream or %0 if an error occurred.
 */


/**
 * g_data_input_stream_read_uint32:
 * @stream: a given #GDataInputStream.
 * @cancellable: (allow-none): optional #GCancellable object, %NULL to ignore.
 * @error: #GError for error reporting.
 *
 * Reads an unsigned 32-bit/4-byte value from @stream.
 *
 * In order to get the correct byte order for this read operation,
 * see g_data_input_stream_get_byte_order() and g_data_input_stream_set_byte_order().
 *
 * If @cancellable is not %NULL, then the operation can be cancelled by
 * triggering the cancellable object from another thread. If the operation
 * was cancelled, the error %G_IO_ERROR_CANCELLED will be returned.
 *
 * Returns: an unsigned 32-bit/4-byte value read from the @stream or %0 if an error occurred.
 */


/**
 * g_data_input_stream_read_uint64:
 * @stream: a given #GDataInputStream.
 * @cancellable: (allow-none): optional #GCancellable object, %NULL to ignore.
 * @error: #GError for error reporting.
 *
 * Reads an unsigned 64-bit/8-byte value from @stream.
 *
 * In order to get the correct byte order for this read operation,
 * see g_data_input_stream_get_byte_order().
 *
 * If @cancellable is not %NULL, then the operation can be cancelled by
 * triggering the cancellable object from another thread. If the operation
 * was cancelled, the error %G_IO_ERROR_CANCELLED will be returned.
 *
 * Returns: an unsigned 64-bit/8-byte read from @stream or %0 if an error occurred.
 */


/**
 * g_data_input_stream_read_until:
 * @stream: a given #GDataInputStream.
 * @stop_chars: characters to terminate the read.
 * @length: (out): a #gsize to get the length of the data read in.
 * @cancellable: (allow-none): optional #GCancellable object, %NULL to ignore.
 * @error: #GError for error reporting.
 *
 * Reads a string from the data input stream, up to the first
 * occurrence of any of the stop characters.
 *
 * Note that, in contrast to g_data_input_stream_read_until_async(),
 * this function consumes the stop character that it finds.
 *
 * Don't use this function in new code.  Its functionality is
 * inconsistent with g_data_input_stream_read_until_async().  Both
 * functions will be marked as deprecated in a future release.  Use
 * g_data_input_stream_read_upto() instead, but note that that function
 * does not consume the stop character.
 *
 * Returns: (transfer full): a string with the data that was read before encountering any of the stop characters. Set @length to a #gsize to get the length of the string. This function will return %NULL on an error.
 */


/**
 * g_data_input_stream_read_until_async:
 * @stream: a given #GDataInputStream.
 * @stop_chars: characters to terminate the read.
 * @io_priority: the <link linkend="io-priority">I/O priority</link> of the request.
 * @cancellable: (allow-none): optional #GCancellable object, %NULL to ignore.
 * @callback: (scope async): callback to call when the request is satisfied.
 * @user_data: (closure): the data to pass to callback function.
 *
 * The asynchronous version of g_data_input_stream_read_until().
 * It is an error to have two outstanding calls to this function.
 *
 * Note that, in contrast to g_data_input_stream_read_until(),
 * this function does not consume the stop character that it finds.  You
 * must read it for yourself.
 *
 * When the operation is finished, @callback will be called. You
 * can then call g_data_input_stream_read_until_finish() to get
 * the result of the operation.
 *
 * Don't use this function in new code.  Its functionality is
 * inconsistent with g_data_input_stream_read_until().  Both functions
 * will be marked as deprecated in a future release.  Use
 * g_data_input_stream_read_upto_async() instead.
 *
 * Since: 2.20
 */


/**
 * g_data_input_stream_read_until_finish:
 * @stream: a given #GDataInputStream.
 * @result: the #GAsyncResult that was provided to the callback.
 * @length: (out): a #gsize to get the length of the data read in.
 * @error: #GError for error reporting.
 *
 * Finish an asynchronous call started by
 * g_data_input_stream_read_until_async().
 *
 * Since: 2.20
 * Returns: (transfer full): a string with the data that was read before encountering any of the stop characters. Set @length to a #gsize to get the length of the string. This function will return %NULL on an error.
 */


/**
 * g_data_input_stream_read_upto:
 * @stream: a #GDataInputStream
 * @stop_chars: characters to terminate the read
 * @stop_chars_len: length of @stop_chars. May be -1 if @stop_chars is nul-terminated
 * @length: (out): a #gsize to get the length of the data read in
 * @cancellable: (allow-none): optional #GCancellable object, %NULL to ignore
 * @error: #GError for error reporting
 *
 * Reads a string from the data input stream, up to the first
 * occurrence of any of the stop characters.
 *
 * In contrast to g_data_input_stream_read_until(), this function
 * does <emphasis>not</emphasis> consume the stop character. You have
 * to use g_data_input_stream_read_byte() to get it before calling
 * g_data_input_stream_read_upto() again.
 *
 * Note that @stop_chars may contain '\0' if @stop_chars_len is
 * specified.
 *
 * Returns: (transfer full): a string with the data that was read before encountering any of the stop characters. Set @length to a #gsize to get the length of the string. This function will return %NULL on an error
 * Since: 2.26
 */


/**
 * g_data_input_stream_read_upto_async:
 * @stream: a #GDataInputStream
 * @stop_chars: characters to terminate the read
 * @stop_chars_len: length of @stop_chars. May be -1 if @stop_chars is nul-terminated
 * @io_priority: the <link linkend="io-priority">I/O priority</link> of the request.
 * @cancellable: (allow-none): optional #GCancellable object, %NULL to ignore
 * @callback: (scope async): callback to call when the request is satisfied
 * @user_data: (closure): the data to pass to callback function
 *
 * The asynchronous version of g_data_input_stream_read_upto().
 * It is an error to have two outstanding calls to this function.
 *
 * In contrast to g_data_input_stream_read_until(), this function
 * does <emphasis>not</emphasis> consume the stop character. You have
 * to use g_data_input_stream_read_byte() to get it before calling
 * g_data_input_stream_read_upto() again.
 *
 * Note that @stop_chars may contain '\0' if @stop_chars_len is
 * specified.
 *
 * When the operation is finished, @callback will be called. You
 * can then call g_data_input_stream_read_upto_finish() to get
 * the result of the operation.
 *
 * Since: 2.26
 */


/**
 * g_data_input_stream_read_upto_finish:
 * @stream: a #GDataInputStream
 * @result: the #GAsyncResult that was provided to the callback
 * @length: (out): a #gsize to get the length of the data read in
 * @error: #GError for error reporting
 *
 * Finish an asynchronous call started by
 * g_data_input_stream_read_upto_async().
 *
 * Note that this function does <emphasis>not</emphasis> consume the
 * stop character. You have to use g_data_input_stream_read_byte() to
 * get it before calling g_data_input_stream_read_upto_async() again.
 *
 * Returns: (transfer full): a string with the data that was read before encountering any of the stop characters. Set @length to a #gsize to get the length of the string. This function will return %NULL on an error.
 * Since: 2.24
 */


/**
 * g_data_input_stream_set_byte_order:
 * @stream: a given #GDataInputStream.
 * @order: a #GDataStreamByteOrder to set.
 *
 * This function sets the byte order for the given @stream. All subsequent
 * reads from the @stream will be read in the given @order.
 */


/**
 * g_data_input_stream_set_newline_type:
 * @stream: a #GDataInputStream.
 * @type: the type of new line return as #GDataStreamNewlineType.
 *
 * Sets the newline type for the @stream.
 *
 * Note that using G_DATA_STREAM_NEWLINE_TYPE_ANY is slightly unsafe. If a read
 * chunk ends in "CR" we must read an additional byte to know if this is "CR" or
 * "CR LF", and this might block if there is no more data available.
 */


/**
 * g_data_output_stream_get_byte_order:
 * @stream: a #GDataOutputStream.
 *
 * Gets the byte order for the stream.
 *
 * Returns: the #GDataStreamByteOrder for the @stream.
 */


/**
 * g_data_output_stream_new:
 * @base_stream: a #GOutputStream.
 *
 * Creates a new data output stream for @base_stream.
 *
 * Returns: #GDataOutputStream.
 */


/**
 * g_data_output_stream_put_byte:
 * @stream: a #GDataOutputStream.
 * @data: a #guchar.
 * @cancellable: (allow-none): optional #GCancellable object, %NULL to ignore.
 * @error: a #GError, %NULL to ignore.
 *
 * Puts a byte into the output stream.
 *
 * Returns: %TRUE if @data was successfully added to the @stream.
 */


/**
 * g_data_output_stream_put_int16:
 * @stream: a #GDataOutputStream.
 * @data: a #gint16.
 * @cancellable: (allow-none): optional #GCancellable object, %NULL to ignore.
 * @error: a #GError, %NULL to ignore.
 *
 * Puts a signed 16-bit integer into the output stream.
 *
 * Returns: %TRUE if @data was successfully added to the @stream.
 */


/**
 * g_data_output_stream_put_int32:
 * @stream: a #GDataOutputStream.
 * @data: a #gint32.
 * @cancellable: (allow-none): optional #GCancellable object, %NULL to ignore.
 * @error: a #GError, %NULL to ignore.
 *
 * Puts a signed 32-bit integer into the output stream.
 *
 * Returns: %TRUE if @data was successfully added to the @stream.
 */


/**
 * g_data_output_stream_put_int64:
 * @stream: a #GDataOutputStream.
 * @data: a #gint64.
 * @cancellable: (allow-none): optional #GCancellable object, %NULL to ignore.
 * @error: a #GError, %NULL to ignore.
 *
 * Puts a signed 64-bit integer into the stream.
 *
 * Returns: %TRUE if @data was successfully added to the @stream.
 */


/**
 * g_data_output_stream_put_string:
 * @stream: a #GDataOutputStream.
 * @str: a string.
 * @cancellable: (allow-none): optional #GCancellable object, %NULL to ignore.
 * @error: a #GError, %NULL to ignore.
 *
 * Puts a string into the output stream.
 *
 * Returns: %TRUE if @string was successfully added to the @stream.
 */


/**
 * g_data_output_stream_put_uint16:
 * @stream: a #GDataOutputStream.
 * @data: a #guint16.
 * @cancellable: (allow-none): optional #GCancellable object, %NULL to ignore.
 * @error: a #GError, %NULL to ignore.
 *
 * Puts an unsigned 16-bit integer into the output stream.
 *
 * Returns: %TRUE if @data was successfully added to the @stream.
 */


/**
 * g_data_output_stream_put_uint32:
 * @stream: a #GDataOutputStream.
 * @data: a #guint32.
 * @cancellable: (allow-none): optional #GCancellable object, %NULL to ignore.
 * @error: a #GError, %NULL to ignore.
 *
 * Puts an unsigned 32-bit integer into the stream.
 *
 * Returns: %TRUE if @data was successfully added to the @stream.
 */


/**
 * g_data_output_stream_put_uint64:
 * @stream: a #GDataOutputStream.
 * @data: a #guint64.
 * @cancellable: (allow-none): optional #GCancellable object, %NULL to ignore.
 * @error: a #GError, %NULL to ignore.
 *
 * Puts an unsigned 64-bit integer into the stream.
 *
 * Returns: %TRUE if @data was successfully added to the @stream.
 */


/**
 * g_data_output_stream_set_byte_order:
 * @stream: a #GDataOutputStream.
 * @order: a %GDataStreamByteOrder.
 *
 * Sets the byte order of the data output stream to @order.
 */


/**
 * g_dbus_action_group_get:
 * @connection: A #GDBusConnection
 * @bus_name: the bus name which exports the action group
 * @object_path: the object path at which the action group is exported
 *
 * Obtains a #GDBusActionGroup for the action group which is exported at
 * the given @bus_name and @object_path.
 *
 * The thread default main context is taken at the time of this call.
 * All signals on the menu model (and any linked models) are reported
 * with respect to this context.  All calls on the returned menu model
 * (and linked models) must also originate from this same context, with
 * the thread default main context unchanged.
 *
 * This call is non-blocking.  The returned action group may or may not
 * already be filled in.  The correct thing to do is connect the signals
 * for the action group to monitor for changes and then to call
 * g_action_group_list_actions() to get the initial list.
 *
 * Returns: (transfer full): a #GDBusActionGroup
 * Since: 2.32
 */


/**
 * g_dbus_address_get_for_bus_sync:
 * @bus_type: A #GBusType.
 * @cancellable: (allow-none): A #GCancellable or %NULL.
 * @error: Return location for error or %NULL.
 *
 * Synchronously looks up the D-Bus address for the well-known message
 * bus instance specified by @bus_type. This may involve using various
 * platform specific mechanisms.
 *
 * Returns: A valid D-Bus address string for @bus_type or %NULL if @error is set.
 * Since: 2.26
 */


/**
 * g_dbus_address_get_stream:
 * @address: A valid D-Bus address.
 * @cancellable: (allow-none): A #GCancellable or %NULL.
 * @callback: A #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: Data to pass to @callback.
 *
 * Asynchronously connects to an endpoint specified by @address and
 * sets up the connection so it is in a state to run the client-side
 * of the D-Bus authentication conversation.
 *
 * When the operation is finished, @callback will be invoked. You can
 * then call g_dbus_address_get_stream_finish() to get the result of
 * the operation.
 *
 * This is an asynchronous failable function. See
 * g_dbus_address_get_stream_sync() for the synchronous version.
 *
 * Since: 2.26
 */


/**
 * g_dbus_address_get_stream_finish:
 * @res: A #GAsyncResult obtained from the GAsyncReadyCallback passed to g_dbus_address_get_stream().
 * @out_guid: %NULL or return location to store the GUID extracted from @address, if any.
 * @error: Return location for error or %NULL.
 *
 * Finishes an operation started with g_dbus_address_get_stream().
 *
 * Returns: (transfer full): A #GIOStream or %NULL if @error is set.
 * Since: 2.26
 */


/**
 * g_dbus_address_get_stream_sync:
 * @address: A valid D-Bus address.
 * @out_guid: %NULL or return location to store the GUID extracted from @address, if any.
 * @cancellable: (allow-none): A #GCancellable or %NULL.
 * @error: Return location for error or %NULL.
 *
 * Synchronously connects to an endpoint specified by @address and
 * sets up the connection so it is in a state to run the client-side
 * of the D-Bus authentication conversation.
 *
 * This is a synchronous failable function. See
 * g_dbus_address_get_stream() for the asynchronous version.
 *
 * Returns: (transfer full): A #GIOStream or %NULL if @error is set.
 * Since: 2.26
 */


/**
 * g_dbus_annotation_info_lookup:
 * @annotations: (array zero-terminated=1) (allow-none): A %NULL-terminated array of annotations or %NULL.
 * @name: The name of the annotation to look up.
 *
 * Looks up the value of an annotation.
 *
 * This cost of this function is O(n) in number of annotations.
 *
 * Returns: The value or %NULL if not found. Do not free, it is owned by @annotations.
 * Since: 2.26
 */


/**
 * g_dbus_annotation_info_ref:
 * @info: A #GDBusNodeInfo
 *
 * If @info is statically allocated does nothing. Otherwise increases
 * the reference count.
 *
 * Returns: The same @info.
 * Since: 2.26
 */


/**
 * g_dbus_annotation_info_unref:
 * @info: A #GDBusAnnotationInfo.
 *
 * If @info is statically allocated, does nothing. Otherwise decreases
 * the reference count of @info. When its reference count drops to 0,
 * the memory used is freed.
 *
 * Since: 2.26
 */


/**
 * g_dbus_arg_info_ref:
 * @info: A #GDBusArgInfo
 *
 * If @info is statically allocated does nothing. Otherwise increases
 * the reference count.
 *
 * Returns: The same @info.
 * Since: 2.26
 */


/**
 * g_dbus_arg_info_unref:
 * @info: A #GDBusArgInfo.
 *
 * If @info is statically allocated, does nothing. Otherwise decreases
 * the reference count of @info. When its reference count drops to 0,
 * the memory used is freed.
 *
 * Since: 2.26
 */


/**
 * g_dbus_auth_observer_allow_mechanism:
 * @observer: A #GDBusAuthObserver.
 * @mechanism: The name of the mechanism, e.g. <literal>DBUS_COOKIE_SHA1</literal>.
 *
 * Emits the #GDBusAuthObserver::allow-mechanism signal on @observer.
 *
 * Returns: %TRUE if @mechanism can be used to authenticate the other peer, %FALSE if not.
 * Since: 2.34
 */


/**
 * g_dbus_auth_observer_authorize_authenticated_peer:
 * @observer: A #GDBusAuthObserver.
 * @stream: A #GIOStream for the #GDBusConnection.
 * @credentials: (allow-none): Credentials received from the peer or %NULL.
 *
 * Emits the #GDBusAuthObserver::authorize-authenticated-peer signal on @observer.
 *
 * Returns: %TRUE if the peer is authorized, %FALSE if not.
 * Since: 2.26
 */


/**
 * g_dbus_auth_observer_new:
 *
 * Creates a new #GDBusAuthObserver object.
 *
 * Returns: A #GDBusAuthObserver. Free with g_object_unref().
 * Since: 2.26
 */


/**
 * g_dbus_connection_add_filter:
 * @connection: A #GDBusConnection.
 * @filter_function: A filter function.
 * @user_data: User data to pass to @filter_function.
 * @user_data_free_func: Function to free @user_data with when filter is removed or %NULL.
 *
 * Adds a message filter. Filters are handlers that are run on all
 * incoming and outgoing messages, prior to standard dispatch. Filters
 * are run in the order that they were added.  The same handler can be
 * added as a filter more than once, in which case it will be run more
 * than once.  Filters added during a filter callback won't be run on
 * the message being processed. Filter functions are allowed to modify
 * and even drop messages.
 *
 * Note that filters are run in a dedicated message handling thread so
 * they can't block and, generally, can't do anything but signal a
 * worker thread. Also note that filters are rarely needed - use API
 * such as g_dbus_connection_send_message_with_reply(),
 * g_dbus_connection_signal_subscribe() or g_dbus_connection_call() instead.
 *
 * If a filter consumes an incoming message the message is not
 * dispatched anywhere else - not even the standard dispatch machinery
 * (that API such as g_dbus_connection_signal_subscribe() and
 * g_dbus_connection_send_message_with_reply() relies on) will see the
 * message. Similary, if a filter consumes an outgoing message, the
 * message will not be sent to the other peer.
 *
 * Returns: A filter identifier that can be used with g_dbus_connection_remove_filter().
 * Since: 2.26
 */


/**
 * g_dbus_connection_call:
 * @connection: A #GDBusConnection.
 * @bus_name: (allow-none): A unique or well-known bus name or %NULL if @connection is not a message bus connection.
 * @object_path: Path of remote object.
 * @interface_name: D-Bus interface to invoke method on.
 * @method_name: The name of the method to invoke.
 * @parameters: (allow-none): A #GVariant tuple with parameters for the method or %NULL if not passing parameters.
 * @reply_type: (allow-none): The expected type of the reply, or %NULL.
 * @flags: Flags from the #GDBusCallFlags enumeration.
 * @timeout_msec: The timeout in milliseconds, -1 to use the default timeout or %G_MAXINT for no timeout.
 * @cancellable: (allow-none): A #GCancellable or %NULL.
 * @callback: (allow-none): A #GAsyncReadyCallback to call when the request is satisfied or %NULL if you don't care about the result of the method invocation.
 * @user_data: The data to pass to @callback.
 *
 * Asynchronously invokes the @method_name method on the
 * @interface_name D-Bus interface on the remote object at
 * @object_path owned by @bus_name.
 *
 * If @connection is closed then the operation will fail with
 * %G_IO_ERROR_CLOSED. If @cancellable is canceled, the operation will
 * fail with %G_IO_ERROR_CANCELLED. If @parameters contains a value
 * not compatible with the D-Bus protocol, the operation fails with
 * %G_IO_ERROR_INVALID_ARGUMENT.
 *
 * If @reply_type is non-%NULL then the reply will be checked for having this type and an
 * error will be raised if it does not match.  Said another way, if you give a @reply_type
 * then any non-%NULL return value will be of this type.
 *
 * If the @parameters #GVariant is floating, it is consumed. This allows
 * convenient 'inline' use of g_variant_new(), e.g.:
 * |[
 *  g_dbus_connection_call (connection,
 *                          "org.freedesktop.StringThings",
 *                          "/org/freedesktop/StringThings",
 *                          "org.freedesktop.StringThings",
 *                          "TwoStrings",
 *                          g_variant_new ("(ss)",
 *                                         "Thing One",
 *                                         "Thing Two"),
 *                          NULL,
 *                          G_DBUS_CALL_FLAGS_NONE,
 *                          -1,
 *                          NULL,
 *                          (GAsyncReadyCallback) two_strings_done,
 *                          NULL);
 * ]|
 *
 * This is an asynchronous method. When the operation is finished, @callback will be invoked
 * in the <link linkend="g-main-context-push-thread-default">thread-default main loop</link>
 * of the thread you are calling this method from. You can then call
 * g_dbus_connection_call_finish() to get the result of the operation.
 * See g_dbus_connection_call_sync() for the synchronous version of this
 * function.
 *
 * If @callback is %NULL then the D-Bus method call message will be sent with
 * the %G_DBUS_MESSAGE_FLAGS_NO_REPLY_EXPECTED flag set.
 *
 * Since: 2.26
 */


/**
 * g_dbus_connection_call_finish:
 * @connection: A #GDBusConnection.
 * @res: A #GAsyncResult obtained from the #GAsyncReadyCallback passed to g_dbus_connection_call().
 * @error: Return location for error or %NULL.
 *
 * Finishes an operation started with g_dbus_connection_call().
 *
 * Returns: %NULL if @error is set. Otherwise a #GVariant tuple with return values. Free with g_variant_unref().
 * Since: 2.26
 */


/**
 * g_dbus_connection_call_sync:
 * @connection: A #GDBusConnection.
 * @bus_name: A unique or well-known bus name.
 * @object_path: Path of remote object.
 * @interface_name: D-Bus interface to invoke method on.
 * @method_name: The name of the method to invoke.
 * @parameters: (allow-none): A #GVariant tuple with parameters for the method or %NULL if not passing parameters.
 * @reply_type: (allow-none): The expected type of the reply, or %NULL.
 * @flags: Flags from the #GDBusCallFlags enumeration.
 * @timeout_msec: The timeout in milliseconds, -1 to use the default timeout or %G_MAXINT for no timeout.
 * @cancellable: (allow-none): A #GCancellable or %NULL.
 * @error: Return location for error or %NULL.
 *
 * Synchronously invokes the @method_name method on the
 * @interface_name D-Bus interface on the remote object at
 * @object_path owned by @bus_name.
 *
 * If @connection is closed then the operation will fail with
 * %G_IO_ERROR_CLOSED. If @cancellable is canceled, the
 * operation will fail with %G_IO_ERROR_CANCELLED. If @parameters
 * contains a value not compatible with the D-Bus protocol, the operation
 * fails with %G_IO_ERROR_INVALID_ARGUMENT.
 *
 * If @reply_type is non-%NULL then the reply will be checked for having
 * this type and an error will be raised if it does not match.  Said
 * another way, if you give a @reply_type then any non-%NULL return
 * value will be of this type.
 *
 * If the @parameters #GVariant is floating, it is consumed.
 * This allows convenient 'inline' use of g_variant_new(), e.g.:
 * |[
 *  g_dbus_connection_call_sync (connection,
 *                               "org.freedesktop.StringThings",
 *                               "/org/freedesktop/StringThings",
 *                               "org.freedesktop.StringThings",
 *                               "TwoStrings",
 *                               g_variant_new ("(ss)",
 *                                              "Thing One",
 *                                              "Thing Two"),
 *                               NULL,
 *                               G_DBUS_CALL_FLAGS_NONE,
 *                               -1,
 *                               NULL,
 *                               &amp;error);
 * ]|
 *
 * The calling thread is blocked until a reply is received. See
 * g_dbus_connection_call() for the asynchronous version of
 * this method.
 *
 * Returns: %NULL if @error is set. Otherwise a #GVariant tuple with return values. Free with g_variant_unref().
 * Since: 2.26
 */


/**
 * g_dbus_connection_call_with_unix_fd_list:
 * @connection: A #GDBusConnection.
 * @bus_name: (allow-none): A unique or well-known bus name or %NULL if @connection is not a message bus connection.
 * @object_path: Path of remote object.
 * @interface_name: D-Bus interface to invoke method on.
 * @method_name: The name of the method to invoke.
 * @parameters: (allow-none): A #GVariant tuple with parameters for the method or %NULL if not passing parameters.
 * @reply_type: (allow-none): The expected type of the reply, or %NULL.
 * @flags: Flags from the #GDBusCallFlags enumeration.
 * @timeout_msec: The timeout in milliseconds, -1 to use the default timeout or %G_MAXINT for no timeout.
 * @fd_list: (allow-none): A #GUnixFDList or %NULL.
 * @cancellable: (allow-none): A #GCancellable or %NULL.
 * @callback: (allow-none): A #GAsyncReadyCallback to call when the request is satisfied or %NULL if you don't * care about the result of the method invocation.
 * @user_data: The data to pass to @callback.
 *
 * Like g_dbus_connection_call() but also takes a #GUnixFDList object.
 *
 * This method is only available on UNIX.
 *
 * Since: 2.30
 */


/**
 * g_dbus_connection_call_with_unix_fd_list_finish:
 * @connection: A #GDBusConnection.
 * @out_fd_list: (out) (allow-none): Return location for a #GUnixFDList or %NULL.
 * @res: A #GAsyncResult obtained from the #GAsyncReadyCallback passed to g_dbus_connection_call_with_unix_fd_list().
 * @error: Return location for error or %NULL.
 *
 * Finishes an operation started with g_dbus_connection_call_with_unix_fd_list().
 *
 * Returns: %NULL if @error is set. Otherwise a #GVariant tuple with return values. Free with g_variant_unref().
 * Since: 2.30
 */


/**
 * g_dbus_connection_call_with_unix_fd_list_sync:
 * @connection: A #GDBusConnection.
 * @bus_name: A unique or well-known bus name.
 * @object_path: Path of remote object.
 * @interface_name: D-Bus interface to invoke method on.
 * @method_name: The name of the method to invoke.
 * @parameters: (allow-none): A #GVariant tuple with parameters for the method or %NULL if not passing parameters.
 * @reply_type: (allow-none): The expected type of the reply, or %NULL.
 * @flags: Flags from the #GDBusCallFlags enumeration.
 * @timeout_msec: The timeout in milliseconds, -1 to use the default timeout or %G_MAXINT for no timeout.
 * @fd_list: (allow-none): A #GUnixFDList or %NULL.
 * @out_fd_list: (out) (allow-none): Return location for a #GUnixFDList or %NULL.
 * @cancellable: (allow-none): A #GCancellable or %NULL.
 * @error: Return location for error or %NULL.
 *
 * Like g_dbus_connection_call_sync() but also takes and returns #GUnixFDList objects.
 *
 * This method is only available on UNIX.
 *
 * Returns: %NULL if @error is set. Otherwise a #GVariant tuple with return values. Free with g_variant_unref().
 * Since: 2.30
 */


/**
 * g_dbus_connection_close:
 * @connection: A #GDBusConnection.
 * @cancellable: (allow-none): A #GCancellable or %NULL.
 * @callback: (allow-none): A #GAsyncReadyCallback to call when the request is satisfied or %NULL if you don't care about the result.
 * @user_data: The data to pass to @callback.
 *
 * Closes @connection. Note that this never causes the process to
 * exit (this might only happen if the other end of a shared message
 * bus connection disconnects, see #GDBusConnection:exit-on-close).
 *
 * Once the connection is closed, operations such as sending a message
 * will return with the error %G_IO_ERROR_CLOSED. Closing a connection
 * will not automatically flush the connection so queued messages may
 * be lost. Use g_dbus_connection_flush() if you need such guarantees.
 *
 * If @connection is already closed, this method fails with
 * %G_IO_ERROR_CLOSED.
 *
 * When @connection has been closed, the #GDBusConnection::closed
 * signal is emitted in the <link
 * linkend="g-main-context-push-thread-default">thread-default main
 * loop</link> of the thread that @connection was constructed in.
 *
 * This is an asynchronous method. When the operation is finished,
 * @callback will be invoked in the <link
 * linkend="g-main-context-push-thread-default">thread-default main
 * loop</link> of the thread you are calling this method from. You can
 * then call g_dbus_connection_close_finish() to get the result of the
 * operation.  See g_dbus_connection_close_sync() for the synchronous
 * version.
 *
 * Since: 2.26
 */


/**
 * g_dbus_connection_close_finish:
 * @connection: A #GDBusConnection.
 * @res: A #GAsyncResult obtained from the #GAsyncReadyCallback passed to g_dbus_connection_close().
 * @error: Return location for error or %NULL.
 *
 * Finishes an operation started with g_dbus_connection_close().
 *
 * Returns: %TRUE if the operation succeeded, %FALSE if @error is set.
 * Since: 2.26
 */


/**
 * g_dbus_connection_close_sync:
 * @connection: A #GDBusConnection.
 * @cancellable: (allow-none): A #GCancellable or %NULL.
 * @error: Return location for error or %NULL.
 *
 * Synchronously closees @connection. The calling thread is blocked
 * until this is done. See g_dbus_connection_close() for the
 * asynchronous version of this method and more details about what it
 * does.
 *
 * Returns: %TRUE if the operation succeeded, %FALSE if @error is set.
 * Since: 2.26
 */


/**
 * g_dbus_connection_emit_signal:
 * @connection: A #GDBusConnection.
 * @destination_bus_name: (allow-none): The unique bus name for the destination for the signal or %NULL to emit to all listeners.
 * @object_path: Path of remote object.
 * @interface_name: D-Bus interface to emit a signal on.
 * @signal_name: The name of the signal to emit.
 * @parameters: (allow-none): A #GVariant tuple with parameters for the signal or %NULL if not passing parameters.
 * @error: Return location for error or %NULL.
 *
 * Emits a signal.
 *
 * If the parameters GVariant is floating, it is consumed.
 *
 * This can only fail if @parameters is not compatible with the D-Bus protocol.
 *
 * Returns: %TRUE unless @error is set.
 * Since: 2.26
 */


/**
 * g_dbus_connection_export_action_group:
 * @connection: a #GDBusConnection
 * @object_path: a D-Bus object path
 * @action_group: a #GActionGroup
 * @error: a pointer to a %NULL #GError, or %NULL
 *
 * Exports @action_group on @connection at @object_path.
 *
 * The implemented D-Bus API should be considered private.  It is
 * subject to change in the future.
 *
 * A given object path can only have one action group exported on it.
 * If this constraint is violated, the export will fail and 0 will be
 * returned (with @error set accordingly).
 *
 * You can unexport the action group using
 * g_dbus_connection_unexport_action_group() with the return value of
 * this function.
 *
 * The thread default main context is taken at the time of this call.
 * All incoming action activations and state change requests are
 * reported from this context.  Any changes on the action group that
 * cause it to emit signals must also come from this same context.
 * Since incoming action activations and state change requests are
 * rather likely to cause changes on the action group, this effectively
 * limits a given action group to being exported from only one main
 * context.
 *
 * Returns: the ID of the export (never zero), or 0 in case of failure
 * Since: 2.32
 */


/**
 * g_dbus_connection_export_menu_model:
 * @connection: a #GDBusConnection
 * @object_path: a D-Bus object path
 * @menu: a #GMenuModel
 * @error: return location for an error, or %NULL
 *
 * Exports @menu on @connection at @object_path.
 *
 * The implemented D-Bus API should be considered private.
 * It is subject to change in the future.
 *
 * An object path can only have one action group exported on it. If this
 * constraint is violated, the export will fail and 0 will be
 * returned (with @error set accordingly).
 *
 * You can unexport the menu model using
 * g_dbus_connection_unexport_menu_model() with the return value of
 * this function.
 *
 * Returns: the ID of the export (never zero), or 0 in case of failure
 * Since: 2.32
 */


/**
 * g_dbus_connection_flush:
 * @connection: A #GDBusConnection.
 * @cancellable: (allow-none): A #GCancellable or %NULL.
 * @callback: (allow-none): A #GAsyncReadyCallback to call when the request is satisfied or %NULL if you don't care about the result.
 * @user_data: The data to pass to @callback.
 *
 * Asynchronously flushes @connection, that is, writes all queued
 * outgoing message to the transport and then flushes the transport
 * (using g_output_stream_flush_async()). This is useful in programs
 * that wants to emit a D-Bus signal and then exit
 * immediately. Without flushing the connection, there is no guarantee
 * that the message has been sent to the networking buffers in the OS
 * kernel.
 *
 * This is an asynchronous method. When the operation is finished,
 * @callback will be invoked in the <link
 * linkend="g-main-context-push-thread-default">thread-default main
 * loop</link> of the thread you are calling this method from. You can
 * then call g_dbus_connection_flush_finish() to get the result of the
 * operation.  See g_dbus_connection_flush_sync() for the synchronous
 * version.
 *
 * Since: 2.26
 */


/**
 * g_dbus_connection_flush_finish:
 * @connection: A #GDBusConnection.
 * @res: A #GAsyncResult obtained from the #GAsyncReadyCallback passed to g_dbus_connection_flush().
 * @error: Return location for error or %NULL.
 *
 * Finishes an operation started with g_dbus_connection_flush().
 *
 * Returns: %TRUE if the operation succeeded, %FALSE if @error is set.
 * Since: 2.26
 */


/**
 * g_dbus_connection_flush_sync:
 * @connection: A #GDBusConnection.
 * @cancellable: (allow-none): A #GCancellable or %NULL.
 * @error: Return location for error or %NULL.
 *
 * Synchronously flushes @connection. The calling thread is blocked
 * until this is done. See g_dbus_connection_flush() for the
 * asynchronous version of this method and more details about what it
 * does.
 *
 * Returns: %TRUE if the operation succeeded, %FALSE if @error is set.
 * Since: 2.26
 */


/**
 * g_dbus_connection_get_capabilities:
 * @connection: A #GDBusConnection.
 *
 * Gets the capabilities negotiated with the remote peer
 *
 * Returns: Zero or more flags from the #GDBusCapabilityFlags enumeration.
 * Since: 2.26
 */


/**
 * g_dbus_connection_get_exit_on_close:
 * @connection: A #GDBusConnection.
 *
 * Gets whether the process is terminated when @connection is
 * closed by the remote peer. See
 * #GDBusConnection:exit-on-close for more details.
 *
 * Returns: Whether the process is terminated when @connection is closed by the remote peer.
 * Since: 2.26
 */


/**
 * g_dbus_connection_get_guid:
 * @connection: A #GDBusConnection.
 *
 * The GUID of the peer performing the role of server when
 * authenticating. See #GDBusConnection:guid for more details.
 *
 * Returns: The GUID. Do not free this string, it is owned by @connection.
 * Since: 2.26
 */


/**
 * g_dbus_connection_get_peer_credentials:
 * @connection: A #GDBusConnection.
 *
 * Gets the credentials of the authenticated peer. This will always
 * return %NULL unless @connection acted as a server
 * (e.g. %G_DBUS_CONNECTION_FLAGS_AUTHENTICATION_SERVER was passed)
 * when set up and the client passed credentials as part of the
 * authentication process.
 *
 * In a message bus setup, the message bus is always the server and
 * each application is a client. So this method will always return
 * %NULL for message bus clients.
 *
 * Returns: (transfer none): A #GCredentials or %NULL if not available. Do not free this object, it is owned by @connection.
 * Since: 2.26
 */


/**
 * g_dbus_connection_get_stream:
 * @connection: a #GDBusConnection
 *
 * Gets the underlying stream used for IO.
 *
 * While the #GDBusConnection is active, it will interact with this
 * stream from a worker thread, so it is not safe to interact with
 * the stream directly.
 *
 * Returns: (transfer none): the stream used for IO
 * Since: 2.26
 */


/**
 * g_dbus_connection_get_unique_name:
 * @connection: A #GDBusConnection.
 *
 * Gets the unique name of @connection as assigned by the message
 * bus. This can also be used to figure out if @connection is a
 * message bus connection.
 *
 * Returns: The unique name or %NULL if @connection is not a message bus connection. Do not free this string, it is owned by @connection.
 * Since: 2.26
 */


/**
 * g_dbus_connection_is_closed:
 * @connection: A #GDBusConnection.
 *
 * Gets whether @connection is closed.
 *
 * Returns: %TRUE if the connection is closed, %FALSE otherwise.
 * Since: 2.26
 */


/**
 * g_dbus_connection_new:
 * @stream: A #GIOStream.
 * @guid: (allow-none): The GUID to use if a authenticating as a server or %NULL.
 * @flags: Flags describing how to make the connection.
 * @observer: (allow-none): A #GDBusAuthObserver or %NULL.
 * @cancellable: (allow-none): A #GCancellable or %NULL.
 * @callback: A #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: The data to pass to @callback.
 *
 * Asynchronously sets up a D-Bus connection for exchanging D-Bus messages
 * with the end represented by @stream.
 *
 * If @stream is a #GSocketConnection, then the corresponding #GSocket
 * will be put into non-blocking mode.
 *
 * The D-Bus connection will interact with @stream from a worker thread.
 * As a result, the caller should not interact with @stream after this
 * method has been called, except by calling g_object_unref() on it.
 *
 * If @observer is not %NULL it may be used to control the
 * authentication process.
 *
 * When the operation is finished, @callback will be invoked. You can
 * then call g_dbus_connection_new_finish() to get the result of the
 * operation.
 *
 * This is a asynchronous failable constructor. See
 * g_dbus_connection_new_sync() for the synchronous
 * version.
 *
 * Since: 2.26
 */


/**
 * g_dbus_connection_new_finish:
 * @res: A #GAsyncResult obtained from the #GAsyncReadyCallback passed to g_dbus_connection_new().
 * @error: Return location for error or %NULL.
 *
 * Finishes an operation started with g_dbus_connection_new().
 *
 * Returns: A #GDBusConnection or %NULL if @error is set. Free with g_object_unref().
 * Since: 2.26
 */


/**
 * g_dbus_connection_new_for_address:
 * @address: A D-Bus address.
 * @flags: Flags describing how to make the connection.
 * @observer: (allow-none): A #GDBusAuthObserver or %NULL.
 * @cancellable: (allow-none): A #GCancellable or %NULL.
 * @callback: A #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: The data to pass to @callback.
 *
 * Asynchronously connects and sets up a D-Bus client connection for
 * exchanging D-Bus messages with an endpoint specified by @address
 * which must be in the D-Bus address format.
 *
 * This constructor can only be used to initiate client-side
 * connections - use g_dbus_connection_new() if you need to act as the
 * server. In particular, @flags cannot contain the
 * %G_DBUS_CONNECTION_FLAGS_AUTHENTICATION_SERVER or
 * %G_DBUS_CONNECTION_FLAGS_AUTHENTICATION_ALLOW_ANONYMOUS flags.
 *
 * When the operation is finished, @callback will be invoked. You can
 * then call g_dbus_connection_new_finish() to get the result of the
 * operation.
 *
 * If @observer is not %NULL it may be used to control the
 * authentication process.
 *
 * This is a asynchronous failable constructor. See
 * g_dbus_connection_new_for_address_sync() for the synchronous
 * version.
 *
 * Since: 2.26
 */


/**
 * g_dbus_connection_new_for_address_finish:
 * @res: A #GAsyncResult obtained from the #GAsyncReadyCallback passed to g_dbus_connection_new().
 * @error: Return location for error or %NULL.
 *
 * Finishes an operation started with g_dbus_connection_new_for_address().
 *
 * Returns: A #GDBusConnection or %NULL if @error is set. Free with g_object_unref().
 * Since: 2.26
 */


/**
 * g_dbus_connection_new_for_address_sync:
 * @address: A D-Bus address.
 * @flags: Flags describing how to make the connection.
 * @observer: (allow-none): A #GDBusAuthObserver or %NULL.
 * @cancellable: (allow-none): A #GCancellable or %NULL.
 * @error: Return location for error or %NULL.
 *
 * Synchronously connects and sets up a D-Bus client connection for
 * exchanging D-Bus messages with an endpoint specified by @address
 * which must be in the D-Bus address format.
 *
 * This constructor can only be used to initiate client-side
 * connections - use g_dbus_connection_new_sync() if you need to act
 * as the server. In particular, @flags cannot contain the
 * %G_DBUS_CONNECTION_FLAGS_AUTHENTICATION_SERVER or
 * %G_DBUS_CONNECTION_FLAGS_AUTHENTICATION_ALLOW_ANONYMOUS flags.
 *
 * This is a synchronous failable constructor. See
 * g_dbus_connection_new_for_address() for the asynchronous version.
 *
 * If @observer is not %NULL it may be used to control the
 * authentication process.
 *
 * Returns: A #GDBusConnection or %NULL if @error is set. Free with g_object_unref().
 * Since: 2.26
 */


/**
 * g_dbus_connection_new_sync:
 * @stream: A #GIOStream.
 * @guid: (allow-none): The GUID to use if a authenticating as a server or %NULL.
 * @flags: Flags describing how to make the connection.
 * @observer: (allow-none): A #GDBusAuthObserver or %NULL.
 * @cancellable: (allow-none): A #GCancellable or %NULL.
 * @error: Return location for error or %NULL.
 *
 * Synchronously sets up a D-Bus connection for exchanging D-Bus messages
 * with the end represented by @stream.
 *
 * If @stream is a #GSocketConnection, then the corresponding #GSocket
 * will be put into non-blocking mode.
 *
 * The D-Bus connection will interact with @stream from a worker thread.
 * As a result, the caller should not interact with @stream after this
 * method has been called, except by calling g_object_unref() on it.
 *
 * If @observer is not %NULL it may be used to control the
 * authentication process.
 *
 * This is a synchronous failable constructor. See
 * g_dbus_connection_new() for the asynchronous version.
 *
 * Returns: A #GDBusConnection or %NULL if @error is set. Free with g_object_unref().
 * Since: 2.26
 */


/**
 * g_dbus_connection_register_object:
 * @connection: A #GDBusConnection.
 * @object_path: The object path to register at.
 * @interface_info: Introspection data for the interface.
 * @vtable: (allow-none): A #GDBusInterfaceVTable to call into or %NULL.
 * @user_data: (allow-none): Data to pass to functions in @vtable.
 * @user_data_free_func: Function to call when the object path is unregistered.
 * @error: Return location for error or %NULL.
 *
 * Registers callbacks for exported objects at @object_path with the
 * D-Bus interface that is described in @interface_info.
 *
 * Calls to functions in @vtable (and @user_data_free_func) will
 * happen in the <link linkend="g-main-context-push-thread-default">thread-default main
 * loop</link> of the thread you are calling this method from.
 *
 * Note that all #GVariant values passed to functions in @vtable will match
 * the signature given in @interface_info - if a remote caller passes
 * incorrect values, the <literal>org.freedesktop.DBus.Error.InvalidArgs</literal>
 * is returned to the remote caller.
 *
 * Additionally, if the remote caller attempts to invoke methods or
 * access properties not mentioned in @interface_info the
 * <literal>org.freedesktop.DBus.Error.UnknownMethod</literal> resp.
 * <literal>org.freedesktop.DBus.Error.InvalidArgs</literal> errors
 * are returned to the caller.
 *
 * It is considered a programming error if the
 * #GDBusInterfaceGetPropertyFunc function in @vtable returns a
 * #GVariant of incorrect type.
 *
 * If an existing callback is already registered at @object_path and
 * @interface_name, then @error is set to #G_IO_ERROR_EXISTS.
 *
 * GDBus automatically implements the standard D-Bus interfaces
 * org.freedesktop.DBus.Properties, org.freedesktop.DBus.Introspectable
 * and org.freedesktop.Peer, so you don't have to implement those for
 * the objects you export. You <emphasis>can</emphasis> implement
 * org.freedesktop.DBus.Properties yourself, e.g. to handle getting
 * and setting of properties asynchronously.
 *
 * Note that the reference count on @interface_info will be
 * incremented by 1 (unless allocated statically, e.g. if the
 * reference count is -1, see g_dbus_interface_info_ref()) for as long
 * as the object is exported. Also note that @vtable will be copied.
 *
 * See <xref linkend="gdbus-server"/> for an example of how to use this method.
 *
 * Returns: 0 if @error is set, otherwise a registration id (never 0) that can be used with g_dbus_connection_unregister_object() .
 * Since: 2.26
 */


/**
 * g_dbus_connection_register_subtree:
 * @connection: A #GDBusConnection.
 * @object_path: The object path to register the subtree at.
 * @vtable: A #GDBusSubtreeVTable to enumerate, introspect and dispatch nodes in the subtree.
 * @flags: Flags used to fine tune the behavior of the subtree.
 * @user_data: Data to pass to functions in @vtable.
 * @user_data_free_func: Function to call when the subtree is unregistered.
 * @error: Return location for error or %NULL.
 *
 * Registers a whole subtree of <quote>dynamic</quote> objects.
 *
 * The @enumerate and @introspection functions in @vtable are used to
 * convey, to remote callers, what nodes exist in the subtree rooted
 * by @object_path.
 *
 * When handling remote calls into any node in the subtree, first the
 * @enumerate function is used to check if the node exists. If the node exists
 * or the #G_DBUS_SUBTREE_FLAGS_DISPATCH_TO_UNENUMERATED_NODES flag is set
 * the @introspection function is used to check if the node supports the
 * requested method. If so, the @dispatch function is used to determine
 * where to dispatch the call. The collected #GDBusInterfaceVTable and
 * #gpointer will be used to call into the interface vtable for processing
 * the request.
 *
 * All calls into user-provided code will be invoked in the <link
 * linkend="g-main-context-push-thread-default">thread-default main
 * loop</link> of the thread you are calling this method from.
 *
 * If an existing subtree is already registered at @object_path or
 * then @error is set to #G_IO_ERROR_EXISTS.
 *
 * Note that it is valid to register regular objects (using
 * g_dbus_connection_register_object()) in a subtree registered with
 * g_dbus_connection_register_subtree() - if so, the subtree handler
 * is tried as the last resort. One way to think about a subtree
 * handler is to consider it a <quote>fallback handler</quote>
 * for object paths not registered via g_dbus_connection_register_object()
 * or other bindings.
 *
 * Note that @vtable will be copied so you cannot change it after
 * registration.
 *
 * See <xref linkend="gdbus-subtree-server"/> for an example of how to use this method.
 *
 * Returns: 0 if @error is set, otherwise a subtree registration id (never 0) that can be used with g_dbus_connection_unregister_subtree() .
 * Since: 2.26
 */


/**
 * g_dbus_connection_remove_filter:
 * @connection: a #GDBusConnection
 * @filter_id: an identifier obtained from g_dbus_connection_add_filter()
 *
 * Removes a filter.
 *
 * Since: 2.26
 */


/**
 * g_dbus_connection_send_message:
 * @connection: A #GDBusConnection.
 * @message: A #GDBusMessage
 * @flags: Flags affecting how the message is sent.
 * @out_serial: (out) (allow-none): Return location for serial number assigned to @message when sending it or %NULL.
 * @error: Return location for error or %NULL.
 *
 * Asynchronously sends @message to the peer represented by @connection.
 *
 * Unless @flags contain the
 * %G_DBUS_SEND_MESSAGE_FLAGS_PRESERVE_SERIAL flag, the serial number
 * will be assigned by @connection and set on @message via
 * g_dbus_message_set_serial(). If @out_serial is not %NULL, then the
 * serial number used will be written to this location prior to
 * submitting the message to the underlying transport.
 *
 * If @connection is closed then the operation will fail with
 * %G_IO_ERROR_CLOSED. If @message is not well-formed,
 * the operation fails with %G_IO_ERROR_INVALID_ARGUMENT.
 *
 * See <xref linkend="gdbus-server"/> and <xref
 * linkend="gdbus-unix-fd-client"/> for an example of how to use this
 * low-level API to send and receive UNIX file descriptors.
 *
 * Note that @message must be unlocked, unless @flags contain the
 * %G_DBUS_SEND_MESSAGE_FLAGS_PRESERVE_SERIAL flag.
 *
 * Returns: %TRUE if the message was well-formed and queued for transmission, %FALSE if @error is set.
 * Since: 2.26
 */


/**
 * g_dbus_connection_send_message_with_reply:
 * @connection: A #GDBusConnection.
 * @message: A #GDBusMessage.
 * @flags: Flags affecting how the message is sent.
 * @timeout_msec: The timeout in milliseconds, -1 to use the default timeout or %G_MAXINT for no timeout.
 * @out_serial: (out) (allow-none): Return location for serial number assigned to @message when sending it or %NULL.
 * @cancellable: (allow-none): A #GCancellable or %NULL.
 * @callback: (allow-none): A #GAsyncReadyCallback to call when the request is satisfied or %NULL if you don't care about the result.
 * @user_data: The data to pass to @callback.
 *
 * Asynchronously sends @message to the peer represented by @connection.
 *
 * Unless @flags contain the
 * %G_DBUS_SEND_MESSAGE_FLAGS_PRESERVE_SERIAL flag, the serial number
 * will be assigned by @connection and set on @message via
 * g_dbus_message_set_serial(). If @out_serial is not %NULL, then the
 * serial number used will be written to this location prior to
 * submitting the message to the underlying transport.
 *
 * If @connection is closed then the operation will fail with
 * %G_IO_ERROR_CLOSED. If @cancellable is canceled, the operation will
 * fail with %G_IO_ERROR_CANCELLED. If @message is not well-formed,
 * the operation fails with %G_IO_ERROR_INVALID_ARGUMENT.
 *
 * This is an asynchronous method. When the operation is finished, @callback will be invoked
 * in the <link linkend="g-main-context-push-thread-default">thread-default main loop</link>
 * of the thread you are calling this method from. You can then call
 * g_dbus_connection_send_message_with_reply_finish() to get the result of the operation.
 * See g_dbus_connection_send_message_with_reply_sync() for the synchronous version.
 *
 * Note that @message must be unlocked, unless @flags contain the
 * %G_DBUS_SEND_MESSAGE_FLAGS_PRESERVE_SERIAL flag.
 *
 * See <xref linkend="gdbus-server"/> and <xref
 * linkend="gdbus-unix-fd-client"/> for an example of how to use this
 * low-level API to send and receive UNIX file descriptors.
 *
 * Since: 2.26
 */


/**
 * g_dbus_connection_send_message_with_reply_finish:
 * @connection: a #GDBusConnection
 * @res: A #GAsyncResult obtained from the #GAsyncReadyCallback passed to g_dbus_connection_send_message_with_reply().
 * @error: Return location for error or %NULL.
 *
 * Finishes an operation started with g_dbus_connection_send_message_with_reply().
 *
 * Note that @error is only set if a local in-process error
 * occurred. That is to say that the returned #GDBusMessage object may
 * be of type %G_DBUS_MESSAGE_TYPE_ERROR. Use
 * g_dbus_message_to_gerror() to transcode this to a #GError.
 *
 * See <xref linkend="gdbus-server"/> and <xref
 * linkend="gdbus-unix-fd-client"/> for an example of how to use this
 * low-level API to send and receive UNIX file descriptors.
 *
 * Returns: (transfer full): A locked #GDBusMessage or %NULL if @error is set.
 * Since: 2.26
 */


/**
 * g_dbus_connection_send_message_with_reply_sync:
 * @connection: A #GDBusConnection.
 * @message: A #GDBusMessage.
 * @flags: Flags affecting how the message is sent.
 * @timeout_msec: The timeout in milliseconds, -1 to use the default timeout or %G_MAXINT for no timeout.
 * @out_serial: (out) (allow-none): Return location for serial number assigned to @message when sending it or %NULL.
 * @cancellable: (allow-none): A #GCancellable or %NULL.
 * @error: Return location for error or %NULL.
 *
 * Synchronously sends @message to the peer represented by @connection
 * and blocks the calling thread until a reply is received or the
 * timeout is reached. See g_dbus_connection_send_message_with_reply()
 * for the asynchronous version of this method.
 *
 * Unless @flags contain the
 * %G_DBUS_SEND_MESSAGE_FLAGS_PRESERVE_SERIAL flag, the serial number
 * will be assigned by @connection and set on @message via
 * g_dbus_message_set_serial(). If @out_serial is not %NULL, then the
 * serial number used will be written to this location prior to
 * submitting the message to the underlying transport.
 *
 * If @connection is closed then the operation will fail with
 * %G_IO_ERROR_CLOSED. If @cancellable is canceled, the operation will
 * fail with %G_IO_ERROR_CANCELLED. If @message is not well-formed,
 * the operation fails with %G_IO_ERROR_INVALID_ARGUMENT.
 *
 * Note that @error is only set if a local in-process error
 * occurred. That is to say that the returned #GDBusMessage object may
 * be of type %G_DBUS_MESSAGE_TYPE_ERROR. Use
 * g_dbus_message_to_gerror() to transcode this to a #GError.
 *
 * See <xref linkend="gdbus-server"/> and <xref
 * linkend="gdbus-unix-fd-client"/> for an example of how to use this
 * low-level API to send and receive UNIX file descriptors.
 *
 * Note that @message must be unlocked, unless @flags contain the
 * %G_DBUS_SEND_MESSAGE_FLAGS_PRESERVE_SERIAL flag.
 *
 * Returns: (transfer full): A locked #GDBusMessage that is the reply to @message or %NULL if @error is set.
 * Since: 2.26
 */


/**
 * g_dbus_connection_set_exit_on_close:
 * @connection: A #GDBusConnection.
 * @exit_on_close: Whether the process should be terminated when @connection is closed by the remote peer.
 *
 * Sets whether the process should be terminated when @connection is
 * closed by the remote peer. See #GDBusConnection:exit-on-close for
 * more details.
 *
 * Note that this function should be used with care. Most modern UNIX
 * desktops tie the notion of a user session the session bus, and expect
 * all of a users applications to quit when their bus connection goes away.
 * If you are setting @exit_on_close to %FALSE for the shared session
 * bus connection, you should make sure that your application exits
 * when the user session ends.
 *
 * Since: 2.26
 */


/**
 * g_dbus_connection_signal_subscribe:
 * @connection: A #GDBusConnection.
 * @sender: (allow-none): Sender name to match on (unique or well-known name) or %NULL to listen from all senders.
 * @interface_name: (allow-none): D-Bus interface name to match on or %NULL to match on all interfaces.
 * @member: (allow-none): D-Bus signal name to match on or %NULL to match on all signals.
 * @object_path: (allow-none): Object path to match on or %NULL to match on all object paths.
 * @arg0: (allow-none): Contents of first string argument to match on or %NULL to match on all kinds of arguments.
 * @flags: Flags describing how to subscribe to the signal (currently unused).
 * @callback: Callback to invoke when there is a signal matching the requested data.
 * @user_data: User data to pass to @callback.
 * @user_data_free_func: (allow-none): Function to free @user_data with when subscription is removed or %NULL.
 *
 * Subscribes to signals on @connection and invokes @callback with a
 * whenever the signal is received. Note that @callback
 * will be invoked in the <link
 * linkend="g-main-context-push-thread-default">thread-default main
 * loop</link> of the thread you are calling this method from.
 *
 * If @connection is not a message bus connection, @sender must be
 * %NULL.
 *
 * If @sender is a well-known name note that @callback is invoked with
 * the unique name for the owner of @sender, not the well-known name
 * as one would expect. This is because the message bus rewrites the
 * name. As such, to avoid certain race conditions, users should be
 * tracking the name owner of the well-known name and use that when
 * processing the received signal.
 *
 * Returns: A subscription identifier that can be used with g_dbus_connection_signal_unsubscribe().
 * Since: 2.26
 */


/**
 * g_dbus_connection_signal_unsubscribe:
 * @connection: A #GDBusConnection.
 * @subscription_id: A subscription id obtained from g_dbus_connection_signal_subscribe().
 *
 * Unsubscribes from signals.
 *
 * Since: 2.26
 */


/**
 * g_dbus_connection_start_message_processing:
 * @connection: A #GDBusConnection.
 *
 * If @connection was created with
 * %G_DBUS_CONNECTION_FLAGS_DELAY_MESSAGE_PROCESSING, this method
 * starts processing messages. Does nothing on if @connection wasn't
 * created with this flag or if the method has already been called.
 *
 * Since: 2.26
 */


/**
 * g_dbus_connection_unexport_action_group:
 * @connection: a #GDBusConnection
 * @export_id: the ID from g_dbus_connection_export_action_group()
 *
 * Reverses the effect of a previous call to
 * g_dbus_connection_export_action_group().
 *
 * It is an error to call this function with an ID that wasn't returned
 * from g_dbus_connection_export_action_group() or to call it with the
 * same ID more than once.
 *
 * Since: 2.32
 */


/**
 * g_dbus_connection_unexport_menu_model:
 * @connection: a #GDBusConnection
 * @export_id: the ID from g_dbus_connection_export_menu_model()
 *
 * Reverses the effect of a previous call to
 * g_dbus_connection_export_menu_model().
 *
 * It is an error to call this function with an ID that wasn't returned
 * from g_dbus_connection_export_menu_model() or to call it with the
 * same ID more than once.
 *
 * Since: 2.32
 */


/**
 * g_dbus_connection_unregister_object:
 * @connection: A #GDBusConnection.
 * @registration_id: A registration id obtained from g_dbus_connection_register_object().
 *
 * Unregisters an object.
 *
 * Returns: %TRUE if the object was unregistered, %FALSE otherwise.
 * Since: 2.26
 */


/**
 * g_dbus_connection_unregister_subtree:
 * @connection: A #GDBusConnection.
 * @registration_id: A subtree registration id obtained from g_dbus_connection_register_subtree().
 *
 * Unregisters a subtree.
 *
 * Returns: %TRUE if the subtree was unregistered, %FALSE otherwise.
 * Since: 2.26
 */


/**
 * g_dbus_error_encode_gerror:
 * @error: A #GError.
 *
 * Creates a D-Bus error name to use for @error. If @error matches
 * a registered error (cf. g_dbus_error_register_error()), the corresponding
 * D-Bus error name will be returned.
 *
 * Otherwise the a name of the form
 * <literal>org.gtk.GDBus.UnmappedGError.Quark._ESCAPED_QUARK_NAME.Code_ERROR_CODE</literal>
 * will be used. This allows other GDBus applications to map the error
 * on the wire back to a #GError using g_dbus_error_new_for_dbus_error().
 *
 * This function is typically only used in object mappings to put a
 * #GError on the wire. Regular applications should not use it.
 *
 * Returns: A D-Bus error name (never %NULL). Free with g_free().
 * Since: 2.26
 */


/**
 * g_dbus_error_get_remote_error:
 * @error: A #GError.
 *
 * Gets the D-Bus error name used for @error, if any.
 *
 * This function is guaranteed to return a D-Bus error name for all
 * #GError<!-- -->s returned from functions handling remote method
 * calls (e.g. g_dbus_connection_call_finish()) unless
 * g_dbus_error_strip_remote_error() has been used on @error.
 *
 * Returns: An allocated string or %NULL if the D-Bus error name could not be found. Free with g_free().
 * Since: 2.26
 */


/**
 * g_dbus_error_is_remote_error:
 * @error: A #GError.
 *
 * Checks if @error represents an error received via D-Bus from a remote peer. If so,
 * use g_dbus_error_get_remote_error() to get the name of the error.
 *
 * Returns: %TRUE if @error represents an error from a remote peer, %FALSE otherwise.
 * Since: 2.26
 */


/**
 * g_dbus_error_new_for_dbus_error:
 * @dbus_error_name: D-Bus error name.
 * @dbus_error_message: D-Bus error message.
 *
 * Creates a #GError based on the contents of @dbus_error_name and
 * @dbus_error_message.
 *
 * Errors registered with g_dbus_error_register_error() will be looked
 * up using @dbus_error_name and if a match is found, the error domain
 * and code is used. Applications can use g_dbus_error_get_remote_error()
 * to recover @dbus_error_name.
 *
 * If a match against a registered error is not found and the D-Bus
 * error name is in a form as returned by g_dbus_error_encode_gerror()
 * the error domain and code encoded in the name is used to
 * create the #GError. Also, @dbus_error_name is added to the error message
 * such that it can be recovered with g_dbus_error_get_remote_error().
 *
 * Otherwise, a #GError with the error code %G_IO_ERROR_DBUS_ERROR
 * in the #G_IO_ERROR error domain is returned. Also, @dbus_error_name is
 * added to the error message such that it can be recovered with
 * g_dbus_error_get_remote_error().
 *
 * In all three cases, @dbus_error_name can always be recovered from the
 * returned #GError using the g_dbus_error_get_remote_error() function
 * (unless g_dbus_error_strip_remote_error() hasn't been used on the returned error).
 *
 * This function is typically only used in object mappings to prepare
 * #GError instances for applications. Regular applications should not use
 * it.
 *
 * Returns: An allocated #GError. Free with g_error_free().
 * Since: 2.26
 */


/**
 * g_dbus_error_register_error:
 * @error_domain: A #GQuark for a error domain.
 * @error_code: An error code.
 * @dbus_error_name: A D-Bus error name.
 *
 * Creates an association to map between @dbus_error_name and
 * #GError<!-- -->s specified by @error_domain and @error_code.
 *
 * This is typically done in the routine that returns the #GQuark for
 * an error domain.
 *
 * Returns: %TRUE if the association was created, %FALSE if it already exists.
 * Since: 2.26
 */


/**
 * g_dbus_error_register_error_domain:
 * @error_domain_quark_name: The error domain name.
 * @quark_volatile: A pointer where to store the #GQuark.
 * @entries: A pointer to @num_entries #GDBusErrorEntry struct items.
 * @num_entries: Number of items to register.
 *
 * Helper function for associating a #GError error domain with D-Bus error names.
 *
 * Since: 2.26
 */


/**
 * g_dbus_error_set_dbus_error:
 * @error: A pointer to a #GError or %NULL.
 * @dbus_error_name: D-Bus error name.
 * @dbus_error_message: D-Bus error message.
 * @format: (allow-none): printf()-style format to prepend to @dbus_error_message or %NULL.
 * @...: Arguments for @format.
 *
 * Does nothing if @error is %NULL. Otherwise sets *@error to
 * a new #GError created with g_dbus_error_new_for_dbus_error()
 * with @dbus_error_message prepend with @format (unless %NULL).
 *
 * Since: 2.26
 */


/**
 * g_dbus_error_set_dbus_error_valist:
 * @error: A pointer to a #GError or %NULL.
 * @dbus_error_name: D-Bus error name.
 * @dbus_error_message: D-Bus error message.
 * @format: (allow-none): printf()-style format to prepend to @dbus_error_message or %NULL.
 * @var_args: Arguments for @format.
 *
 * Like g_dbus_error_set_dbus_error() but intended for language bindings.
 *
 * Since: 2.26
 */


/**
 * g_dbus_error_strip_remote_error:
 * @error: A #GError.
 *
 * Looks for extra information in the error message used to recover
 * the D-Bus error name and strips it if found. If stripped, the
 * message field in @error will correspond exactly to what was
 * received on the wire.
 *
 * This is typically used when presenting errors to the end user.
 *
 * Returns: %TRUE if information was stripped, %FALSE otherwise.
 * Since: 2.26
 */


/**
 * g_dbus_error_unregister_error:
 * @error_domain: A #GQuark for a error domain.
 * @error_code: An error code.
 * @dbus_error_name: A D-Bus error name.
 *
 * Destroys an association previously set up with g_dbus_error_register_error().
 *
 * Returns: %TRUE if the association was destroyed, %FALSE if it wasn't found.
 * Since: 2.26
 */


/**
 * g_dbus_generate_guid:
 *
 * Generate a D-Bus GUID that can be used with
 * e.g. g_dbus_connection_new().
 *
 * See the D-Bus specification regarding what strings are valid D-Bus
 * GUID (for example, D-Bus GUIDs are not RFC-4122 compliant).
 *
 * Returns: A valid D-Bus GUID. Free with g_free().
 * Since: 2.26
 */


/**
 * g_dbus_gvalue_to_gvariant:
 * @gvalue: A #GValue to convert to a #GVariant.
 * @type: A #GVariantType.
 *
 * Converts a #GValue to a #GVariant of the type indicated by the @type parameter.
 *
 * The conversion is using the following rules:
 * <table frame='all'>
 *   <title>#GValue / #GVariant conversion rules</title>
 *   <tgroup cols='2' align='left' colsep='1' rowsep='1'>
 *     <thead>
 *       <row>
 *         <entry>If the #GType for @gvalue is...</entry>
 *         <entry>... then @type must be</entry>
 *       </row>
 *     </thead>
 *     <tbody>
 *       <row>
 *         <entry>#G_TYPE_STRING</entry>
 *         <entry><link linkend="G-VARIANT-TYPE-STRING:CAPS">'s'</link>, <link linkend="G-VARIANT-TYPE-OBJECT-PATH:CAPS">'o'</link>, <link linkend="G-VARIANT-TYPE-SIGNATURE:CAPS">'g'</link> or <link linkend="G-VARIANT-TYPE-BYTESTRING:CAPS">'ay'</link></entry>
 *       </row>
 *       <row>
 *         <entry>#G_TYPE_STRV</entry>
 *         <entry><link linkend="G-VARIANT-TYPE-STRING-ARRAY:CAPS">'as'</link>, <link linkend="G-VARIANT-TYPE-OBJECT-PATH-ARRAY:CAPS">'ao'</link> or <link linkend="G-VARIANT-TYPE-BYTESTRING-ARRAY:CAPS">'aay'</link></entry>
 *       </row>
 *       <row>
 *         <entry>#G_TYPE_BOOLEAN</entry>
 *         <entry><link linkend="G-VARIANT-TYPE-BOOLEAN:CAPS">'b'</link></entry>
 *       </row>
 *       <row>
 *         <entry>#G_TYPE_UCHAR</entry>
 *         <entry><link linkend="G-VARIANT-TYPE-BYTE:CAPS">'y'</link></entry>
 *       </row>
 *       <row>
 *         <entry>#G_TYPE_INT</entry>
 *         <entry><link linkend="G-VARIANT-TYPE-INT32:CAPS">'i'</link> or <link linkend="G-VARIANT-TYPE-INT16:CAPS">'n'</link></entry>
 *       </row>
 *       <row>
 *         <entry>#G_TYPE_UINT</entry>
 *         <entry><link linkend="G-VARIANT-TYPE-UINT32:CAPS">'u'</link> or <link linkend="G-VARIANT-TYPE-UINT16:CAPS">'q'</link></entry>
 *       </row>
 *       <row>
 *         <entry>#G_TYPE_INT64</entry>
 *         <entry><link linkend="G-VARIANT-TYPE-INT64:CAPS">'x'</link></entry>
 *       </row>
 *       <row>
 *         <entry>#G_TYPE_UINT64</entry>
 *         <entry><link linkend="G-VARIANT-TYPE-UINT64:CAPS">'t'</link></entry>
 *       </row>
 *       <row>
 *         <entry>#G_TYPE_DOUBLE</entry>
 *         <entry><link linkend="G-VARIANT-TYPE-DOUBLE:CAPS">'d'</link></entry>
 *       </row>
 *       <row>
 *         <entry>#G_TYPE_VARIANT</entry>
 *         <entry>Any #GVariantType</entry>
 *       </row>
 *     </tbody>
 *   </tgroup>
 * </table>
 * This can fail if e.g. @gvalue is of type #G_TYPE_STRING and @type
 * is <link linkend="G-VARIANT-TYPE-INT32:CAPS">'i'</link>. It will
 * also fail for any #GType (including e.g. #G_TYPE_OBJECT and
 * #G_TYPE_BOXED derived-types) not in the table above.
 *
 * Note that if @gvalue is of type #G_TYPE_VARIANT and its value is
 * %NULL, the <emphasis>empty</emphasis> #GVariant instance (never
 * %NULL) for @type is returned (e.g. 0 for scalar types, the empty
 * string for string types, <literal>'/'</literal> for object path
 * types, the empty array for any array type and so on).
 *
 * See the g_dbus_gvariant_to_gvalue() function for how to convert a
 * #GVariant to a #GValue.
 *
 * Returns: A #GVariant (never floating) of #GVariantType @type holding the data from @gvalue or %NULL in case of failure. Free with g_variant_unref().
 * Since: 2.30
 */


/**
 * g_dbus_gvariant_to_gvalue:
 * @value: A #GVariant.
 * @out_gvalue: Return location pointing to a zero-filled (uninitialized) #GValue.
 *
 * Converts a #GVariant to a #GValue. If @value is floating, it is consumed.
 *
 * The rules specified in the g_dbus_gvalue_to_gvariant() function are
 * used - this function is essentially its reverse form.
 *
 * The conversion never fails - a valid #GValue is always returned in
 * @out_gvalue.
 *
 * Since: 2.30
 */


/**
 * g_dbus_interface_dup_object:
 * @interface_: An exported D-Bus interface.
 *
 * Gets the #GDBusObject that @interface_ belongs to, if any.
 *
 * Returns: (transfer full): A #GDBusObject or %NULL. The returned reference should be freed with g_object_unref().
 * Since: 2.32
 * Rename to: g_dbus_interface_get_object
 */


/**
 * g_dbus_interface_get_info:
 * @interface_: An exported D-Bus interface.
 *
 * Gets D-Bus introspection information for the D-Bus interface
 * implemented by @interface_.
 *
 * Returns: (transfer none): A #GDBusInterfaceInfo. Do not free.
 * Since: 2.30
 */


/**
 * g_dbus_interface_get_object: (skip)
 * @interface_: An exported D-Bus interface.
 *
 * Gets the #GDBusObject that @interface_ belongs to, if any.
 *
 * <warning>It is not safe to use the returned object if @interface_
 * or the returned object is being used from other threads. See
 * g_dbus_interface_dup_object() for a thread-safe
 * alternative.</warning>
 *
 * Returns: (transfer none): A #GDBusObject or %NULL. The returned reference belongs to @interface_ and should not be freed.
 * Since: 2.30
 */


/**
 * g_dbus_interface_info_cache_build:
 * @info: A #GDBusInterfaceInfo.
 *
 * Builds a lookup-cache to speed up
 * g_dbus_interface_info_lookup_method(),
 * g_dbus_interface_info_lookup_signal() and
 * g_dbus_interface_info_lookup_property().
 *
 * If this has already been called with @info, the existing cache is
 * used and its use count is increased.
 *
 * Note that @info cannot be modified until
 * g_dbus_interface_info_cache_release() is called.
 *
 * Since: 2.30
 */


/**
 * g_dbus_interface_info_cache_release:
 * @info: A GDBusInterfaceInfo
 *
 * Decrements the usage count for the cache for @info built by
 * g_dbus_interface_info_cache_build() (if any) and frees the
 * resources used by the cache if the usage count drops to zero.
 *
 * Since: 2.30
 */


/**
 * g_dbus_interface_info_generate_xml:
 * @info: A #GDBusNodeInfo
 * @indent: Indentation level.
 * @string_builder: (out): A #GString to to append XML data to.
 *
 * Appends an XML representation of @info (and its children) to @string_builder.
 *
 * This function is typically used for generating introspection XML
 * documents at run-time for handling the
 * <literal>org.freedesktop.DBus.Introspectable.Introspect</literal>
 * method.
 *
 * Since: 2.26
 */


/**
 * g_dbus_interface_info_lookup_method:
 * @info: A #GDBusInterfaceInfo.
 * @name: A D-Bus method name (typically in CamelCase)
 *
 * Looks up information about a method.
 *
 * This cost of this function is O(n) in number of methods unless
 * g_dbus_interface_info_cache_build() has been used on @info.
 *
 * Returns: (transfer none): A #GDBusMethodInfo or %NULL if not found. Do not free, it is owned by @info.
 * Since: 2.26
 */


/**
 * g_dbus_interface_info_lookup_property:
 * @info: A #GDBusInterfaceInfo.
 * @name: A D-Bus property name (typically in CamelCase).
 *
 * Looks up information about a property.
 *
 * This cost of this function is O(n) in number of properties unless
 * g_dbus_interface_info_cache_build() has been used on @info.
 *
 * Returns: (transfer none): A #GDBusPropertyInfo or %NULL if not found. Do not free, it is owned by @info.
 * Since: 2.26
 */


/**
 * g_dbus_interface_info_lookup_signal:
 * @info: A #GDBusInterfaceInfo.
 * @name: A D-Bus signal name (typically in CamelCase)
 *
 * Looks up information about a signal.
 *
 * This cost of this function is O(n) in number of signals unless
 * g_dbus_interface_info_cache_build() has been used on @info.
 *
 * Returns: (transfer none): A #GDBusSignalInfo or %NULL if not found. Do not free, it is owned by @info.
 * Since: 2.26
 */


/**
 * g_dbus_interface_info_ref:
 * @info: A #GDBusInterfaceInfo
 *
 * If @info is statically allocated does nothing. Otherwise increases
 * the reference count.
 *
 * Returns: The same @info.
 * Since: 2.26
 */


/**
 * g_dbus_interface_info_unref:
 * @info: A #GDBusInterfaceInfo.
 *
 * If @info is statically allocated, does nothing. Otherwise decreases
 * the reference count of @info. When its reference count drops to 0,
 * the memory used is freed.
 *
 * Since: 2.26
 */


/**
 * g_dbus_interface_set_object:
 * @interface_: An exported D-Bus interface.
 * @object: (allow-none): A #GDBusObject or %NULL.
 *
 * Sets the #GDBusObject for @interface_ to @object.
 *
 * Note that @interface_ will hold a weak reference to @object.
 *
 * Since: 2.30
 */


/**
 * g_dbus_interface_skeleton_export:
 * @interface_: The D-Bus interface to export.
 * @connection: A #GDBusConnection to export @interface_ on.
 * @object_path: The path to export the interface at.
 * @error: Return location for error or %NULL.
 *
 * Exports @interface_ at @object_path on @connection.
 *
 * This can be called multiple times to export the same @interface_
 * onto multiple connections however the @object_path provided must be
 * the same for all connections.
 *
 * Use g_dbus_interface_skeleton_unexport() to unexport the object.
 *
 * Returns: %TRUE if the interface was exported on @connection, otherwise %FALSE with @error set.
 * Since: 2.30
 */


/**
 * g_dbus_interface_skeleton_flush:
 * @interface_: A #GDBusInterfaceSkeleton.
 *
 * If @interface_ has outstanding changes, request for these changes to be
 * emitted immediately.
 *
 * For example, an exported D-Bus interface may queue up property
 * changes and emit the
 * <literal>org.freedesktop.DBus.Properties::PropertiesChanged</literal>
 * signal later (e.g. in an idle handler). This technique is useful
 * for collapsing multiple property changes into one.
 *
 * Since: 2.30
 */


/**
 * g_dbus_interface_skeleton_get_connection:
 * @interface_: A #GDBusInterfaceSkeleton.
 *
 * Gets the first connection that @interface_ is exported on, if any.
 *
 * Returns: (transfer none): A #GDBusConnection or %NULL if @interface_ is not exported anywhere. Do not free, the object belongs to @interface_.
 * Since: 2.30
 */


/**
 * g_dbus_interface_skeleton_get_connections:
 * @interface_: A #GDBusInterfaceSkeleton.
 *
 * Gets a list of the connections that @interface_ is exported on.
 *
 * Returns: (element-type GDBusConnection) (transfer full): A list of all the connections that @interface_ is exported on. The returned list should be freed with g_list_free() after each element has been freed with g_object_unref().
 * Since: 2.32
 */


/**
 * g_dbus_interface_skeleton_get_flags:
 * @interface_: A #GDBusInterfaceSkeleton.
 *
 * Gets the #GDBusInterfaceSkeletonFlags that describes what the behavior
 * of @interface_
 *
 * Returns: One or more flags from the #GDBusInterfaceSkeletonFlags enumeration.
 * Since: 2.30
 */


/**
 * g_dbus_interface_skeleton_get_info:
 * @interface_: A #GDBusInterfaceSkeleton.
 *
 * Gets D-Bus introspection information for the D-Bus interface
 * implemented by @interface_.
 *
 * Returns: (transfer none): A #GDBusInterfaceInfo (never %NULL). Do not free.
 * Since: 2.30
 */


/**
 * g_dbus_interface_skeleton_get_object_path:
 * @interface_: A #GDBusInterfaceSkeleton.
 *
 * Gets the object path that @interface_ is exported on, if any.
 *
 * Returns: A string owned by @interface_ or %NULL if @interface_ is not exported anywhere. Do not free, the string belongs to @interface_.
 * Since: 2.30
 */


/**
 * g_dbus_interface_skeleton_get_properties:
 * @interface_: A #GDBusInterfaceSkeleton.
 *
 * Gets all D-Bus properties for @interface_.
 *
 * Returns: (transfer full): A #GVariant of type <link linkend="G-VARIANT-TYPE-VARDICT:CAPS">'a{sv}'</link>. Free with g_variant_unref().
 * Since: 2.30
 */


/**
 * g_dbus_interface_skeleton_get_vtable: (skip)
 * @interface_: A #GDBusInterfaceSkeleton.
 *
 * Gets the interface vtable for the D-Bus interface implemented by
 * @interface_. The returned function pointers should expect @interface_
 * itself to be passed as @user_data.
 *
 * Returns: A #GDBusInterfaceVTable (never %NULL).
 * Since: 2.30
 */


/**
 * g_dbus_interface_skeleton_has_connection:
 * @interface_: A #GDBusInterfaceSkeleton.
 * @connection: A #GDBusConnection.
 *
 * Checks if @interface_ is export on @connection.
 *
 * Returns: %TRUE if @interface_ is exported on @connection, %FALSE otherwise.
 * Since: 2.32
 */


/**
 * g_dbus_interface_skeleton_set_flags:
 * @interface_: A #GDBusInterfaceSkeleton.
 * @flags: Flags from the #GDBusInterfaceSkeletonFlags enumeration.
 *
 * Sets flags describing what the behavior of @skeleton should be.
 *
 * Since: 2.30
 */


/**
 * g_dbus_interface_skeleton_unexport:
 * @interface_: A #GDBusInterfaceSkeleton.
 *
 * Stops exporting @interface_ on all connections it is exported on.
 *
 * To unexport @interface_ from only a single connection, use
 * g_dbus_interface_skeleton_unexport_from_connection()
 *
 * Since: 2.30
 */


/**
 * g_dbus_interface_skeleton_unexport_from_connection:
 * @interface_: A #GDBusInterfaceSkeleton.
 * @connection: A #GDBusConnection.
 *
 * Stops exporting @interface_ on @connection.
 *
 * To stop exporting on all connections the interface is exported on,
 * use g_dbus_interface_skeleton_unexport().
 *
 * Since: 2.32
 */


/**
 * g_dbus_is_address:
 * @string: A string.
 *
 * Checks if @string is a D-Bus address.
 *
 * This doesn't check if @string is actually supported by #GDBusServer
 * or #GDBusConnection - use g_dbus_is_supported_address() to do more
 * checks.
 *
 * Returns: %TRUE if @string is a valid D-Bus address, %FALSE otherwise.
 * Since: 2.26
 */


/**
 * g_dbus_is_guid:
 * @string: The string to check.
 *
 * Checks if @string is a D-Bus GUID.
 *
 * See the D-Bus specification regarding what strings are valid D-Bus
 * GUID (for example, D-Bus GUIDs are not RFC-4122 compliant).
 *
 * Returns: %TRUE if @string is a guid, %FALSE otherwise.
 * Since: 2.26
 */


/**
 * g_dbus_is_interface_name:
 * @string: The string to check.
 *
 * Checks if @string is a valid D-Bus interface name.
 *
 * Returns: %TRUE if valid, %FALSE otherwise.
 * Since: 2.26
 */


/**
 * g_dbus_is_member_name:
 * @string: The string to check.
 *
 * Checks if @string is a valid D-Bus member (e.g. signal or method) name.
 *
 * Returns: %TRUE if valid, %FALSE otherwise.
 * Since: 2.26
 */


/**
 * g_dbus_is_name:
 * @string: The string to check.
 *
 * Checks if @string is a valid D-Bus bus name (either unique or well-known).
 *
 * Returns: %TRUE if valid, %FALSE otherwise.
 * Since: 2.26
 */


/**
 * g_dbus_is_supported_address:
 * @string: A string.
 * @error: Return location for error or %NULL.
 *
 * Like g_dbus_is_address() but also checks if the library suppors the
 * transports in @string and that key/value pairs for each transport
 * are valid.
 *
 * Returns: %TRUE if @string is a valid D-Bus address that is supported by this library, %FALSE if @error is set.
 * Since: 2.26
 */


/**
 * g_dbus_is_unique_name:
 * @string: The string to check.
 *
 * Checks if @string is a valid D-Bus unique bus name.
 *
 * Returns: %TRUE if valid, %FALSE otherwise.
 * Since: 2.26
 */


/**
 * g_dbus_menu_model_get:
 * @connection: a #GDBusConnection
 * @bus_name: the bus name which exports the menu model
 * @object_path: the object path at which the menu model is exported
 *
 * Obtains a #GDBusMenuModel for the menu model which is exported
 * at the given @bus_name and @object_path.
 *
 * The thread default main context is taken at the time of this call.
 * All signals on the menu model (and any linked models) are reported
 * with respect to this context.  All calls on the returned menu model
 * (and linked models) must also originate from this same context, with
 * the thread default main context unchanged.
 *
 * Returns: (transfer full): a #GDBusMenuModel object. Free with g_object_unref().
 * Since: 2.32
 */


/**
 * g_dbus_message_bytes_needed:
 * @blob: (array length=blob_len) (element-type guint8): A blob represent a binary D-Bus message.
 * @blob_len: The length of @blob (must be at least 16).
 * @error: Return location for error or %NULL.
 *
 * Utility function to calculate how many bytes are needed to
 * completely deserialize the D-Bus message stored at @blob.
 *
 * Returns: Number of bytes needed or -1 if @error is set (e.g. if @blob contains invalid data or not enough data is available to determine the size).
 * Since: 2.26
 */


/**
 * g_dbus_message_copy:
 * @message: A #GDBusMessage.
 * @error: Return location for error or %NULL.
 *
 * Copies @message. The copy is a deep copy and the returned
 * #GDBusMessage is completely identical except that it is guaranteed
 * to not be locked.
 *
 * This operation can fail if e.g. @message contains file descriptors
 * and the per-process or system-wide open files limit is reached.
 *
 * Returns: (transfer full): A new #GDBusMessage or %NULL if @error is set. Free with g_object_unref().
 * Since: 2.26
 */


/**
 * g_dbus_message_get_arg0:
 * @message: A #GDBusMessage.
 *
 * Convenience to get the first item in the body of @message.
 *
 * Returns: The string item or %NULL if the first item in the body of @message is not a string.
 * Since: 2.26
 */


/**
 * g_dbus_message_get_body:
 * @message: A #GDBusMessage.
 *
 * Gets the body of a message.
 *
 * Returns: A #GVariant or %NULL if the body is empty. Do not free, it is owned by @message.
 * Since: 2.26
 */


/**
 * g_dbus_message_get_byte_order:
 * @message: A #GDBusMessage.
 *
 * Gets the byte order of @message.
 *
 * Returns: The byte order.
 */


/**
 * g_dbus_message_get_destination:
 * @message: A #GDBusMessage.
 *
 * Convenience getter for the %G_DBUS_MESSAGE_HEADER_FIELD_DESTINATION header field.
 *
 * Returns: The value.
 * Since: 2.26
 */


/**
 * g_dbus_message_get_error_name:
 * @message: A #GDBusMessage.
 *
 * Convenience getter for the %G_DBUS_MESSAGE_HEADER_FIELD_ERROR_NAME header field.
 *
 * Returns: The value.
 * Since: 2.26
 */


/**
 * g_dbus_message_get_flags:
 * @message: A #GDBusMessage.
 *
 * Gets the flags for @message.
 *
 * Returns: Flags that are set (typically values from the #GDBusMessageFlags enumeration bitwise ORed together).
 * Since: 2.26
 */


/**
 * g_dbus_message_get_header:
 * @message: A #GDBusMessage.
 * @header_field: A 8-bit unsigned integer (typically a value from the #GDBusMessageHeaderField enumeration)
 *
 * Gets a header field on @message.
 *
 * Returns: A #GVariant with the value if the header was found, %NULL otherwise. Do not free, it is owned by @message.
 * Since: 2.26
 */


/**
 * g_dbus_message_get_header_fields:
 * @message: A #GDBusMessage.
 *
 * Gets an array of all header fields on @message that are set.
 *
 * Returns: (array zero-terminated=1): An array of header fields terminated by %G_DBUS_MESSAGE_HEADER_FIELD_INVALID.  Each element is a #guchar. Free with g_free().
 * Since: 2.26
 */


/**
 * g_dbus_message_get_interface:
 * @message: A #GDBusMessage.
 *
 * Convenience getter for the %G_DBUS_MESSAGE_HEADER_FIELD_INTERFACE header field.
 *
 * Returns: The value.
 * Since: 2.26
 */


/**
 * g_dbus_message_get_locked:
 * @message: A #GDBusMessage.
 *
 * Checks whether @message is locked. To monitor changes to this
 * value, conncet to the #GObject::notify signal to listen for changes
 * on the #GDBusMessage:locked property.
 *
 * Returns: %TRUE if @message is locked, %FALSE otherwise.
 * Since: 2.26
 */


/**
 * g_dbus_message_get_member:
 * @message: A #GDBusMessage.
 *
 * Convenience getter for the %G_DBUS_MESSAGE_HEADER_FIELD_MEMBER header field.
 *
 * Returns: The value.
 * Since: 2.26
 */


/**
 * g_dbus_message_get_message_type:
 * @message: A #GDBusMessage.
 *
 * Gets the type of @message.
 *
 * Returns: A 8-bit unsigned integer (typically a value from the #GDBusMessageType enumeration).
 * Since: 2.26
 */


/**
 * g_dbus_message_get_num_unix_fds:
 * @message: A #GDBusMessage.
 *
 * Convenience getter for the %G_DBUS_MESSAGE_HEADER_FIELD_NUM_UNIX_FDS header field.
 *
 * Returns: The value.
 * Since: 2.26
 */


/**
 * g_dbus_message_get_path:
 * @message: A #GDBusMessage.
 *
 * Convenience getter for the %G_DBUS_MESSAGE_HEADER_FIELD_PATH header field.
 *
 * Returns: The value.
 * Since: 2.26
 */


/**
 * g_dbus_message_get_reply_serial:
 * @message: A #GDBusMessage.
 *
 * Convenience getter for the %G_DBUS_MESSAGE_HEADER_FIELD_REPLY_SERIAL header field.
 *
 * Returns: The value.
 * Since: 2.26
 */


/**
 * g_dbus_message_get_sender:
 * @message: A #GDBusMessage.
 *
 * Convenience getter for the %G_DBUS_MESSAGE_HEADER_FIELD_SENDER header field.
 *
 * Returns: The value.
 * Since: 2.26
 */


/**
 * g_dbus_message_get_serial:
 * @message: A #GDBusMessage.
 *
 * Gets the serial for @message.
 *
 * Returns: A #guint32.
 * Since: 2.26
 */


/**
 * g_dbus_message_get_signature:
 * @message: A #GDBusMessage.
 *
 * Convenience getter for the %G_DBUS_MESSAGE_HEADER_FIELD_SIGNATURE header field.
 *
 * Returns: The value.
 * Since: 2.26
 */


/**
 * g_dbus_message_get_unix_fd_list:
 * @message: A #GDBusMessage.
 *
 * Gets the UNIX file descriptors associated with @message, if any.
 *
 * This method is only available on UNIX.
 *
 * Returns: (transfer none): A #GUnixFDList or %NULL if no file descriptors are associated. Do not free, this object is owned by @message.
 * Since: 2.26
 */


/**
 * g_dbus_message_lock:
 * @message: A #GDBusMessage.
 *
 * If @message is locked, does nothing. Otherwise locks the message.
 *
 * Since: 2.26
 */


/**
 * g_dbus_message_new:
 *
 * Creates a new empty #GDBusMessage.
 *
 * Returns: A #GDBusMessage. Free with g_object_unref().
 * Since: 2.26
 */


/**
 * g_dbus_message_new_from_blob:
 * @blob: (array length=blob_len) (element-type guint8): A blob represent a binary D-Bus message.
 * @blob_len: The length of @blob.
 * @capabilities: A #GDBusCapabilityFlags describing what protocol features are supported.
 * @error: Return location for error or %NULL.
 *
 * Creates a new #GDBusMessage from the data stored at @blob. The byte
 * order that the message was in can be retrieved using
 * g_dbus_message_get_byte_order().
 *
 * Returns: A new #GDBusMessage or %NULL if @error is set. Free with g_object_unref().
 * Since: 2.26
 */


/**
 * g_dbus_message_new_method_call:
 * @name: (allow-none): A valid D-Bus name or %NULL.
 * @path: A valid object path.
 * @interface_: (allow-none): A valid D-Bus interface name or %NULL.
 * @method: A valid method name.
 *
 * Creates a new #GDBusMessage for a method call.
 *
 * Returns: A #GDBusMessage. Free with g_object_unref().
 * Since: 2.26
 */


/**
 * g_dbus_message_new_method_error:
 * @method_call_message: A message of type %G_DBUS_MESSAGE_TYPE_METHOD_CALL to create a reply message to.
 * @error_name: A valid D-Bus error name.
 * @error_message_format: The D-Bus error message in a printf() format.
 * @...: Arguments for @error_message_format.
 *
 * Creates a new #GDBusMessage that is an error reply to @method_call_message.
 *
 * Returns: (transfer full): A #GDBusMessage. Free with g_object_unref().
 * Since: 2.26
 */


/**
 * g_dbus_message_new_method_error_literal:
 * @method_call_message: A message of type %G_DBUS_MESSAGE_TYPE_METHOD_CALL to create a reply message to.
 * @error_name: A valid D-Bus error name.
 * @error_message: The D-Bus error message.
 *
 * Creates a new #GDBusMessage that is an error reply to @method_call_message.
 *
 * Returns: (transfer full): A #GDBusMessage. Free with g_object_unref().
 * Since: 2.26
 */


/**
 * g_dbus_message_new_method_error_valist:
 * @method_call_message: A message of type %G_DBUS_MESSAGE_TYPE_METHOD_CALL to create a reply message to.
 * @error_name: A valid D-Bus error name.
 * @error_message_format: The D-Bus error message in a printf() format.
 * @var_args: Arguments for @error_message_format.
 *
 * Like g_dbus_message_new_method_error() but intended for language bindings.
 *
 * Returns: (transfer full): A #GDBusMessage. Free with g_object_unref().
 * Since: 2.26
 */


/**
 * g_dbus_message_new_method_reply:
 * @method_call_message: A message of type %G_DBUS_MESSAGE_TYPE_METHOD_CALL to create a reply message to.
 *
 * Creates a new #GDBusMessage that is a reply to @method_call_message.
 *
 * Returns: (transfer full): #GDBusMessage. Free with g_object_unref().
 * Since: 2.26
 */


/**
 * g_dbus_message_new_signal:
 * @path: A valid object path.
 * @interface_: A valid D-Bus interface name.
 * @signal: A valid signal name.
 *
 * Creates a new #GDBusMessage for a signal emission.
 *
 * Returns: A #GDBusMessage. Free with g_object_unref().
 * Since: 2.26
 */


/**
 * g_dbus_message_print:
 * @message: A #GDBusMessage.
 * @indent: Indentation level.
 *
 * Produces a human-readable multi-line description of @message.
 *
 * The contents of the description has no ABI guarantees, the contents
 * and formatting is subject to change at any time. Typical output
 * looks something like this:
 * <programlisting>
 * Type&colon;    method-call
 * Flags&colon;   none
 * Version&colon; 0
 * Serial&colon;  4
 * Headers&colon;
 *   path -> objectpath '/org/gtk/GDBus/TestObject'
 *   interface -> 'org.gtk.GDBus.TestInterface'
 *   member -> 'GimmeStdout'
 *   destination -> ':1.146'
 * Body&colon; ()
 * UNIX File Descriptors:
 *   (none)
 * </programlisting>
 * or
 * <programlisting>
 * Type&colon;    method-return
 * Flags&colon;   no-reply-expected
 * Version&colon; 0
 * Serial&colon;  477
 * Headers&colon;
 *   reply-serial -> uint32 4
 *   destination -> ':1.159'
 *   sender -> ':1.146'
 *   num-unix-fds -> uint32 1
 * Body&colon; ()
 * UNIX File Descriptors&colon;
 *   fd 12: dev=0:10,mode=020620,ino=5,uid=500,gid=5,rdev=136:2,size=0,atime=1273085037,mtime=1273085851,ctime=1272982635
 * </programlisting>
 *
 * Returns: A string that should be freed with g_free().
 * Since: 2.26
 */


/**
 * g_dbus_message_set_body:
 * @message: A #GDBusMessage.
 * @body: Either %NULL or a #GVariant that is a tuple.
 *
 * Sets the body @message. As a side-effect the
 * %G_DBUS_MESSAGE_HEADER_FIELD_SIGNATURE header field is set to the
 * type string of @body (or cleared if @body is %NULL).
 *
 * If @body is floating, @message assumes ownership of @body.
 *
 * Since: 2.26
 */


/**
 * g_dbus_message_set_byte_order:
 * @message: A #GDBusMessage.
 * @byte_order: The byte order.
 *
 * Sets the byte order of @message.
 */


/**
 * g_dbus_message_set_destination:
 * @message: A #GDBusMessage.
 * @value: The value to set.
 *
 * Convenience setter for the %G_DBUS_MESSAGE_HEADER_FIELD_DESTINATION header field.
 *
 * Since: 2.26
 */


/**
 * g_dbus_message_set_error_name:
 * @message: A #GDBusMessage.
 * @value: The value to set.
 *
 * Convenience setter for the %G_DBUS_MESSAGE_HEADER_FIELD_ERROR_NAME header field.
 *
 * Since: 2.26
 */


/**
 * g_dbus_message_set_flags:
 * @message: A #GDBusMessage.
 * @flags: Flags for @message that are set (typically values from the #GDBusMessageFlags enumeration bitwise ORed together).
 *
 * Sets the flags to set on @message.
 *
 * Since: 2.26
 */


/**
 * g_dbus_message_set_header:
 * @message: A #GDBusMessage.
 * @header_field: A 8-bit unsigned integer (typically a value from the #GDBusMessageHeaderField enumeration)
 * @value: (allow-none): A #GVariant to set the header field or %NULL to clear the header field.
 *
 * Sets a header field on @message.
 *
 * If @value is floating, @message assumes ownership of @value.
 *
 * Since: 2.26
 */


/**
 * g_dbus_message_set_interface:
 * @message: A #GDBusMessage.
 * @value: The value to set.
 *
 * Convenience setter for the %G_DBUS_MESSAGE_HEADER_FIELD_INTERFACE header field.
 *
 * Since: 2.26
 */


/**
 * g_dbus_message_set_member:
 * @message: A #GDBusMessage.
 * @value: The value to set.
 *
 * Convenience setter for the %G_DBUS_MESSAGE_HEADER_FIELD_MEMBER header field.
 *
 * Since: 2.26
 */


/**
 * g_dbus_message_set_message_type:
 * @message: A #GDBusMessage.
 * @type: A 8-bit unsigned integer (typically a value from the #GDBusMessageType enumeration).
 *
 * Sets @message to be of @type.
 *
 * Since: 2.26
 */


/**
 * g_dbus_message_set_num_unix_fds:
 * @message: A #GDBusMessage.
 * @value: The value to set.
 *
 * Convenience setter for the %G_DBUS_MESSAGE_HEADER_FIELD_NUM_UNIX_FDS header field.
 *
 * Since: 2.26
 */


/**
 * g_dbus_message_set_path:
 * @message: A #GDBusMessage.
 * @value: The value to set.
 *
 * Convenience setter for the %G_DBUS_MESSAGE_HEADER_FIELD_PATH header field.
 *
 * Since: 2.26
 */


/**
 * g_dbus_message_set_reply_serial:
 * @message: A #GDBusMessage.
 * @value: The value to set.
 *
 * Convenience setter for the %G_DBUS_MESSAGE_HEADER_FIELD_REPLY_SERIAL header field.
 *
 * Since: 2.26
 */


/**
 * g_dbus_message_set_sender:
 * @message: A #GDBusMessage.
 * @value: The value to set.
 *
 * Convenience setter for the %G_DBUS_MESSAGE_HEADER_FIELD_SENDER header field.
 *
 * Since: 2.26
 */


/**
 * g_dbus_message_set_serial:
 * @message: A #GDBusMessage.
 * @serial: A #guint32.
 *
 * Sets the serial for @message.
 *
 * Since: 2.26
 */


/**
 * g_dbus_message_set_signature:
 * @message: A #GDBusMessage.
 * @value: The value to set.
 *
 * Convenience setter for the %G_DBUS_MESSAGE_HEADER_FIELD_SIGNATURE header field.
 *
 * Since: 2.26
 */


/**
 * g_dbus_message_set_unix_fd_list:
 * @message: A #GDBusMessage.
 * @fd_list: (allow-none): A #GUnixFDList or %NULL.
 *
 * Sets the UNIX file descriptors associated with @message. As a
 * side-effect the %G_DBUS_MESSAGE_HEADER_FIELD_NUM_UNIX_FDS header
 * field is set to the number of fds in @fd_list (or cleared if
 * @fd_list is %NULL).
 *
 * This method is only available on UNIX.
 *
 * Since: 2.26
 */


/**
 * g_dbus_message_to_blob:
 * @message: A #GDBusMessage.
 * @out_size: Return location for size of generated blob.
 * @capabilities: A #GDBusCapabilityFlags describing what protocol features are supported.
 * @error: Return location for error.
 *
 * Serializes @message to a blob. The byte order returned by
 * g_dbus_message_get_byte_order() will be used.
 *
 * Returns: (array length=out_size) (transfer full): A pointer to a valid binary D-Bus message of @out_size bytes generated by @message or %NULL if @error is set. Free with g_free().
 * Since: 2.26
 */


/**
 * g_dbus_message_to_gerror:
 * @message: A #GDBusMessage.
 * @error: The #GError to set.
 *
 * If @message is not of type %G_DBUS_MESSAGE_TYPE_ERROR does
 * nothing and returns %FALSE.
 *
 * Otherwise this method encodes the error in @message as a #GError
 * using g_dbus_error_set_dbus_error() using the information in the
 * %G_DBUS_MESSAGE_HEADER_FIELD_ERROR_NAME header field of @message as
 * well as the first string item in @message's body.
 *
 * Returns: %TRUE if @error was set, %FALSE otherwise.
 * Since: 2.26
 */


/**
 * g_dbus_method_info_ref:
 * @info: A #GDBusMethodInfo
 *
 * If @info is statically allocated does nothing. Otherwise increases
 * the reference count.
 *
 * Returns: The same @info.
 * Since: 2.26
 */


/**
 * g_dbus_method_info_unref:
 * @info: A #GDBusMethodInfo.
 *
 * If @info is statically allocated, does nothing. Otherwise decreases
 * the reference count of @info. When its reference count drops to 0,
 * the memory used is freed.
 *
 * Since: 2.26
 */


/**
 * g_dbus_method_invocation_get_connection:
 * @invocation: A #GDBusMethodInvocation.
 *
 * Gets the #GDBusConnection the method was invoked on.
 *
 * Returns: (transfer none): A #GDBusConnection. Do not free, it is owned by @invocation.
 * Since: 2.26
 */


/**
 * g_dbus_method_invocation_get_interface_name:
 * @invocation: A #GDBusMethodInvocation.
 *
 * Gets the name of the D-Bus interface the method was invoked on.
 *
 * Returns: A string. Do not free, it is owned by @invocation.
 * Since: 2.26
 */


/**
 * g_dbus_method_invocation_get_message:
 * @invocation: A #GDBusMethodInvocation.
 *
 * Gets the #GDBusMessage for the method invocation. This is useful if
 * you need to use low-level protocol features, such as UNIX file
 * descriptor passing, that cannot be properly expressed in the
 * #GVariant API.
 *
 * See <xref linkend="gdbus-server"/> and <xref
 * linkend="gdbus-unix-fd-client"/> for an example of how to use this
 * low-level API to send and receive UNIX file descriptors.
 *
 * Returns: (transfer none): #GDBusMessage. Do not free, it is owned by @invocation.
 * Since: 2.26
 */


/**
 * g_dbus_method_invocation_get_method_info:
 * @invocation: A #GDBusMethodInvocation.
 *
 * Gets information about the method call, if any.
 *
 * Returns: A #GDBusMethodInfo or %NULL. Do not free, it is owned by @invocation.
 * Since: 2.26
 */


/**
 * g_dbus_method_invocation_get_method_name:
 * @invocation: A #GDBusMethodInvocation.
 *
 * Gets the name of the method that was invoked.
 *
 * Returns: A string. Do not free, it is owned by @invocation.
 * Since: 2.26
 */


/**
 * g_dbus_method_invocation_get_object_path:
 * @invocation: A #GDBusMethodInvocation.
 *
 * Gets the object path the method was invoked on.
 *
 * Returns: A string. Do not free, it is owned by @invocation.
 * Since: 2.26
 */


/**
 * g_dbus_method_invocation_get_parameters:
 * @invocation: A #GDBusMethodInvocation.
 *
 * Gets the parameters of the method invocation. If there are no input
 * parameters then this will return a GVariant with 0 children rather than NULL.
 *
 * Returns: (transfer none): A #GVariant tuple. Do not unref this because it is owned by @invocation.
 * Since: 2.26
 */


/**
 * g_dbus_method_invocation_get_sender:
 * @invocation: A #GDBusMethodInvocation.
 *
 * Gets the bus name that invoked the method.
 *
 * Returns: A string. Do not free, it is owned by @invocation.
 * Since: 2.26
 */


/**
 * g_dbus_method_invocation_get_user_data: (skip)
 * @invocation: A #GDBusMethodInvocation.
 *
 * Gets the @user_data #gpointer passed to g_dbus_connection_register_object().
 *
 * Returns: A #gpointer.
 * Since: 2.26
 */


/**
 * g_dbus_method_invocation_return_dbus_error:
 * @invocation: (transfer full): A #GDBusMethodInvocation.
 * @error_name: A valid D-Bus error name.
 * @error_message: A valid D-Bus error message.
 *
 * Finishes handling a D-Bus method call by returning an error.
 *
 * This method will free @invocation, you cannot use it afterwards.
 *
 * Since: 2.26
 */


/**
 * g_dbus_method_invocation_return_error:
 * @invocation: (transfer full): A #GDBusMethodInvocation.
 * @domain: A #GQuark for the #GError error domain.
 * @code: The error code.
 * @format: printf()-style format.
 * @...: Parameters for @format.
 *
 * Finishes handling a D-Bus method call by returning an error.
 *
 * See g_dbus_error_encode_gerror() for details about what error name
 * will be returned on the wire. In a nutshell, if the given error is
 * registered using g_dbus_error_register_error() the name given
 * during registration is used. Otherwise, a name of the form
 * <literal>org.gtk.GDBus.UnmappedGError.Quark...</literal> is
 * used. This provides transparent mapping of #GError between
 * applications using GDBus.
 *
 * If you are writing an application intended to be portable,
 * <emphasis>always</emphasis> register errors with g_dbus_error_register_error()
 * or use g_dbus_method_invocation_return_dbus_error().
 *
 * This method will free @invocation, you cannot use it afterwards.
 *
 * Since: 2.26
 */


/**
 * g_dbus_method_invocation_return_error_literal:
 * @invocation: (transfer full): A #GDBusMethodInvocation.
 * @domain: A #GQuark for the #GError error domain.
 * @code: The error code.
 * @message: The error message.
 *
 * Like g_dbus_method_invocation_return_error() but without printf()-style formatting.
 *
 * This method will free @invocation, you cannot use it afterwards.
 *
 * Since: 2.26
 */


/**
 * g_dbus_method_invocation_return_error_valist:
 * @invocation: (transfer full): A #GDBusMethodInvocation.
 * @domain: A #GQuark for the #GError error domain.
 * @code: The error code.
 * @format: printf()-style format.
 * @var_args: #va_list of parameters for @format.
 *
 * Like g_dbus_method_invocation_return_error() but intended for
 * language bindings.
 *
 * This method will free @invocation, you cannot use it afterwards.
 *
 * Since: 2.26
 */


/**
 * g_dbus_method_invocation_return_gerror:
 * @invocation: (transfer full): A #GDBusMethodInvocation.
 * @error: A #GError.
 *
 * Like g_dbus_method_invocation_return_error() but takes a #GError
 * instead of the error domain, error code and message.
 *
 * This method will free @invocation, you cannot use it afterwards.
 *
 * Since: 2.26
 */


/**
 * g_dbus_method_invocation_return_value:
 * @invocation: (transfer full): A #GDBusMethodInvocation.
 * @parameters: (allow-none): A #GVariant tuple with out parameters for the method or %NULL if not passing any parameters.
 *
 * Finishes handling a D-Bus method call by returning @parameters.
 * If the @parameters GVariant is floating, it is consumed.
 *
 * It is an error if @parameters is not of the right format.
 *
 * This method will free @invocation, you cannot use it afterwards.
 *
 * Since: 2.26
 */


/**
 * g_dbus_method_invocation_return_value_with_unix_fd_list:
 * @invocation: (transfer full): A #GDBusMethodInvocation.
 * @parameters: (allow-none): A #GVariant tuple with out parameters for the method or %NULL if not passing any parameters.
 * @fd_list: (allow-none): A #GUnixFDList or %NULL.
 *
 * Like g_dbus_method_invocation_return_value() but also takes a #GUnixFDList.
 *
 * This method is only available on UNIX.
 *
 * This method will free @invocation, you cannot use it afterwards.
 *
 * Since: 2.30
 */


/**
 * g_dbus_method_invocation_take_error: (skip)
 * @invocation: (transfer full): A #GDBusMethodInvocation.
 * @error: (transfer full): A #GError.
 *
 * Like g_dbus_method_invocation_return_gerror() but takes ownership
 * of @error so the caller does not need to free it.
 *
 * This method will free @invocation, you cannot use it afterwards.
 *
 * Since: 2.30
 */


/**
 * g_dbus_node_info_generate_xml:
 * @info: A #GDBusNodeInfo.
 * @indent: Indentation level.
 * @string_builder: (out): A #GString to to append XML data to.
 *
 * Appends an XML representation of @info (and its children) to @string_builder.
 *
 * This function is typically used for generating introspection XML documents at run-time for
 * handling the <literal>org.freedesktop.DBus.Introspectable.Introspect</literal> method.
 *
 * Since: 2.26
 */


/**
 * g_dbus_node_info_lookup_interface:
 * @info: A #GDBusNodeInfo.
 * @name: A D-Bus interface name.
 *
 * Looks up information about an interface.
 *
 * This cost of this function is O(n) in number of interfaces.
 *
 * Returns: (transfer none): A #GDBusInterfaceInfo or %NULL if not found. Do not free, it is owned by @info.
 * Since: 2.26
 */


/**
 * g_dbus_node_info_new_for_xml:
 * @xml_data: Valid D-Bus introspection XML.
 * @error: Return location for error.
 *
 * Parses @xml_data and returns a #GDBusNodeInfo representing the data.
 *
 * Note that this routine is using a
 * <link linkend="glib-Simple-XML-Subset-Parser.description">GMarkup</link>-based
 * parser that only accepts a subset of valid XML documents.
 *
 * Returns: A #GDBusNodeInfo structure or %NULL if @error is set. Free with g_dbus_node_info_unref().
 * Since: 2.26
 */


/**
 * g_dbus_node_info_ref:
 * @info: A #GDBusNodeInfo
 *
 * If @info is statically allocated does nothing. Otherwise increases
 * the reference count.
 *
 * Returns: The same @info.
 * Since: 2.26
 */


/**
 * g_dbus_node_info_unref:
 * @info: A #GDBusNodeInfo.
 *
 * If @info is statically allocated, does nothing. Otherwise decreases
 * the reference count of @info. When its reference count drops to 0,
 * the memory used is freed.
 *
 * Since: 2.26
 */


/**
 * g_dbus_object_get_interface:
 * @object: A #GDBusObject.
 * @interface_name: A D-Bus interface name.
 *
 * Gets the D-Bus interface with name @interface_name associated with
 * @object, if any.
 *
 * Returns: (transfer full): %NULL if not found, otherwise a #GDBusInterface that must be freed with g_object_unref().
 * Since: 2.30
 */


/**
 * g_dbus_object_get_interfaces:
 * @object: A #GDBusObject.
 *
 * Gets the D-Bus interfaces associated with @object.
 *
 * Returns: (element-type GDBusInterface) (transfer full): A list of #GDBusInterface instances. The returned list must be freed by g_list_free() after each element has been freed with g_object_unref().
 * Since: 2.30
 */


/**
 * g_dbus_object_get_object_path:
 * @object: A #GDBusObject.
 *
 * Gets the object path for @object.
 *
 * Returns: A string owned by @object. Do not free.
 * Since: 2.30
 */


/**
 * g_dbus_object_manager_client_get_connection:
 * @manager: A #GDBusObjectManagerClient
 *
 * Gets the #GDBusConnection used by @manager.
 *
 * Returns: (transfer none): A #GDBusConnection object. Do not free, the object belongs to @manager.
 * Since: 2.30
 */


/**
 * g_dbus_object_manager_client_get_flags:
 * @manager: A #GDBusObjectManagerClient
 *
 * Gets the flags that @manager was constructed with.
 *
 * Returns: Zero of more flags from the #GDBusObjectManagerClientFlags enumeration.
 * Since: 2.30
 */


/**
 * g_dbus_object_manager_client_get_name:
 * @manager: A #GDBusObjectManagerClient
 *
 * Gets the name that @manager is for.
 *
 * Returns: A unique or well-known name. Do not free, the string belongs to @manager.
 * Since: 2.30
 */


/**
 * g_dbus_object_manager_client_get_name_owner:
 * @manager: A #GDBusObjectManagerClient.
 *
 * The unique name that owns the name that @manager is for or %NULL if
 * no-one currently owns that name. You can connect to the
 * #GObject::notify signal to track changes to the
 * #GDBusObjectManagerClient:name-owner property.
 *
 * Returns: The name owner or %NULL if no name owner exists. Free with g_free().
 * Since: 2.30
 */


/**
 * g_dbus_object_manager_client_new:
 * @connection: A #GDBusConnection.
 * @flags: Zero or more flags from the #GDBusObjectManagerClientFlags enumeration.
 * @name: The owner of the control object (unique or well-known name).
 * @object_path: The object path of the control object.
 * @get_proxy_type_func: (allow-none): A #GDBusProxyTypeFunc function or %NULL to always construct #GDBusProxy proxies.
 * @get_proxy_type_user_data: User data to pass to @get_proxy_type_func.
 * @get_proxy_type_destroy_notify: (allow-none): Free function for @get_proxy_type_user_data or %NULL.
 * @cancellable: (allow-none): A #GCancellable or %NULL
 * @callback: A #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: The data to pass to @callback.
 *
 * Asynchronously creates a new #GDBusObjectManagerClient object.
 *
 * This is an asynchronous failable constructor. When the result is
 * ready, @callback will be invoked in the
 * <link linkend="g-main-context-push-thread-default">thread-default main loop</link>
 * of the thread you are calling this method from. You can
 * then call g_dbus_object_manager_client_new_finish() to get the result. See
 * g_dbus_object_manager_client_new_sync() for the synchronous version.
 *
 * Since: 2.30
 */


/**
 * g_dbus_object_manager_client_new_finish:
 * @res: A #GAsyncResult obtained from the #GAsyncReadyCallback passed to g_dbus_object_manager_client_new().
 * @error: Return location for error or %NULL.
 *
 * Finishes an operation started with g_dbus_object_manager_client_new().
 *
 * Returns: (transfer full) (type GDBusObjectManagerClient): A #GDBusObjectManagerClient object or %NULL if @error is set. Free with g_object_unref().
 * Since: 2.30
 */


/**
 * g_dbus_object_manager_client_new_for_bus:
 * @bus_type: A #GBusType.
 * @flags: Zero or more flags from the #GDBusObjectManagerClientFlags enumeration.
 * @name: The owner of the control object (unique or well-known name).
 * @object_path: The object path of the control object.
 * @get_proxy_type_func: (allow-none): A #GDBusProxyTypeFunc function or %NULL to always construct #GDBusProxy proxies.
 * @get_proxy_type_user_data: User data to pass to @get_proxy_type_func.
 * @get_proxy_type_destroy_notify: (allow-none): Free function for @get_proxy_type_user_data or %NULL.
 * @cancellable: (allow-none): A #GCancellable or %NULL
 * @callback: A #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: The data to pass to @callback.
 *
 * Like g_dbus_object_manager_client_new() but takes a #GBusType instead of a
 * #GDBusConnection.
 *
 * This is an asynchronous failable constructor. When the result is
 * ready, @callback will be invoked in the
 * <link linkend="g-main-context-push-thread-default">thread-default main loop</link>
 * of the thread you are calling this method from. You can
 * then call g_dbus_object_manager_client_new_for_bus_finish() to get the result. See
 * g_dbus_object_manager_client_new_for_bus_sync() for the synchronous version.
 *
 * Since: 2.30
 */


/**
 * g_dbus_object_manager_client_new_for_bus_finish:
 * @res: A #GAsyncResult obtained from the #GAsyncReadyCallback passed to g_dbus_object_manager_client_new_for_bus().
 * @error: Return location for error or %NULL.
 *
 * Finishes an operation started with g_dbus_object_manager_client_new_for_bus().
 *
 * Returns: (transfer full) (type GDBusObjectManagerClient): A #GDBusObjectManagerClient object or %NULL if @error is set. Free with g_object_unref().
 * Since: 2.30
 */


/**
 * g_dbus_object_manager_client_new_for_bus_sync:
 * @bus_type: A #GBusType.
 * @flags: Zero or more flags from the #GDBusObjectManagerClientFlags enumeration.
 * @name: The owner of the control object (unique or well-known name).
 * @object_path: The object path of the control object.
 * @get_proxy_type_func: (allow-none): A #GDBusProxyTypeFunc function or %NULL to always construct #GDBusProxy proxies.
 * @get_proxy_type_user_data: User data to pass to @get_proxy_type_func.
 * @get_proxy_type_destroy_notify: (allow-none): Free function for @get_proxy_type_user_data or %NULL.
 * @cancellable: (allow-none): A #GCancellable or %NULL
 * @error: Return location for error or %NULL.
 *
 * Like g_dbus_object_manager_client_new_sync() but takes a #GBusType instead
 * of a #GDBusConnection.
 *
 * This is a synchronous failable constructor - the calling thread is
 * blocked until a reply is received. See g_dbus_object_manager_client_new_for_bus()
 * for the asynchronous version.
 *
 * Returns: (transfer full) (type GDBusObjectManagerClient): A #GDBusObjectManagerClient object or %NULL if @error is set. Free with g_object_unref().
 * Since: 2.30
 */


/**
 * g_dbus_object_manager_client_new_sync:
 * @connection: A #GDBusConnection.
 * @flags: Zero or more flags from the #GDBusObjectManagerClientFlags enumeration.
 * @name: The owner of the control object (unique or well-known name).
 * @object_path: The object path of the control object.
 * @get_proxy_type_func: (allow-none): A #GDBusProxyTypeFunc function or %NULL to always construct #GDBusProxy proxies.
 * @get_proxy_type_user_data: User data to pass to @get_proxy_type_func.
 * @get_proxy_type_destroy_notify: (allow-none): Free function for @get_proxy_type_user_data or %NULL.
 * @cancellable: (allow-none): A #GCancellable or %NULL
 * @error: Return location for error or %NULL.
 *
 * Creates a new #GDBusObjectManagerClient object.
 *
 * This is a synchronous failable constructor - the calling thread is
 * blocked until a reply is received. See g_dbus_object_manager_client_new()
 * for the asynchronous version.
 *
 * Returns: (transfer full) (type GDBusObjectManagerClient): A #GDBusObjectManagerClient object or %NULL if @error is set. Free with g_object_unref().
 * Since: 2.30
 */


/**
 * g_dbus_object_manager_get_interface:
 * @manager: A #GDBusObjectManager.
 * @object_path: Object path to lookup.
 * @interface_name: D-Bus interface name to lookup.
 *
 * Gets the interface proxy for @interface_name at @object_path, if
 * any.
 *
 * Returns: (transfer full): A #GDBusInterface instance or %NULL. Free with g_object_unref().
 * Since: 2.30
 */


/**
 * g_dbus_object_manager_get_object:
 * @manager: A #GDBusObjectManager.
 * @object_path: Object path to lookup.
 *
 * Gets the #GDBusObjectProxy at @object_path, if any.
 *
 * Returns: (transfer full): A #GDBusObject or %NULL. Free with g_object_unref().
 * Since: 2.30
 */


/**
 * g_dbus_object_manager_get_object_path:
 * @manager: A #GDBusObjectManager.
 *
 * Gets the object path that @manager is for.
 *
 * Returns: A string owned by @manager. Do not free.
 * Since: 2.30
 */


/**
 * g_dbus_object_manager_get_objects:
 * @manager: A #GDBusObjectManager.
 *
 * Gets all #GDBusObject objects known to @manager.
 *
 * Returns: (transfer full) (element-type GDBusObject): A list of #GDBusObject objects. The returned list should be freed with g_list_free() after each element has been freed with g_object_unref().
 * Since: 2.30
 */


/**
 * g_dbus_object_manager_server_export:
 * @manager: A #GDBusObjectManagerServer.
 * @object: A #GDBusObjectSkeleton.
 *
 * Exports @object on @manager.
 *
 * If there is already a #GDBusObject exported at the object path,
 * then the old object is removed.
 *
 * The object path for @object must be in the hierarchy rooted by the
 * object path for @manager.
 *
 * Note that @manager will take a reference on @object for as long as
 * it is exported.
 *
 * Since: 2.30
 */


/**
 * g_dbus_object_manager_server_export_uniquely:
 * @manager: A #GDBusObjectManagerServer.
 * @object: An object.
 *
 * Like g_dbus_object_manager_server_export() but appends a string of
 * the form <literal>_N</literal> (with N being a natural number) to
 * @object<!-- -->'s object path if an object with the given path
 * already exists. As such, the #GDBusObjectProxy:g-object-path property
 * of @object may be modified.
 *
 * Since: 2.30
 */


/**
 * g_dbus_object_manager_server_get_connection:
 * @manager: A #GDBusObjectManagerServer
 *
 * Gets the #GDBusConnection used by @manager.
 *
 * Returns: (transfer full): A #GDBusConnection object or %NULL if @manager isn't exported on a connection. The returned object should be freed with g_object_unref().
 * Since: 2.30
 */


/**
 * g_dbus_object_manager_server_new:
 * @object_path: The object path to export the manager object at.
 *
 * Creates a new #GDBusObjectManagerServer object.
 *
 * The returned server isn't yet exported on any connection. To do so,
 * use g_dbus_object_manager_server_set_connection(). Normally you
 * want to export all of your objects before doing so to avoid <ulink
 * url="http://dbus.freedesktop.org/doc/dbus-specification.html#standard-interfaces-objectmanager">InterfacesAdded</ulink>
 * signals being emitted.
 *
 * Returns: A #GDBusObjectManagerServer object. Free with g_object_unref().
 * Since: 2.30
 */


/**
 * g_dbus_object_manager_server_set_connection:
 * @manager: A #GDBusObjectManagerServer.
 * @connection: (allow-none): A #GDBusConnection or %NULL.
 *
 * Exports all objects managed by @manager on @connection. If
 * @connection is %NULL, stops exporting objects.
 */


/**
 * g_dbus_object_manager_server_unexport:
 * @manager: A #GDBusObjectManagerServer.
 * @object_path: An object path.
 *
 * If @manager has an object at @path, removes the object. Otherwise
 * does nothing.
 *
 * Note that @object_path must be in the hierarchy rooted by the
 * object path for @manager.
 *
 * Returns: %TRUE if object at @object_path was removed, %FALSE otherwise.
 * Since: 2.30
 */


/**
 * g_dbus_object_proxy_get_connection:
 * @proxy: a #GDBusObjectProxy
 *
 * Gets the connection that @proxy is for.
 *
 * Returns: (transfer none): A #GDBusConnection. Do not free, the object is owned by @proxy.
 * Since: 2.30
 */


/**
 * g_dbus_object_proxy_new:
 * @connection: a #GDBusConnection
 * @object_path: the object path
 *
 * Creates a new #GDBusObjectProxy for the given connection and
 * object path.
 *
 * Returns: a new #GDBusObjectProxy
 * Since: 2.30
 */


/**
 * g_dbus_object_skeleton_add_interface:
 * @object: A #GDBusObjectSkeleton.
 * @interface_: A #GDBusInterfaceSkeleton.
 *
 * Adds @interface_ to @object.
 *
 * If @object already contains a #GDBusInterfaceSkeleton with the same
 * interface name, it is removed before @interface_ is added.
 *
 * Note that @object takes its own reference on @interface_ and holds
 * it until removed.
 *
 * Since: 2.30
 */


/**
 * g_dbus_object_skeleton_flush:
 * @object: A #GDBusObjectSkeleton.
 *
 * This method simply calls g_dbus_interface_skeleton_flush() on all
 * interfaces belonging to @object. See that method for when flushing
 * is useful.
 *
 * Since: 2.30
 */


/**
 * g_dbus_object_skeleton_new:
 * @object_path: An object path.
 *
 * Creates a new #GDBusObjectSkeleton.
 *
 * Returns: A #GDBusObjectSkeleton. Free with g_object_unref().
 * Since: 2.30
 */


/**
 * g_dbus_object_skeleton_remove_interface:
 * @object: A #GDBusObjectSkeleton.
 * @interface_: A #GDBusInterfaceSkeleton.
 *
 * Removes @interface_ from @object.
 *
 * Since: 2.30
 */


/**
 * g_dbus_object_skeleton_remove_interface_by_name:
 * @object: A #GDBusObjectSkeleton.
 * @interface_name: A D-Bus interface name.
 *
 * Removes the #GDBusInterface with @interface_name from @object.
 *
 * If no D-Bus interface of the given interface exists, this function
 * does nothing.
 *
 * Since: 2.30
 */


/**
 * g_dbus_object_skeleton_set_object_path:
 * @object: A #GDBusObjectSkeleton.
 * @object_path: A valid D-Bus object path.
 *
 * Sets the object path for @object.
 *
 * Since: 2.30
 */


/**
 * g_dbus_property_info_ref:
 * @info: A #GDBusPropertyInfo
 *
 * If @info is statically allocated does nothing. Otherwise increases
 * the reference count.
 *
 * Returns: The same @info.
 * Since: 2.26
 */


/**
 * g_dbus_property_info_unref:
 * @info: A #GDBusPropertyInfo.
 *
 * If @info is statically allocated, does nothing. Otherwise decreases
 * the reference count of @info. When its reference count drops to 0,
 * the memory used is freed.
 *
 * Since: 2.26
 */


/**
 * g_dbus_proxy_call:
 * @proxy: A #GDBusProxy.
 * @method_name: Name of method to invoke.
 * @parameters: (allow-none): A #GVariant tuple with parameters for the signal or %NULL if not passing parameters.
 * @flags: Flags from the #GDBusCallFlags enumeration.
 * @timeout_msec: The timeout in milliseconds (with %G_MAXINT meaning "infinite") or -1 to use the proxy default timeout.
 * @cancellable: (allow-none): A #GCancellable or %NULL.
 * @callback: (allow-none): A #GAsyncReadyCallback to call when the request is satisfied or %NULL if you don't care about the result of the method invocation.
 * @user_data: The data to pass to @callback.
 *
 * Asynchronously invokes the @method_name method on @proxy.
 *
 * If @method_name contains any dots, then @name is split into interface and
 * method name parts. This allows using @proxy for invoking methods on
 * other interfaces.
 *
 * If the #GDBusConnection associated with @proxy is closed then
 * the operation will fail with %G_IO_ERROR_CLOSED. If
 * @cancellable is canceled, the operation will fail with
 * %G_IO_ERROR_CANCELLED. If @parameters contains a value not
 * compatible with the D-Bus protocol, the operation fails with
 * %G_IO_ERROR_INVALID_ARGUMENT.
 *
 * If the @parameters #GVariant is floating, it is consumed. This allows
 * convenient 'inline' use of g_variant_new(), e.g.:
 * |[
 *  g_dbus_proxy_call (proxy,
 *                     "TwoStrings",
 *                     g_variant_new ("(ss)",
 *                                    "Thing One",
 *                                    "Thing Two"),
 *                     G_DBUS_CALL_FLAGS_NONE,
 *                     -1,
 *                     NULL,
 *                     (GAsyncReadyCallback) two_strings_done,
 *                     &amp;data);
 * ]|
 *
 * If @proxy has an expected interface (see
 * #GDBusProxy:g-interface-info) and @method_name is referenced by it,
 * then the return value is checked against the return type.
 *
 * This is an asynchronous method. When the operation is finished,
 * @callback will be invoked in the
 * <link linkend="g-main-context-push-thread-default">thread-default main loop</link>
 * of the thread you are calling this method from.
 * You can then call g_dbus_proxy_call_finish() to get the result of
 * the operation. See g_dbus_proxy_call_sync() for the synchronous
 * version of this method.
 *
 * If @callback is %NULL then the D-Bus method call message will be sent with
 * the %G_DBUS_MESSAGE_FLAGS_NO_REPLY_EXPECTED flag set.
 *
 * Since: 2.26
 */


/**
 * g_dbus_proxy_call_finish:
 * @proxy: A #GDBusProxy.
 * @res: A #GAsyncResult obtained from the #GAsyncReadyCallback passed to g_dbus_proxy_call().
 * @error: Return location for error or %NULL.
 *
 * Finishes an operation started with g_dbus_proxy_call().
 *
 * Returns: %NULL if @error is set. Otherwise a #GVariant tuple with return values. Free with g_variant_unref().
 * Since: 2.26
 */


/**
 * g_dbus_proxy_call_sync:
 * @proxy: A #GDBusProxy.
 * @method_name: Name of method to invoke.
 * @parameters: (allow-none): A #GVariant tuple with parameters for the signal or %NULL if not passing parameters.
 * @flags: Flags from the #GDBusCallFlags enumeration.
 * @timeout_msec: The timeout in milliseconds (with %G_MAXINT meaning "infinite") or -1 to use the proxy default timeout.
 * @cancellable: (allow-none): A #GCancellable or %NULL.
 * @error: Return location for error or %NULL.
 *
 * Synchronously invokes the @method_name method on @proxy.
 *
 * If @method_name contains any dots, then @name is split into interface and
 * method name parts. This allows using @proxy for invoking methods on
 * other interfaces.
 *
 * If the #GDBusConnection associated with @proxy is disconnected then
 * the operation will fail with %G_IO_ERROR_CLOSED. If
 * @cancellable is canceled, the operation will fail with
 * %G_IO_ERROR_CANCELLED. If @parameters contains a value not
 * compatible with the D-Bus protocol, the operation fails with
 * %G_IO_ERROR_INVALID_ARGUMENT.
 *
 * If the @parameters #GVariant is floating, it is consumed. This allows
 * convenient 'inline' use of g_variant_new(), e.g.:
 * |[
 *  g_dbus_proxy_call_sync (proxy,
 *                          "TwoStrings",
 *                          g_variant_new ("(ss)",
 *                                         "Thing One",
 *                                         "Thing Two"),
 *                          G_DBUS_CALL_FLAGS_NONE,
 *                          -1,
 *                          NULL,
 *                          &amp;error);
 * ]|
 *
 * The calling thread is blocked until a reply is received. See
 * g_dbus_proxy_call() for the asynchronous version of this
 * method.
 *
 * If @proxy has an expected interface (see
 * #GDBusProxy:g-interface-info) and @method_name is referenced by it,
 * then the return value is checked against the return type.
 *
 * Returns: %NULL if @error is set. Otherwise a #GVariant tuple with return values. Free with g_variant_unref().
 * Since: 2.26
 */


/**
 * g_dbus_proxy_call_with_unix_fd_list:
 * @proxy: A #GDBusProxy.
 * @method_name: Name of method to invoke.
 * @parameters: (allow-none): A #GVariant tuple with parameters for the signal or %NULL if not passing parameters.
 * @flags: Flags from the #GDBusCallFlags enumeration.
 * @timeout_msec: The timeout in milliseconds (with %G_MAXINT meaning "infinite") or -1 to use the proxy default timeout.
 * @fd_list: (allow-none): A #GUnixFDList or %NULL.
 * @cancellable: (allow-none): A #GCancellable or %NULL.
 * @callback: (allow-none): A #GAsyncReadyCallback to call when the request is satisfied or %NULL if you don't care about the result of the method invocation.
 * @user_data: The data to pass to @callback.
 *
 * Like g_dbus_proxy_call() but also takes a #GUnixFDList object.
 *
 * This method is only available on UNIX.
 *
 * Since: 2.30
 */


/**
 * g_dbus_proxy_call_with_unix_fd_list_finish:
 * @proxy: A #GDBusProxy.
 * @out_fd_list: (out) (allow-none): Return location for a #GUnixFDList or %NULL.
 * @res: A #GAsyncResult obtained from the #GAsyncReadyCallback passed to g_dbus_proxy_call_with_unix_fd_list().
 * @error: Return location for error or %NULL.
 *
 * Finishes an operation started with g_dbus_proxy_call_with_unix_fd_list().
 *
 * Returns: %NULL if @error is set. Otherwise a #GVariant tuple with return values. Free with g_variant_unref().
 * Since: 2.30
 */


/**
 * g_dbus_proxy_call_with_unix_fd_list_sync:
 * @proxy: A #GDBusProxy.
 * @method_name: Name of method to invoke.
 * @parameters: (allow-none): A #GVariant tuple with parameters for the signal or %NULL if not passing parameters.
 * @flags: Flags from the #GDBusCallFlags enumeration.
 * @timeout_msec: The timeout in milliseconds (with %G_MAXINT meaning "infinite") or -1 to use the proxy default timeout.
 * @fd_list: (allow-none): A #GUnixFDList or %NULL.
 * @out_fd_list: (out) (allow-none): Return location for a #GUnixFDList or %NULL.
 * @cancellable: (allow-none): A #GCancellable or %NULL.
 * @error: Return location for error or %NULL.
 *
 * Like g_dbus_proxy_call_sync() but also takes and returns #GUnixFDList objects.
 *
 * This method is only available on UNIX.
 *
 * Returns: %NULL if @error is set. Otherwise a #GVariant tuple with return values. Free with g_variant_unref().
 * Since: 2.30
 */


/**
 * g_dbus_proxy_get_cached_property:
 * @proxy: A #GDBusProxy.
 * @property_name: Property name.
 *
 * Looks up the value for a property from the cache. This call does no
 * blocking IO.
 *
 * If @proxy has an expected interface (see
 * #GDBusProxy:g-interface-info) and @property_name is referenced by
 * it, then @value is checked against the type of the property.
 *
 * Returns: A reference to the #GVariant instance that holds the value for @property_name or %NULL if the value is not in the cache. The returned reference must be freed with g_variant_unref().
 * Since: 2.26
 */


/**
 * g_dbus_proxy_get_cached_property_names:
 * @proxy: A #GDBusProxy.
 *
 * Gets the names of all cached properties on @proxy.
 *
 * Returns: (transfer full): A %NULL-terminated array of strings or %NULL if @proxy has no cached properties. Free the returned array with g_strfreev().
 * Since: 2.26
 */


/**
 * g_dbus_proxy_get_connection:
 * @proxy: A #GDBusProxy.
 *
 * Gets the connection @proxy is for.
 *
 * Returns: (transfer none): A #GDBusConnection owned by @proxy. Do not free.
 * Since: 2.26
 */


/**
 * g_dbus_proxy_get_default_timeout:
 * @proxy: A #GDBusProxy.
 *
 * Gets the timeout to use if -1 (specifying default timeout) is
 * passed as @timeout_msec in the g_dbus_proxy_call() and
 * g_dbus_proxy_call_sync() functions.
 *
 * See the #GDBusProxy:g-default-timeout property for more details.
 *
 * Returns: Timeout to use for @proxy.
 * Since: 2.26
 */


/**
 * g_dbus_proxy_get_flags:
 * @proxy: A #GDBusProxy.
 *
 * Gets the flags that @proxy was constructed with.
 *
 * Returns: Flags from the #GDBusProxyFlags enumeration.
 * Since: 2.26
 */


/**
 * g_dbus_proxy_get_interface_info:
 * @proxy: A #GDBusProxy
 *
 * Returns the #GDBusInterfaceInfo, if any, specifying the interface
 * that @proxy conforms to. See the #GDBusProxy:g-interface-info
 * property for more details.
 *
 * Returns: A #GDBusInterfaceInfo or %NULL. Do not unref the returned object, it is owned by @proxy.
 * Since: 2.26
 */


/**
 * g_dbus_proxy_get_interface_name:
 * @proxy: A #GDBusProxy.
 *
 * Gets the D-Bus interface name @proxy is for.
 *
 * Returns: A string owned by @proxy. Do not free.
 * Since: 2.26
 */


/**
 * g_dbus_proxy_get_name:
 * @proxy: A #GDBusProxy.
 *
 * Gets the name that @proxy was constructed for.
 *
 * Returns: A string owned by @proxy. Do not free.
 * Since: 2.26
 */


/**
 * g_dbus_proxy_get_name_owner:
 * @proxy: A #GDBusProxy.
 *
 * The unique name that owns the name that @proxy is for or %NULL if
 * no-one currently owns that name. You may connect to the
 * #GObject::notify signal to track changes to the
 * #GDBusProxy:g-name-owner property.
 *
 * Returns: The name owner or %NULL if no name owner exists. Free with g_free().
 * Since: 2.26
 */


/**
 * g_dbus_proxy_get_object_path:
 * @proxy: A #GDBusProxy.
 *
 * Gets the object path @proxy is for.
 *
 * Returns: A string owned by @proxy. Do not free.
 * Since: 2.26
 */


/**
 * g_dbus_proxy_new:
 * @connection: A #GDBusConnection.
 * @flags: Flags used when constructing the proxy.
 * @info: (allow-none): A #GDBusInterfaceInfo specifying the minimal interface that @proxy conforms to or %NULL.
 * @name: (allow-none): A bus name (well-known or unique) or %NULL if @connection is not a message bus connection.
 * @object_path: An object path.
 * @interface_name: A D-Bus interface name.
 * @cancellable: (allow-none): A #GCancellable or %NULL.
 * @callback: Callback function to invoke when the proxy is ready.
 * @user_data: User data to pass to @callback.
 *
 * Creates a proxy for accessing @interface_name on the remote object
 * at @object_path owned by @name at @connection and asynchronously
 * loads D-Bus properties unless the
 * %G_DBUS_PROXY_FLAGS_DO_NOT_LOAD_PROPERTIES flag is used. Connect to
 * the #GDBusProxy::g-properties-changed signal to get notified about
 * property changes.
 *
 * If the %G_DBUS_PROXY_FLAGS_DO_NOT_CONNECT_SIGNALS flag is not set, also sets up
 * match rules for signals. Connect to the #GDBusProxy::g-signal signal
 * to handle signals from the remote object.
 *
 * If @name is a well-known name and the
 * %G_DBUS_PROXY_FLAGS_DO_NOT_AUTO_START flag isn't set and no name
 * owner currently exists, the message bus will be requested to launch
 * a name owner for the name.
 *
 * This is a failable asynchronous constructor - when the proxy is
 * ready, @callback will be invoked and you can use
 * g_dbus_proxy_new_finish() to get the result.
 *
 * See g_dbus_proxy_new_sync() and for a synchronous version of this constructor.
 *
 * See <xref linkend="gdbus-wellknown-proxy"/> for an example of how #GDBusProxy can be used.
 *
 * Since: 2.26
 */


/**
 * g_dbus_proxy_new_finish:
 * @res: A #GAsyncResult obtained from the #GAsyncReadyCallback function passed to g_dbus_proxy_new().
 * @error: Return location for error or %NULL.
 *
 * Finishes creating a #GDBusProxy.
 *
 * Returns: A #GDBusProxy or %NULL if @error is set. Free with g_object_unref().
 * Since: 2.26
 */


/**
 * g_dbus_proxy_new_for_bus:
 * @bus_type: A #GBusType.
 * @flags: Flags used when constructing the proxy.
 * @info: (allow-none): A #GDBusInterfaceInfo specifying the minimal interface that @proxy conforms to or %NULL.
 * @name: A bus name (well-known or unique).
 * @object_path: An object path.
 * @interface_name: A D-Bus interface name.
 * @cancellable: (allow-none): A #GCancellable or %NULL.
 * @callback: Callback function to invoke when the proxy is ready.
 * @user_data: User data to pass to @callback.
 *
 * Like g_dbus_proxy_new() but takes a #GBusType instead of a #GDBusConnection.
 *
 * See <xref linkend="gdbus-wellknown-proxy"/> for an example of how #GDBusProxy can be used.
 *
 * Since: 2.26
 */


/**
 * g_dbus_proxy_new_for_bus_finish:
 * @res: A #GAsyncResult obtained from the #GAsyncReadyCallback function passed to g_dbus_proxy_new_for_bus().
 * @error: Return location for error or %NULL.
 *
 * Finishes creating a #GDBusProxy.
 *
 * Returns: A #GDBusProxy or %NULL if @error is set. Free with g_object_unref().
 * Since: 2.26
 */


/**
 * g_dbus_proxy_new_for_bus_sync:
 * @bus_type: A #GBusType.
 * @flags: Flags used when constructing the proxy.
 * @info: (allow-none): A #GDBusInterfaceInfo specifying the minimal interface that @proxy conforms to or %NULL.
 * @name: A bus name (well-known or unique).
 * @object_path: An object path.
 * @interface_name: A D-Bus interface name.
 * @cancellable: (allow-none): A #GCancellable or %NULL.
 * @error: Return location for error or %NULL.
 *
 * Like g_dbus_proxy_new_sync() but takes a #GBusType instead of a #GDBusConnection.
 *
 * See <xref linkend="gdbus-wellknown-proxy"/> for an example of how #GDBusProxy can be used.
 *
 * Returns: A #GDBusProxy or %NULL if error is set. Free with g_object_unref().
 * Since: 2.26
 */


/**
 * g_dbus_proxy_new_sync:
 * @connection: A #GDBusConnection.
 * @flags: Flags used when constructing the proxy.
 * @info: (allow-none): A #GDBusInterfaceInfo specifying the minimal interface that @proxy conforms to or %NULL.
 * @name: (allow-none): A bus name (well-known or unique) or %NULL if @connection is not a message bus connection.
 * @object_path: An object path.
 * @interface_name: A D-Bus interface name.
 * @cancellable: (allow-none): A #GCancellable or %NULL.
 * @error: (allow-none): Return location for error or %NULL.
 *
 * Creates a proxy for accessing @interface_name on the remote object
 * at @object_path owned by @name at @connection and synchronously
 * loads D-Bus properties unless the
 * %G_DBUS_PROXY_FLAGS_DO_NOT_LOAD_PROPERTIES flag is used.
 *
 * If the %G_DBUS_PROXY_FLAGS_DO_NOT_CONNECT_SIGNALS flag is not set, also sets up
 * match rules for signals. Connect to the #GDBusProxy::g-signal signal
 * to handle signals from the remote object.
 *
 * If @name is a well-known name and the
 * %G_DBUS_PROXY_FLAGS_DO_NOT_AUTO_START flag isn't set and no name
 * owner currently exists, the message bus will be requested to launch
 * a name owner for the name.
 *
 * This is a synchronous failable constructor. See g_dbus_proxy_new()
 * and g_dbus_proxy_new_finish() for the asynchronous version.
 *
 * See <xref linkend="gdbus-wellknown-proxy"/> for an example of how #GDBusProxy can be used.
 *
 * Returns: A #GDBusProxy or %NULL if error is set. Free with g_object_unref().
 * Since: 2.26
 */


/**
 * g_dbus_proxy_set_cached_property:
 * @proxy: A #GDBusProxy
 * @property_name: Property name.
 * @value: (allow-none): Value for the property or %NULL to remove it from the cache.
 *
 * If @value is not %NULL, sets the cached value for the property with
 * name @property_name to the value in @value.
 *
 * If @value is %NULL, then the cached value is removed from the
 * property cache.
 *
 * If @proxy has an expected interface (see
 * #GDBusProxy:g-interface-info) and @property_name is referenced by
 * it, then @value is checked against the type of the property.
 *
 * If the @value #GVariant is floating, it is consumed. This allows
 * convenient 'inline' use of g_variant_new(), e.g.
 * |[
 *  g_dbus_proxy_set_cached_property (proxy,
 *                                    "SomeProperty",
 *                                    g_variant_new ("(si)",
 *                                                  "A String",
 *                                                  42));
 * ]|
 *
 * Normally you will not need to use this method since @proxy is
 * tracking changes using the
 * <literal>org.freedesktop.DBus.Properties.PropertiesChanged</literal>
 * D-Bus signal. However, for performance reasons an object may decide
 * to not use this signal for some properties and instead use a
 * proprietary out-of-band mechanism to transmit changes.
 *
 * As a concrete example, consider an object with a property
 * <literal>ChatroomParticipants</literal> which is an array of
 * strings. Instead of transmitting the same (long) array every time
 * the property changes, it is more efficient to only transmit the
 * delta using e.g. signals <literal>ChatroomParticipantJoined(String
 * name)</literal> and <literal>ChatroomParticipantParted(String
 * name)</literal>.
 *
 * Since: 2.26
 */


/**
 * g_dbus_proxy_set_default_timeout:
 * @proxy: A #GDBusProxy.
 * @timeout_msec: Timeout in milliseconds.
 *
 * Sets the timeout to use if -1 (specifying default timeout) is
 * passed as @timeout_msec in the g_dbus_proxy_call() and
 * g_dbus_proxy_call_sync() functions.
 *
 * See the #GDBusProxy:g-default-timeout property for more details.
 *
 * Since: 2.26
 */


/**
 * g_dbus_proxy_set_interface_info:
 * @proxy: A #GDBusProxy
 * @info: (allow-none): Minimum interface this proxy conforms to or %NULL to unset.
 *
 * Ensure that interactions with @proxy conform to the given
 * interface. See the #GDBusProxy:g-interface-info property for more
 * details.
 *
 * Since: 2.26
 */


/**
 * g_dbus_server_get_client_address:
 * @server: A #GDBusServer.
 *
 * Gets a D-Bus address string that can be used by clients to connect
 * to @server.
 *
 * Returns: A D-Bus address string. Do not free, the string is owned by @server.
 * Since: 2.26
 */


/**
 * g_dbus_server_get_flags:
 * @server: A #GDBusServer.
 *
 * Gets the flags for @server.
 *
 * Returns: A set of flags from the #GDBusServerFlags enumeration.
 * Since: 2.26
 */


/**
 * g_dbus_server_get_guid:
 * @server: A #GDBusServer.
 *
 * Gets the GUID for @server.
 *
 * Returns: A D-Bus GUID. Do not free this string, it is owned by @server.
 * Since: 2.26
 */


/**
 * g_dbus_server_is_active:
 * @server: A #GDBusServer.
 *
 * Gets whether @server is active.
 *
 * Returns: %TRUE if server is active, %FALSE otherwise.
 * Since: 2.26
 */


/**
 * g_dbus_server_new_sync:
 * @address: A D-Bus address.
 * @flags: Flags from the #GDBusServerFlags enumeration.
 * @guid: A D-Bus GUID.
 * @observer: (allow-none): A #GDBusAuthObserver or %NULL.
 * @cancellable: (allow-none): A #GCancellable or %NULL.
 * @error: Return location for server or %NULL.
 *
 * Creates a new D-Bus server that listens on the first address in
 * @address that works.
 *
 * Once constructed, you can use g_dbus_server_get_client_address() to
 * get a D-Bus address string that clients can use to connect.
 *
 * Connect to the #GDBusServer::new-connection signal to handle
 * incoming connections.
 *
 * The returned #GDBusServer isn't active - you have to start it with
 * g_dbus_server_start().
 *
 * See <xref linkend="gdbus-peer-to-peer"/> for how #GDBusServer can
 * be used.
 *
 * This is a synchronous failable constructor. See
 * g_dbus_server_new() for the asynchronous version.
 *
 * Returns: A #GDBusServer or %NULL if @error is set. Free with g_object_unref().
 * Since: 2.26
 */


/**
 * g_dbus_server_start:
 * @server: A #GDBusServer.
 *
 * Starts @server.
 *
 * Since: 2.26
 */


/**
 * g_dbus_server_stop:
 * @server: A #GDBusServer.
 *
 * Stops @server.
 *
 * Since: 2.26
 */


/**
 * g_dbus_signal_info_ref:
 * @info: A #GDBusSignalInfo
 *
 * If @info is statically allocated does nothing. Otherwise increases
 * the reference count.
 *
 * Returns: The same @info.
 * Since: 2.26
 */


/**
 * g_dbus_signal_info_unref:
 * @info: A #GDBusSignalInfo.
 *
 * If @info is statically allocated, does nothing. Otherwise decreases
 * the reference count of @info. When its reference count drops to 0,
 * the memory used is freed.
 *
 * Since: 2.26
 */


/**
 * g_desktop_app_info_get_categories:
 * @info: a #GDesktopAppInfo
 *
 * Gets the categories from the desktop file.
 *
 * Returns: The unparsed Categories key from the desktop file; i.e. no attempt is made to split it by ';' or validate it.
 */


/**
 * g_desktop_app_info_get_filename:
 * @info: a #GDesktopAppInfo
 *
 * When @info was created from a known filename, return it.  In some
 * situations such as the #GDesktopAppInfo returned from
 * g_desktop_app_info_new_from_keyfile(), this function will return %NULL.
 *
 * Returns: The full path to the file for @info, or %NULL if not known.
 * Since: 2.24
 */


/**
 * g_desktop_app_info_get_generic_name:
 * @info: a #GDesktopAppInfo
 *
 * Gets the generic name from the destkop file.
 *
 * Returns: The value of the GenericName key
 */


/**
 * g_desktop_app_info_get_is_hidden:
 * @info: a #GDesktopAppInfo.
 *
 * A desktop file is hidden if the Hidden key in it is
 * set to True.
 *
 * Returns: %TRUE if hidden, %FALSE otherwise.
 */


/**
 * g_desktop_app_info_get_keywords:
 * @info: a #GDesktopAppInfo
 *
 * Gets the keywords from the desktop file.
 *
 * Returns: (transfer none): The value of the Keywords key
 * Since: 2.32
 */


/**
 * g_desktop_app_info_get_nodisplay:
 * @info: a #GDesktopAppInfo
 *
 * Gets the value of the NoDisplay key, which helps determine if the
 * application info should be shown in menus. See
 * #G_KEY_FILE_DESKTOP_KEY_NO_DISPLAY and g_app_info_should_show().
 *
 * Returns: The value of the NoDisplay key
 * Since: 2.30
 */


/**
 * g_desktop_app_info_get_show_in:
 * @info: a #GDesktopAppInfo
 * @desktop_env: a string specifying a desktop name
 *
 * Checks if the application info should be shown in menus that list available
 * applications for a specific name of the desktop, based on the
 * <literal>OnlyShowIn</literal> and <literal>NotShowIn</literal> keys.
 *
 * If @desktop_env is %NULL, then the name of the desktop set with
 * g_desktop_app_info_set_desktop_env() is used.
 *
 * Note that g_app_info_should_show() for @info will include this check (with
 * %NULL for @desktop_env) as well as additional checks.
 *
 * Returns: %TRUE if the @info should be shown in @desktop_env according to the <literal>OnlyShowIn</literal> and <literal>NotShowIn</literal> keys, %FALSE otherwise.
 * Since: 2.30
 */


/**
 * g_desktop_app_info_get_startup_wm_class:
 * @app_info: a #GDesktopAppInfo that supports startup notify
 *
 * Retrieves the StartupWMClass field from @app_info. This represents the
 * WM_CLASS property of the main window of the application, if launched through
 * @app_info.
 *
 * Returns: (transfer none): the startup WM class, or %NULL if none is set in the desktop file.
 * Since: 2.34
 */


/**
 * g_desktop_app_info_launch_uris_as_manager:
 * @appinfo: a #GDesktopAppInfo
 * @uris: (element-type utf8): List of URIs
 * @launch_context: a #GAppLaunchContext
 * @spawn_flags: #GSpawnFlags, used for each process
 * @user_setup: (scope call): a #GSpawnChildSetupFunc, used once for each process.
 * @user_setup_data: (closure user_setup): User data for @user_setup
 * @pid_callback: (scope call): Callback for child processes
 * @pid_callback_data: (closure pid_callback): User data for @callback
 * @error: return location for a #GError, or %NULL
 *
 * This function performs the equivalent of g_app_info_launch_uris(),
 * but is intended primarily for operating system components that
 * launch applications.  Ordinary applications should use
 * g_app_info_launch_uris().
 *
 * In contrast to g_app_info_launch_uris(), all processes created will
 * always be run directly as children as if by the UNIX fork()/exec()
 * calls.
 *
 * This guarantee allows additional control over the exact environment
 * of the child processes, which is provided via a setup function
 * @user_setup, as well as the process identifier of each child process
 * via @pid_callback. See g_spawn_async() for more information about the
 * semantics of the @user_setup function.
 *
 * Returns: %TRUE on successful launch, %FALSE otherwise.
 */


/**
 * g_desktop_app_info_lookup_get_default_for_uri_scheme:
 * @lookup: a #GDesktopAppInfoLookup
 * @uri_scheme: a string containing a URI scheme.
 *
 * Gets the default application for launching applications
 * using this URI scheme for a particular GDesktopAppInfoLookup
 * implementation.
 *
 * The GDesktopAppInfoLookup interface and this function is used
 * to implement g_app_info_get_default_for_uri_scheme() backends
 * in a GIO module. There is no reason for applications to use it
 * directly. Applications should use g_app_info_get_default_for_uri_scheme().
 *
 * Returns: (transfer full): #GAppInfo for given @uri_scheme or %NULL on error.
 * Deprecated: The #GDesktopAppInfoLookup interface is deprecated and unused by gio.
 */


/**
 * g_desktop_app_info_new:
 * @desktop_id: the desktop file id
 *
 * Creates a new #GDesktopAppInfo based on a desktop file id.
 *
 * A desktop file id is the basename of the desktop file, including the
 * .desktop extension. GIO is looking for a desktop file with this name
 * in the <filename>applications</filename> subdirectories of the XDG data
 * directories (i.e. the directories specified in the
 * <envar>XDG_DATA_HOME</envar> and <envar>XDG_DATA_DIRS</envar> environment
 * variables). GIO also supports the prefix-to-subdirectory mapping that is
 * described in the <ulink url="http://standards.freedesktop.org/menu-spec/latest/">Menu Spec</ulink>
 * (i.e. a desktop id of kde-foo.desktop will match
 * <filename>/usr/share/applications/kde/foo.desktop</filename>).
 *
 * Returns: a new #GDesktopAppInfo, or %NULL if no desktop file with that id
 */


/**
 * g_desktop_app_info_new_from_filename:
 * @filename: the path of a desktop file, in the GLib filename encoding
 *
 * Creates a new #GDesktopAppInfo.
 *
 * Returns: a new #GDesktopAppInfo or %NULL on error.
 */


/**
 * g_desktop_app_info_new_from_keyfile:
 * @key_file: an opened #GKeyFile
 *
 * Creates a new #GDesktopAppInfo.
 *
 * Returns: a new #GDesktopAppInfo or %NULL on error.
 * Since: 2.18
 */


/**
 * g_desktop_app_info_set_desktop_env:
 * @desktop_env: a string specifying what desktop this is
 *
 * Sets the name of the desktop that the application is running in.
 * This is used by g_app_info_should_show() and
 * g_desktop_app_info_get_show_in() to evaluate the
 * <literal>OnlyShowIn</literal> and <literal>NotShowIn</literal>
 * desktop entry fields.
 *
 * The <ulink url="http://standards.freedesktop.org/menu-spec/latest/">Desktop
 * Menu specification</ulink> recognizes the following:
 * <simplelist>
 *   <member>GNOME</member>
 *   <member>KDE</member>
 *   <member>ROX</member>
 *   <member>XFCE</member>
 *   <member>LXDE</member>
 *   <member>Unity</member>
 *   <member>Old</member>
 * </simplelist>
 *
 * Should be called only once; subsequent calls are ignored.
 */


/**
 * g_drive_can_eject:
 * @drive: a #GDrive.
 *
 * Checks if a drive can be ejected.
 *
 * Returns: %TRUE if the @drive can be ejected, %FALSE otherwise.
 */


/**
 * g_drive_can_poll_for_media:
 * @drive: a #GDrive.
 *
 * Checks if a drive can be polled for media changes.
 *
 * Returns: %TRUE if the @drive can be polled for media changes, %FALSE otherwise.
 */


/**
 * g_drive_can_start:
 * @drive: a #GDrive.
 *
 * Checks if a drive can be started.
 *
 * Returns: %TRUE if the @drive can be started, %FALSE otherwise.
 * Since: 2.22
 */


/**
 * g_drive_can_start_degraded:
 * @drive: a #GDrive.
 *
 * Checks if a drive can be started degraded.
 *
 * Returns: %TRUE if the @drive can be started degraded, %FALSE otherwise.
 * Since: 2.22
 */


/**
 * g_drive_can_stop:
 * @drive: a #GDrive.
 *
 * Checks if a drive can be stopped.
 *
 * Returns: %TRUE if the @drive can be stopped, %FALSE otherwise.
 * Since: 2.22
 */


/**
 * g_drive_eject:
 * @drive: a #GDrive.
 * @flags: flags affecting the unmount if required for eject
 * @cancellable: (allow-none): optional #GCancellable object, %NULL to ignore.
 * @callback: (allow-none): a #GAsyncReadyCallback, or %NULL.
 * @user_data: user data to pass to @callback
 *
 * Asynchronously ejects a drive.
 *
 * When the operation is finished, @callback will be called.
 * You can then call g_drive_eject_finish() to obtain the
 * result of the operation.
 *
 * Deprecated: 2.22: Use g_drive_eject_with_operation() instead.
 */


/**
 * g_drive_eject_finish:
 * @drive: a #GDrive.
 * @result: a #GAsyncResult.
 * @error: a #GError, or %NULL
 *
 * Finishes ejecting a drive.
 *
 * Returns: %TRUE if the drive has been ejected successfully, %FALSE otherwise.
 * Deprecated: 2.22: Use g_drive_eject_with_operation_finish() instead.
 */


/**
 * g_drive_eject_with_operation:
 * @drive: a #GDrive.
 * @flags: flags affecting the unmount if required for eject
 * @mount_operation: (allow-none): a #GMountOperation or %NULL to avoid user interaction.
 * @cancellable: (allow-none): optional #GCancellable object, %NULL to ignore.
 * @callback: (allow-none): a #GAsyncReadyCallback, or %NULL.
 * @user_data: user data passed to @callback.
 *
 * Ejects a drive. This is an asynchronous operation, and is
 * finished by calling g_drive_eject_with_operation_finish() with the @drive
 * and #GAsyncResult data returned in the @callback.
 *
 * Since: 2.22
 */


/**
 * g_drive_eject_with_operation_finish:
 * @drive: a #GDrive.
 * @result: a #GAsyncResult.
 * @error: a #GError location to store the error occurring, or %NULL to ignore.
 *
 * Finishes ejecting a drive. If any errors occurred during the operation,
 * @error will be set to contain the errors and %FALSE will be returned.
 *
 * Returns: %TRUE if the drive was successfully ejected. %FALSE otherwise.
 * Since: 2.22
 */


/**
 * g_drive_enumerate_identifiers:
 * @drive: a #GDrive
 *
 * Gets the kinds of identifiers that @drive has.
 * Use g_drive_get_identifier() to obtain the identifiers
 * themselves.
 *
 * Returns: (transfer full) (array zero-terminated=1): a %NULL-terminated array of strings containing kinds of identifiers. Use g_strfreev() to free.
 */


/**
 * g_drive_get_icon:
 * @drive: a #GDrive.
 *
 * Gets the icon for @drive.
 *
 * Returns: (transfer full): #GIcon for the @drive. Free the returned object with g_object_unref().
 */


/**
 * g_drive_get_identifier:
 * @drive: a #GDrive
 * @kind: the kind of identifier to return
 *
 * Gets the identifier of the given kind for @drive.
 *
 * Returns: a newly allocated string containing the requested identfier, or %NULL if the #GDrive doesn't have this kind of identifier.
 */


/**
 * g_drive_get_name:
 * @drive: a #GDrive.
 *
 * Gets the name of @drive.
 *
 * Returns: a string containing @drive's name. The returned string should be freed when no longer needed.
 */


/**
 * g_drive_get_sort_key:
 * @drive: A #GDrive.
 *
 * Gets the sort key for @drive, if any.
 *
 * Returns: Sorting key for @drive or %NULL if no such key is available.
 * Since: 2.32
 */


/**
 * g_drive_get_start_stop_type:
 * @drive: a #GDrive.
 *
 * Gets a hint about how a drive can be started/stopped.
 *
 * Returns: A value from the #GDriveStartStopType enumeration.
 * Since: 2.22
 */


/**
 * g_drive_get_volumes:
 * @drive: a #GDrive.
 *
 * Get a list of mountable volumes for @drive.
 *
 * The returned list should be freed with g_list_free(), after
 * its elements have been unreffed with g_object_unref().
 *
 * Returns: (element-type GVolume) (transfer full): #GList containing any #GVolume objects on the given @drive.
 */


/**
 * g_drive_has_media:
 * @drive: a #GDrive.
 *
 * Checks if the @drive has media. Note that the OS may not be polling
 * the drive for media changes; see g_drive_is_media_check_automatic()
 * for more details.
 *
 * Returns: %TRUE if @drive has media, %FALSE otherwise.
 */


/**
 * g_drive_has_volumes:
 * @drive: a #GDrive.
 *
 * Check if @drive has any mountable volumes.
 *
 * Returns: %TRUE if the @drive contains volumes, %FALSE otherwise.
 */


/**
 * g_drive_is_media_check_automatic:
 * @drive: a #GDrive.
 *
 * Checks if @drive is capabable of automatically detecting media changes.
 *
 * Returns: %TRUE if the @drive is capabable of automatically detecting media changes, %FALSE otherwise.
 */


/**
 * g_drive_is_media_removable:
 * @drive: a #GDrive.
 *
 * Checks if the @drive supports removable media.
 *
 * Returns: %TRUE if @drive supports removable media, %FALSE otherwise.
 */


/**
 * g_drive_poll_for_media:
 * @drive: a #GDrive.
 * @cancellable: (allow-none): optional #GCancellable object, %NULL to ignore.
 * @callback: (allow-none): a #GAsyncReadyCallback, or %NULL.
 * @user_data: user data to pass to @callback
 *
 * Asynchronously polls @drive to see if media has been inserted or removed.
 *
 * When the operation is finished, @callback will be called.
 * You can then call g_drive_poll_for_media_finish() to obtain the
 * result of the operation.
 */


/**
 * g_drive_poll_for_media_finish:
 * @drive: a #GDrive.
 * @result: a #GAsyncResult.
 * @error: a #GError, or %NULL
 *
 * Finishes an operation started with g_drive_poll_for_media() on a drive.
 *
 * Returns: %TRUE if the drive has been poll_for_mediaed successfully, %FALSE otherwise.
 */


/**
 * g_drive_start:
 * @drive: a #GDrive.
 * @flags: flags affecting the start operation.
 * @mount_operation: (allow-none): a #GMountOperation or %NULL to avoid user interaction.
 * @cancellable: (allow-none): optional #GCancellable object, %NULL to ignore.
 * @callback: (allow-none): a #GAsyncReadyCallback, or %NULL.
 * @user_data: user data to pass to @callback
 *
 * Asynchronously starts a drive.
 *
 * When the operation is finished, @callback will be called.
 * You can then call g_drive_start_finish() to obtain the
 * result of the operation.
 *
 * Since: 2.22
 */


/**
 * g_drive_start_finish:
 * @drive: a #GDrive.
 * @result: a #GAsyncResult.
 * @error: a #GError, or %NULL
 *
 * Finishes starting a drive.
 *
 * Returns: %TRUE if the drive has been started successfully, %FALSE otherwise.
 * Since: 2.22
 */


/**
 * g_drive_stop:
 * @drive: a #GDrive.
 * @flags: flags affecting the unmount if required for stopping.
 * @mount_operation: (allow-none): a #GMountOperation or %NULL to avoid user interaction.
 * @cancellable: (allow-none): optional #GCancellable object, %NULL to ignore.
 * @callback: (allow-none): a #GAsyncReadyCallback, or %NULL.
 * @user_data: user data to pass to @callback
 *
 * Asynchronously stops a drive.
 *
 * When the operation is finished, @callback will be called.
 * You can then call g_drive_stop_finish() to obtain the
 * result of the operation.
 *
 * Since: 2.22
 */


/**
 * g_drive_stop_finish:
 * @drive: a #GDrive.
 * @result: a #GAsyncResult.
 * @error: a #GError, or %NULL
 *
 * Finishes stopping a drive.
 *
 * Returns: %TRUE if the drive has been stopped successfully, %FALSE otherwise.
 * Since: 2.22
 */


/**
 * g_emblem_get_icon:
 * @emblem: a #GEmblem from which the icon should be extracted.
 *
 * Gives back the icon from @emblem.
 *
 * Returns: (transfer none): a #GIcon. The returned object belongs to the emblem and should not be modified or freed.
 * Since: 2.18
 */


/**
 * g_emblem_get_origin:
 * @emblem: a #GEmblem
 *
 * Gets the origin of the emblem.
 *
 * Returns: (transfer none): the origin of the emblem
 * Since: 2.18
 */


/**
 * g_emblem_new:
 * @icon: a GIcon containing the icon.
 *
 * Creates a new emblem for @icon.
 *
 * Returns: a new #GEmblem.
 * Since: 2.18
 */


/**
 * g_emblem_new_with_origin:
 * @icon: a GIcon containing the icon.
 * @origin: a GEmblemOrigin enum defining the emblem's origin
 *
 * Creates a new emblem for @icon.
 *
 * Returns: a new #GEmblem.
 * Since: 2.18
 */


/**
 * g_emblemed_icon_add_emblem:
 * @emblemed: a #GEmblemedIcon
 * @emblem: a #GEmblem
 *
 * Adds @emblem to the #GList of #GEmblem <!-- -->s.
 *
 * Since: 2.18
 */


/**
 * g_emblemed_icon_clear_emblems:
 * @emblemed: a #GEmblemedIcon
 *
 * Removes all the emblems from @icon.
 *
 * Since: 2.28
 */


/**
 * g_emblemed_icon_get_emblems:
 * @emblemed: a #GEmblemedIcon
 *
 * Gets the list of emblems for the @icon.
 *
 * Returns: (element-type Gio.Emblem) (transfer none): a #GList of #GEmblem <!-- -->s that is owned by @emblemed
 * Since: 2.18
 */


/**
 * g_emblemed_icon_get_icon:
 * @emblemed: a #GEmblemedIcon
 *
 * Gets the main icon for @emblemed.
 *
 * Returns: (transfer none): a #GIcon that is owned by @emblemed
 * Since: 2.18
 */


/**
 * g_emblemed_icon_new:
 * @icon: a #GIcon
 * @emblem: (allow-none): a #GEmblem, or %NULL
 *
 * Creates a new emblemed icon for @icon with the emblem @emblem.
 *
 * Returns: (transfer full) (type GEmblemedIcon): a new #GIcon
 * Since: 2.18
 */


/**
 * g_file_append_to:
 * @file: input #GFile.
 * @flags: a set of #GFileCreateFlags.
 * @cancellable: (allow-none): optional #GCancellable object, %NULL to ignore.
 * @error: a #GError, or %NULL
 *
 * Gets an output stream for appending data to the file. If
 * the file doesn't already exist it is created.
 *
 * By default files created are generally readable by everyone,
 * but if you pass #G_FILE_CREATE_PRIVATE in @flags the file
 * will be made readable only to the current user, to the level that
 * is supported on the target filesystem.
 *
 * If @cancellable is not %NULL, then the operation can be cancelled by
 * triggering the cancellable object from another thread. If the operation
 * was cancelled, the error %G_IO_ERROR_CANCELLED will be returned.
 *
 * Some file systems don't allow all file names, and may
 * return an %G_IO_ERROR_INVALID_FILENAME error.
 * If the file is a directory the %G_IO_ERROR_IS_DIRECTORY error will be
 * returned. Other errors are possible too, and depend on what kind of
 * filesystem the file is on.
 *
 * Returns: (transfer full): a #GFileOutputStream, or %NULL on error. Free the returned object with g_object_unref().
 */


/**
 * g_file_append_to_async:
 * @file: input #GFile.
 * @flags: a set of #GFileCreateFlags.
 * @io_priority: the <link linkend="io-priority">I/O priority</link> of the request.
 * @cancellable: (allow-none): optional #GCancellable object, %NULL to ignore.
 * @callback: (scope async): a #GAsyncReadyCallback to call when the request is satisfied
 * @user_data: (closure): the data to pass to callback function
 *
 * Asynchronously opens @file for appending.
 *
 * For more details, see g_file_append_to() which is
 * the synchronous version of this call.
 *
 * When the operation is finished, @callback will be called. You can then call
 * g_file_append_to_finish() to get the result of the operation.
 */


/**
 * g_file_append_to_finish:
 * @file: input #GFile.
 * @res: #GAsyncResult
 * @error: a #GError, or %NULL
 *
 * Finishes an asynchronous file append operation started with
 * g_file_append_to_async().
 *
 * Returns: (transfer full): a valid #GFileOutputStream or %NULL on error. Free the returned object with g_object_unref().
 */


/**
 * g_file_attribute_info_list_add:
 * @list: a #GFileAttributeInfoList.
 * @name: the name of the attribute to add.
 * @type: the #GFileAttributeType for the attribute.
 * @flags: #GFileAttributeInfoFlags for the attribute.
 *
 * Adds a new attribute with @name to the @list, setting
 * its @type and @flags.
 */


/**
 * g_file_attribute_info_list_dup:
 * @list: a #GFileAttributeInfoList to duplicate.
 *
 * Makes a duplicate of a file attribute info list.
 *
 * Returns: a copy of the given @list.
 */


/**
 * g_file_attribute_info_list_lookup:
 * @list: a #GFileAttributeInfoList.
 * @name: the name of the attribute to lookup.
 *
 * Gets the file attribute with the name @name from @list.
 *
 * Returns: a #GFileAttributeInfo for the @name, or %NULL if an attribute isn't found.
 */


/**
 * g_file_attribute_info_list_new:
 *
 * Creates a new file attribute info list.
 *
 * Returns: a #GFileAttributeInfoList.
 */


/**
 * g_file_attribute_info_list_ref:
 * @list: a #GFileAttributeInfoList to reference.
 *
 * References a file attribute info list.
 *
 * Returns: #GFileAttributeInfoList or %NULL on error.
 */


/**
 * g_file_attribute_info_list_unref:
 * @list: The #GFileAttributeInfoList to unreference.
 *
 * Removes a reference from the given @list. If the reference count
 * falls to zero, the @list is deleted.
 */


/**
 * g_file_attribute_matcher_enumerate_namespace:
 * @matcher: a #GFileAttributeMatcher.
 * @ns: a string containing a file attribute namespace.
 *
 * Checks if the matcher will match all of the keys in a given namespace.
 * This will always return %TRUE if a wildcard character is in use (e.g. if
 * matcher was created with "standard::*" and @ns is "standard", or if matcher was created
 * using "*" and namespace is anything.)
 *
 * TODO: this is awkwardly worded.
 *
 * Returns: %TRUE if the matcher matches all of the entries in the given @ns, %FALSE otherwise.
 */


/**
 * g_file_attribute_matcher_enumerate_next:
 * @matcher: a #GFileAttributeMatcher.
 *
 * Gets the next matched attribute from a #GFileAttributeMatcher.
 *
 * Returns: a string containing the next attribute or %NULL if no more attribute exist.
 */


/**
 * g_file_attribute_matcher_matches:
 * @matcher: a #GFileAttributeMatcher.
 * @attribute: a file attribute key.
 *
 * Checks if an attribute will be matched by an attribute matcher. If
 * the matcher was created with the "*" matching string, this function
 * will always return %TRUE.
 *
 * Returns: %TRUE if @attribute matches @matcher. %FALSE otherwise.
 */


/**
 * g_file_attribute_matcher_matches_only:
 * @matcher: a #GFileAttributeMatcher.
 * @attribute: a file attribute key.
 *
 * Checks if a attribute matcher only matches a given attribute. Always
 * returns %FALSE if "*" was used when creating the matcher.
 *
 * Returns: %TRUE if the matcher only matches @attribute. %FALSE otherwise.
 */


/**
 * g_file_attribute_matcher_new:
 * @attributes: an attribute string to match.
 *
 * Creates a new file attribute matcher, which matches attributes
 * against a given string. #GFileAttributeMatcher<!-- -->s are reference
 * counted structures, and are created with a reference count of 1. If
 * the number of references falls to 0, the #GFileAttributeMatcher is
 * automatically destroyed.
 *
 * The @attribute string should be formatted with specific keys separated
 * from namespaces with a double colon. Several "namespace::key" strings may be
 * concatenated with a single comma (e.g. "standard::type,standard::is-hidden").
 * The wildcard "*" may be used to match all keys and namespaces, or
 * "namespace::*" will match all keys in a given namespace.
 *
 * Examples of strings to use:
 * <table>
 * <title>File Attribute Matcher strings and results</title>
 * <tgroup cols='2' align='left'><thead>
 * <row><entry> Matcher String </entry><entry> Matches </entry></row></thead>
 * <tbody>
 * <row><entry>"*"</entry><entry>matches all attributes.</entry></row>
 * <row><entry>"standard::is-hidden"</entry><entry>matches only the key is-hidden in the standard namespace.</entry></row>
 * <row><entry>"standard::type,unix::*"</entry><entry>matches the type key in the standard namespace and
 * all keys in the unix namespace.</entry></row>
 * </tbody></tgroup>
 * </table>
 *
 * Returns: a #GFileAttributeMatcher.
 */


/**
 * g_file_attribute_matcher_ref:
 * @matcher: a #GFileAttributeMatcher.
 *
 * References a file attribute matcher.
 *
 * Returns: a #GFileAttributeMatcher.
 */


/**
 * g_file_attribute_matcher_subtract:
 * @matcher: Matcher to subtract from
 * @subtract: The matcher to subtract
 *
 * Subtracts all attributes of @subtract from @matcher and returns
 * a matcher that supports those attributes.
 *
 * Note that currently it is not possible to remove a single
 * attribute when the @matcher matches the whole namespace - or remove
 * a namespace or attribute when the matcher matches everything. This
 * is a limitation of the current implementation, but may be fixed
 * in the future.
 *
 * Returns: A file attribute matcher matching all attributes of @matcher that are not matched by @subtract
 */


/**
 * g_file_attribute_matcher_to_string:
 * @matcher: (allow-none): a #GFileAttributeMatcher.
 *
 * Prints what the matcher is matching against. The format will be
 * equal to the format passed to g_file_attribute_matcher_new().
 * The output however, might not be identical, as the matcher may
 * decide to use a different order or omit needless parts.
 *
 * Returns: a string describing the attributes the matcher matches against or %NULL if @matcher was %NULL.
 * Since: 2.32
 */


/**
 * g_file_attribute_matcher_unref:
 * @matcher: a #GFileAttributeMatcher.
 *
 * Unreferences @matcher. If the reference count falls below 1,
 * the @matcher is automatically freed.
 */


/**
 * g_file_copy:
 * @source: input #GFile.
 * @destination: destination #GFile
 * @flags: set of #GFileCopyFlags
 * @cancellable: (allow-none): optional #GCancellable object, %NULL to ignore
 * @progress_callback: (allow-none) (scope call): function to callback with progress information, or %NULL if progress information is not needed
 * @progress_callback_data: (closure): user data to pass to @progress_callback
 * @error: #GError to set on error, or %NULL
 *
 * Copies the file @source to the location specified by @destination.
 * Can not handle recursive copies of directories.
 *
 * If the flag #G_FILE_COPY_OVERWRITE is specified an already
 * existing @destination file is overwritten.
 *
 * If the flag #G_FILE_COPY_NOFOLLOW_SYMLINKS is specified then symlinks
 * will be copied as symlinks, otherwise the target of the
 * @source symlink will be copied.
 *
 * If @cancellable is not %NULL, then the operation can be cancelled by
 * triggering the cancellable object from another thread. If the operation
 * was cancelled, the error %G_IO_ERROR_CANCELLED will be returned.
 *
 * If @progress_callback is not %NULL, then the operation can be monitored by
 * setting this to a #GFileProgressCallback function. @progress_callback_data
 * will be passed to this function. It is guaranteed that this callback will
 * be called after all data has been transferred with the total number of bytes
 * copied during the operation.
 *
 * If the @source file does not exist then the G_IO_ERROR_NOT_FOUND
 * error is returned, independent on the status of the @destination.
 *
 * If #G_FILE_COPY_OVERWRITE is not specified and the target exists, then the
 * error G_IO_ERROR_EXISTS is returned.
 *
 * If trying to overwrite a file over a directory the G_IO_ERROR_IS_DIRECTORY
 * error is returned. If trying to overwrite a directory with a directory the
 * G_IO_ERROR_WOULD_MERGE error is returned.
 *
 * If the source is a directory and the target does not exist, or
 * #G_FILE_COPY_OVERWRITE is specified and the target is a file, then the
 * G_IO_ERROR_WOULD_RECURSE error is returned.
 *
 * If you are interested in copying the #GFile object itself (not the on-disk
 * file), see g_file_dup().
 *
 * Returns: %TRUE on success, %FALSE otherwise.
 */


/**
 * g_file_copy_async: (skip)
 * @source: input #GFile.
 * @destination: destination #GFile
 * @flags: set of #GFileCopyFlags
 * @io_priority: the <link linkend="io-priority">I/O priority</link> of the request
 * @cancellable: (allow-none): optional #GCancellable object, %NULL to ignore
 * @progress_callback: (allow-none): function to callback with progress information, or %NULL if progress information is not needed
 * @progress_callback_data: (closure): user data to pass to @progress_callback
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied
 * @user_data: the data to pass to callback function
 *
 * Copies the file @source to the location specified by @destination
 * asynchronously. For details of the behaviour, see g_file_copy().
 *
 * If @progress_callback is not %NULL, then that function that will be called
 * just like in g_file_copy(), however the callback will run in the main loop,
 * not in the thread that is doing the I/O operation.
 *
 * When the operation is finished, @callback will be called. You can then call
 * g_file_copy_finish() to get the result of the operation.
 */


/**
 * g_file_copy_attributes:
 * @source: a #GFile with attributes.
 * @destination: a #GFile to copy attributes to.
 * @flags: a set of #GFileCopyFlags.
 * @cancellable: (allow-none): optional #GCancellable object, %NULL to ignore.
 * @error: a #GError, %NULL to ignore.
 *
 * Copies the file attributes from @source to @destination.
 *
 * Normally only a subset of the file attributes are copied,
 * those that are copies in a normal file copy operation
 * (which for instance does not include e.g. owner). However
 * if #G_FILE_COPY_ALL_METADATA is specified in @flags, then
 * all the metadata that is possible to copy is copied. This
 * is useful when implementing move by copy + delete source.
 *
 * Returns: %TRUE if the attributes were copied successfully, %FALSE otherwise.
 */


/**
 * g_file_copy_finish:
 * @file: input #GFile.
 * @res: a #GAsyncResult.
 * @error: a #GError, or %NULL
 *
 * Finishes copying the file started with
 * g_file_copy_async().
 *
 * Returns: a %TRUE on success, %FALSE on error.
 */


/**
 * g_file_create:
 * @file: input #GFile.
 * @flags: a set of #GFileCreateFlags.
 * @cancellable: (allow-none): optional #GCancellable object, %NULL to ignore.
 * @error: a #GError, or %NULL
 *
 * Creates a new file and returns an output stream for writing to it.
 * The file must not already exist.
 *
 * By default files created are generally readable by everyone,
 * but if you pass #G_FILE_CREATE_PRIVATE in @flags the file
 * will be made readable only to the current user, to the level that
 * is supported on the target filesystem.
 *
 * If @cancellable is not %NULL, then the operation can be cancelled by
 * triggering the cancellable object from another thread. If the operation
 * was cancelled, the error %G_IO_ERROR_CANCELLED will be returned.
 *
 * If a file or directory with this name already exists the G_IO_ERROR_EXISTS
 * error will be returned.
 * Some file systems don't allow all file names, and may
 * return an G_IO_ERROR_INVALID_FILENAME error, and if the name
 * is to long G_IO_ERROR_FILENAME_TOO_LONG will be returned.
 * Other errors are possible too, and depend on what kind of
 * filesystem the file is on.
 *
 * Returns: (transfer full): a #GFileOutputStream for the newly created file, or %NULL on error. Free the returned object with g_object_unref().
 */


/**
 * g_file_create_async:
 * @file: input #GFile.
 * @flags: a set of #GFileCreateFlags.
 * @io_priority: the <link linkend="io-priority">I/O priority</link> of the request.
 * @cancellable: (allow-none): optional #GCancellable object, %NULL to ignore.
 * @callback: (scope async): a #GAsyncReadyCallback to call when the request is satisfied
 * @user_data: (closure): the data to pass to callback function
 *
 * Asynchronously creates a new file and returns an output stream for writing to it.
 * The file must not already exist.
 *
 * For more details, see g_file_create() which is
 * the synchronous version of this call.
 *
 * When the operation is finished, @callback will be called. You can then call
 * g_file_create_finish() to get the result of the operation.
 */


/**
 * g_file_create_finish:
 * @file: input #GFile.
 * @res: a #GAsyncResult.
 * @error: a #GError, or %NULL
 *
 * Finishes an asynchronous file create operation started with
 * g_file_create_async().
 *
 * Returns: (transfer full): a #GFileOutputStream or %NULL on error. Free the returned object with g_object_unref().
 */


/**
 * g_file_create_readwrite:
 * @file: a #GFile
 * @flags: a set of #GFileCreateFlags
 * @cancellable: (allow-none): optional #GCancellable object, %NULL to ignore
 * @error: return location for a #GError, or %NULL
 *
 * Creates a new file and returns a stream for reading and writing to it.
 * The file must not already exist.
 *
 * By default files created are generally readable by everyone,
 * but if you pass #G_FILE_CREATE_PRIVATE in @flags the file
 * will be made readable only to the current user, to the level that
 * is supported on the target filesystem.
 *
 * If @cancellable is not %NULL, then the operation can be cancelled by
 * triggering the cancellable object from another thread. If the operation
 * was cancelled, the error %G_IO_ERROR_CANCELLED will be returned.
 *
 * If a file or directory with this name already exists the %G_IO_ERROR_EXISTS
 * error will be returned. Some file systems don't allow all file names,
 * and may return an %G_IO_ERROR_INVALID_FILENAME error, and if the name
 * is too long, %G_IO_ERROR_FILENAME_TOO_LONG will be returned. Other errors
 * are possible too, and depend on what kind of filesystem the file is on.
 *
 * Note that in many non-local file cases read and write streams are not
 * supported, so make sure you really need to do read and write streaming,
 * rather than just opening for reading or writing.
 *
 * Returns: (transfer full): a #GFileIOStream for the newly created file, or %NULL on error. Free the returned object with g_object_unref().
 * Since: 2.22
 */


/**
 * g_file_create_readwrite_async:
 * @file: input #GFile
 * @flags: a set of #GFileCreateFlags
 * @io_priority: the <link linkend="io-priority">I/O priority</link> of the request
 * @cancellable: (allow-none): optional #GCancellable object, %NULL to ignore
 * @callback: (scope async): a #GAsyncReadyCallback to call when the request is satisfied
 * @user_data: (closure): the data to pass to callback function
 *
 * Asynchronously creates a new file and returns a stream for reading and
 * writing to it. The file must not already exist.
 *
 * For more details, see g_file_create_readwrite() which is
 * the synchronous version of this call.
 *
 * When the operation is finished, @callback will be called. You can then
 * call g_file_create_readwrite_finish() to get the result of the operation.
 *
 * Since: 2.22
 */


/**
 * g_file_create_readwrite_finish:
 * @file: input #GFile
 * @res: a #GAsyncResult
 * @error: a #GError, or %NULL
 *
 * Finishes an asynchronous file create operation started with
 * g_file_create_readwrite_async().
 *
 * Returns: (transfer full): a #GFileIOStream or %NULL on error. Free the returned object with g_object_unref().
 * Since: 2.22
 */


/**
 * g_file_delete:
 * @file: input #GFile.
 * @cancellable: (allow-none): optional #GCancellable object, %NULL to ignore.
 * @error: a #GError, or %NULL
 *
 * Deletes a file. If the @file is a directory, it will only be deleted if it
 * is empty.
 *
 * If @cancellable is not %NULL, then the operation can be cancelled by
 * triggering the cancellable object from another thread. If the operation
 * was cancelled, the error %G_IO_ERROR_CANCELLED will be returned.
 *
 * Virtual: delete_file
 * Returns: %TRUE if the file was deleted. %FALSE otherwise.
 */


/**
 * g_file_descriptor_based_get_fd:
 * @fd_based: a #GFileDescriptorBased.
 *
 * Gets the underlying file descriptor.
 *
 * Returns: The file descriptor
 * Since: 2.24
 */


/**
 * g_file_dup:
 * @file: input #GFile.
 *
 * Duplicates a #GFile handle. This operation does not duplicate
 * the actual file or directory represented by the #GFile; see
 * g_file_copy() if attempting to copy a file.
 *
 * This call does no blocking i/o.
 *
 * Returns: (transfer full): a new #GFile that is a duplicate of the given #GFile.
 */


/**
 * g_file_eject_mountable:
 * @file: input #GFile.
 * @flags: flags affecting the operation
 * @cancellable: (allow-none): optional #GCancellable object, %NULL to ignore.
 * @callback: (scope async) (allow-none): a #GAsyncReadyCallback to call when the request is satisfied, or %NULL.
 * @user_data: (closure): the data to pass to callback function
 *
 * Starts an asynchronous eject on a mountable.
 * When this operation has completed, @callback will be called with
 * @user_user data, and the operation can be finalized with
 * g_file_eject_mountable_finish().
 *
 * If @cancellable is not %NULL, then the operation can be cancelled by
 * triggering the cancellable object from another thread. If the operation
 * was cancelled, the error %G_IO_ERROR_CANCELLED will be returned.
 *
 * Deprecated: 2.22: Use g_file_eject_mountable_with_operation() instead.
 */


/**
 * g_file_eject_mountable_finish:
 * @file: input #GFile.
 * @result: a #GAsyncResult.
 * @error: a #GError, or %NULL
 *
 * Finishes an asynchronous eject operation started by
 * g_file_eject_mountable().
 *
 * Returns: %TRUE if the @file was ejected successfully. %FALSE otherwise.
 * Deprecated: 2.22: Use g_file_eject_mountable_with_operation_finish() instead.
 */


/**
 * g_file_eject_mountable_with_operation:
 * @file: input #GFile.
 * @flags: flags affecting the operation
 * @mount_operation: (allow-none): a #GMountOperation, or %NULL to avoid user interaction.
 * @cancellable: (allow-none): optional #GCancellable object, %NULL to ignore.
 * @callback: (scope async) (allow-none): a #GAsyncReadyCallback to call when the request is satisfied, or %NULL.
 * @user_data: (closure): the data to pass to callback function
 *
 * Starts an asynchronous eject on a mountable.
 * When this operation has completed, @callback will be called with
 * @user_user data, and the operation can be finalized with
 * g_file_eject_mountable_with_operation_finish().
 *
 * If @cancellable is not %NULL, then the operation can be cancelled by
 * triggering the cancellable object from another thread. If the operation
 * was cancelled, the error %G_IO_ERROR_CANCELLED will be returned.
 *
 * Since: 2.22
 */


/**
 * g_file_eject_mountable_with_operation_finish:
 * @file: input #GFile.
 * @result: a #GAsyncResult.
 * @error: a #GError, or %NULL
 *
 * Finishes an asynchronous eject operation started by
 * g_file_eject_mountable_with_operation().
 *
 * Returns: %TRUE if the @file was ejected successfully. %FALSE otherwise.
 * Since: 2.22
 */


/**
 * g_file_enumerate_children:
 * @file: input #GFile.
 * @attributes: an attribute query string.
 * @flags: a set of #GFileQueryInfoFlags.
 * @cancellable: (allow-none): optional #GCancellable object, %NULL to ignore.
 * @error: #GError for error reporting.
 *
 * Gets the requested information about the files in a directory. The result
 * is a #GFileEnumerator object that will give out #GFileInfo objects for
 * all the files in the directory.
 *
 * The @attributes value is a string that specifies the file attributes that
 * should be gathered. It is not an error if it's not possible to read a particular
 * requested attribute from a file - it just won't be set. @attributes should
 * be a comma-separated list of attributes or attribute wildcards. The wildcard "*"
 * means all attributes, and a wildcard like "standard::*" means all attributes in the standard
 * namespace. An example attribute query be "standard::*,owner::user".
 * The standard attributes are available as defines, like #G_FILE_ATTRIBUTE_STANDARD_NAME.
 *
 * If @cancellable is not %NULL, then the operation can be cancelled by
 * triggering the cancellable object from another thread. If the operation
 * was cancelled, the error %G_IO_ERROR_CANCELLED will be returned.
 *
 * If the file does not exist, the G_IO_ERROR_NOT_FOUND error will be returned.
 * If the file is not a directory, the G_FILE_ERROR_NOTDIR error will be returned.
 * Other errors are possible too.
 *
 * Returns: (transfer full): A #GFileEnumerator if successful, %NULL on error. Free the returned object with g_object_unref().
 */


/**
 * g_file_enumerate_children_async:
 * @file: input #GFile.
 * @attributes: an attribute query string.
 * @flags: a set of #GFileQueryInfoFlags.
 * @io_priority: the <link linkend="io-priority">I/O priority</link> of the request.
 * @cancellable: (allow-none): optional #GCancellable object, %NULL to ignore.
 * @callback: (scope async): a #GAsyncReadyCallback to call when the request is satisfied
 * @user_data: (closure): the data to pass to callback function
 *
 * Asynchronously gets the requested information about the files in a directory. The result
 * is a #GFileEnumerator object that will give out #GFileInfo objects for
 * all the files in the directory.
 *
 * For more details, see g_file_enumerate_children() which is
 * the synchronous version of this call.
 *
 * When the operation is finished, @callback will be called. You can then call
 * g_file_enumerate_children_finish() to get the result of the operation.
 */


/**
 * g_file_enumerate_children_finish:
 * @file: input #GFile.
 * @res: a #GAsyncResult.
 * @error: a #GError.
 *
 * Finishes an async enumerate children operation.
 * See g_file_enumerate_children_async().
 *
 * Returns: (transfer full): a #GFileEnumerator or %NULL if an error occurred. Free the returned object with g_object_unref().
 */


/**
 * g_file_enumerator_close:
 * @enumerator: a #GFileEnumerator.
 * @cancellable: (allow-none): optional #GCancellable object, %NULL to ignore.
 * @error: location to store the error occurring, or %NULL to ignore
 *
 * Releases all resources used by this enumerator, making the
 * enumerator return %G_IO_ERROR_CLOSED on all calls.
 *
 * This will be automatically called when the last reference
 * is dropped, but you might want to call this function to make
 * sure resources are released as early as possible.
 *
 * Returns: #TRUE on success or #FALSE on error.
 */


/**
 * g_file_enumerator_close_async:
 * @enumerator: a #GFileEnumerator.
 * @io_priority: the <link linkend="io-priority">I/O priority</link> of the request.
 * @cancellable: (allow-none): optional #GCancellable object, %NULL to ignore.
 * @callback: (scope async): a #GAsyncReadyCallback to call when the request is satisfied
 * @user_data: (closure): the data to pass to callback function
 *
 * Asynchronously closes the file enumerator.
 *
 * If @cancellable is not %NULL, then the operation can be cancelled by
 * triggering the cancellable object from another thread. If the operation
 * was cancelled, the error %G_IO_ERROR_CANCELLED will be returned in
 * g_file_enumerator_close_finish().
 */


/**
 * g_file_enumerator_close_finish:
 * @enumerator: a #GFileEnumerator.
 * @result: a #GAsyncResult.
 * @error: a #GError location to store the error occurring, or %NULL to ignore.
 *
 * Finishes closing a file enumerator, started from g_file_enumerator_close_async().
 *
 * If the file enumerator was already closed when g_file_enumerator_close_async()
 * was called, then this function will report %G_IO_ERROR_CLOSED in @error, and
 * return %FALSE. If the file enumerator had pending operation when the close
 * operation was started, then this function will report %G_IO_ERROR_PENDING, and
 * return %FALSE.  If @cancellable was not %NULL, then the operation may have been
 * cancelled by triggering the cancellable object from another thread. If the operation
 * was cancelled, the error %G_IO_ERROR_CANCELLED will be set, and %FALSE will be
 * returned.
 *
 * Returns: %TRUE if the close operation has finished successfully.
 */


/**
 * g_file_enumerator_get_container:
 * @enumerator: a #GFileEnumerator
 *
 * Get the #GFile container which is being enumerated.
 *
 * Returns: (transfer none): the #GFile which is being enumerated.
 * Since: 2.18
 */


/**
 * g_file_enumerator_has_pending:
 * @enumerator: a #GFileEnumerator.
 *
 * Checks if the file enumerator has pending operations.
 *
 * Returns: %TRUE if the @enumerator has pending operations.
 */


/**
 * g_file_enumerator_is_closed:
 * @enumerator: a #GFileEnumerator.
 *
 * Checks if the file enumerator has been closed.
 *
 * Returns: %TRUE if the @enumerator is closed.
 */


/**
 * g_file_enumerator_next_file:
 * @enumerator: a #GFileEnumerator.
 * @cancellable: (allow-none): optional #GCancellable object, %NULL to ignore.
 * @error: location to store the error occurring, or %NULL to ignore
 *
 * Returns information for the next file in the enumerated object.
 * Will block until the information is available. The #GFileInfo
 * returned from this function will contain attributes that match the
 * attribute string that was passed when the #GFileEnumerator was created.
 *
 * On error, returns %NULL and sets @error to the error. If the
 * enumerator is at the end, %NULL will be returned and @error will
 * be unset.
 *
 * Returns: (transfer full): A #GFileInfo or %NULL on error or end of enumerator. Free the returned object with g_object_unref() when no longer needed.
 */


/**
 * g_file_enumerator_next_files_async:
 * @enumerator: a #GFileEnumerator.
 * @num_files: the number of file info objects to request
 * @io_priority: the <link linkend="gioscheduler">io priority</link> of the request.
 * @cancellable: (allow-none): optional #GCancellable object, %NULL to ignore.
 * @callback: (scope async): a #GAsyncReadyCallback to call when the request is satisfied
 * @user_data: (closure): the data to pass to callback function
 *
 * Request information for a number of files from the enumerator asynchronously.
 * When all i/o for the operation is finished the @callback will be called with
 * the requested information.
 *
 * The callback can be called with less than @num_files files in case of error
 * or at the end of the enumerator. In case of a partial error the callback will
 * be called with any succeeding items and no error, and on the next request the
 * error will be reported. If a request is cancelled the callback will be called
 * with %G_IO_ERROR_CANCELLED.
 *
 * During an async request no other sync and async calls are allowed, and will
 * result in %G_IO_ERROR_PENDING errors.
 *
 * Any outstanding i/o request with higher priority (lower numerical value) will
 * be executed before an outstanding request with lower priority. Default
 * priority is %G_PRIORITY_DEFAULT.
 */


/**
 * g_file_enumerator_next_files_finish:
 * @enumerator: a #GFileEnumerator.
 * @result: a #GAsyncResult.
 * @error: a #GError location to store the error occurring, or %NULL to ignore.
 *
 * Finishes the asynchronous operation started with g_file_enumerator_next_files_async().
 *
 * Returns: (transfer full) (element-type Gio.FileInfo): a #GList of #GFileInfo<!---->s. You must free the list with g_list_free() and unref the infos with g_object_unref() when you're done with them.
 */


/**
 * g_file_enumerator_set_pending:
 * @enumerator: a #GFileEnumerator.
 * @pending: a boolean value.
 *
 * Sets the file enumerator as having pending operations.
 */


/**
 * g_file_equal:
 * @file1: the first #GFile.
 * @file2: the second #GFile.
 *
 * Checks equality of two given #GFile<!-- -->s. Note that two
 * #GFile<!-- -->s that differ can still refer to the same
 * file on the filesystem due to various forms of filename
 * aliasing.
 *
 * This call does no blocking i/o.
 *
 * Returns: %TRUE if @file1 and @file2 are equal. %FALSE if either is not a #GFile.
 */


/**
 * g_file_find_enclosing_mount:
 * @file: input #GFile.
 * @cancellable: (allow-none): optional #GCancellable object, %NULL to ignore.
 * @error: a #GError.
 *
 * Gets a #GMount for the #GFile.
 *
 * If the #GFileIface for @file does not have a mount (e.g. possibly a
 * remote share), @error will be set to %G_IO_ERROR_NOT_FOUND and %NULL
 * will be returned.
 *
 * If @cancellable is not %NULL, then the operation can be cancelled by
 * triggering the cancellable object from another thread. If the operation
 * was cancelled, the error %G_IO_ERROR_CANCELLED will be returned.
 *
 * Returns: (transfer full): a #GMount where the @file is located or %NULL on error. Free the returned object with g_object_unref().
 */


/**
 * g_file_find_enclosing_mount_async:
 * @file: a #GFile
 * @io_priority: the <link linkend="io-priority">I/O priority</link> of the request.
 * @cancellable: (allow-none): optional #GCancellable object, %NULL to ignore.
 * @callback: (scope async): a #GAsyncReadyCallback to call when the request is satisfied
 * @user_data: (closure): the data to pass to callback function
 *
 * Asynchronously gets the mount for the file.
 *
 * For more details, see g_file_find_enclosing_mount() which is
 * the synchronous version of this call.
 *
 * When the operation is finished, @callback will be called. You can then call
 * g_file_find_enclosing_mount_finish() to get the result of the operation.
 */


/**
 * g_file_find_enclosing_mount_finish:
 * @file: a #GFile
 * @res: a #GAsyncResult
 * @error: a #GError
 *
 * Finishes an asynchronous find mount request.
 * See g_file_find_enclosing_mount_async().
 *
 * Returns: (transfer full): #GMount for given @file or %NULL on error. Free the returned object with g_object_unref().
 */


/**
 * g_file_get_basename:
 * @file: input #GFile.
 *
 * Gets the base name (the last component of the path) for a given #GFile.
 *
 * If called for the top level of a system (such as the filesystem root
 * or a uri like sftp://host/) it will return a single directory separator
 * (and on Windows, possibly a drive letter).
 *
 * The base name is a byte string (*not* UTF-8). It has no defined encoding
 * or rules other than it may not contain zero bytes.  If you want to use
 * filenames in a user interface you should use the display name that you
 * can get by requesting the %G_FILE_ATTRIBUTE_STANDARD_DISPLAY_NAME
 * attribute with g_file_query_info().
 *
 * This call does no blocking i/o.
 *
 * Returns: string containing the #GFile's base name, or %NULL if given #GFile is invalid. The returned string should be freed with g_free() when no longer needed.
 */


/**
 * g_file_get_child:
 * @file: input #GFile.
 * @name: string containing the child's basename.
 *
 * Gets a child of @file with basename equal to @name.
 *
 * Note that the file with that specific name might not exist, but
 * you can still have a #GFile that points to it. You can use this
 * for instance to create that file.
 *
 * This call does no blocking i/o.
 *
 * Returns: (transfer full): a #GFile to a child specified by @name. Free the returned object with g_object_unref().
 */


/**
 * g_file_get_child_for_display_name:
 * @file: input #GFile.
 * @display_name: string to a possible child.
 * @error: #GError.
 *
 * Gets the child of @file for a given @display_name (i.e. a UTF8
 * version of the name). If this function fails, it returns %NULL and @error will be
 * set. This is very useful when constructing a GFile for a new file
 * and the user entered the filename in the user interface, for instance
 * when you select a directory and type a filename in the file selector.
 *
 * This call does no blocking i/o.
 *
 * Returns: (transfer full): a #GFile to the specified child, or %NULL if the display name couldn't be converted. Free the returned object with g_object_unref().
 */


/**
 * g_file_get_parent:
 * @file: input #GFile.
 *
 * Gets the parent directory for the @file.
 * If the @file represents the root directory of the
 * file system, then %NULL will be returned.
 *
 * This call does no blocking i/o.
 *
 * Returns: (transfer full): a #GFile structure to the parent of the given #GFile or %NULL if there is no parent. Free the returned object with g_object_unref().
 */


/**
 * g_file_get_parse_name:
 * @file: input #GFile.
 *
 * Gets the parse name of the @file.
 * A parse name is a UTF-8 string that describes the
 * file such that one can get the #GFile back using
 * g_file_parse_name().
 *
 * This is generally used to show the #GFile as a nice
 * full-pathname kind of string in a user interface,
 * like in a location entry.
 *
 * For local files with names that can safely be converted
 * to UTF8 the pathname is used, otherwise the IRI is used
 * (a form of URI that allows UTF8 characters unescaped).
 *
 * This call does no blocking i/o.
 *
 * Returns: a string containing the #GFile's parse name. The returned string should be freed with g_free() when no longer needed.
 */


/**
 * g_file_get_path:
 * @file: input #GFile.
 *
 * Gets the local pathname for #GFile, if one exists.
 *
 * This call does no blocking i/o.
 *
 * Returns: string containing the #GFile's path, or %NULL if no such path exists. The returned string should be freed with g_free() when no longer needed.
 */


/**
 * g_file_get_relative_path:
 * @parent: input #GFile.
 * @descendant: input #GFile.
 *
 * Gets the path for @descendant relative to @parent.
 *
 * This call does no blocking i/o.
 *
 * Returns: string with the relative path from @descendant to @parent, or %NULL if @descendant doesn't have @parent as prefix. The returned string should be freed with g_free() when no longer needed.
 */


/**
 * g_file_get_uri:
 * @file: input #GFile.
 *
 * Gets the URI for the @file.
 *
 * This call does no blocking i/o.
 *
 * Returns: a string containing the #GFile's URI. The returned string should be freed with g_free() when no longer needed.
 */


/**
 * g_file_get_uri_scheme:
 * @file: input #GFile.
 *
 * Gets the URI scheme for a #GFile.
 * RFC 3986 decodes the scheme as:
 * <programlisting>
 * URI = scheme ":" hier-part [ "?" query ] [ "#" fragment ]
 * </programlisting>
 * Common schemes include "file", "http", "ftp", etc.
 *
 * This call does no blocking i/o.
 *
 * Returns: a string containing the URI scheme for the given #GFile. The returned string should be freed with g_free() when no longer needed.
 */


/**
 * g_file_has_parent:
 * @file: input #GFile
 * @parent: (allow-none): the parent to check for, or %NULL
 *
 * Checks if @file has a parent, and optionally, if it is @parent.
 *
 * If @parent is %NULL then this function returns %TRUE if @file has any
 * parent at all.  If @parent is non-%NULL then %TRUE is only returned
 * if @file is a child of @parent.
 *
 * Returns: %TRUE if @file is a child of @parent (or any parent in the case that @parent is %NULL).
 * Since: 2.24
 */


/**
 * g_file_has_prefix:
 * @file: input #GFile.
 * @prefix: input #GFile.
 *
 * Checks whether @file has the prefix specified by @prefix. In other word,
 * if the names of initial elements of @file<!-- -->s pathname match @prefix.
 * Only full pathname elements are matched, so a path like /foo is not
 * considered a prefix of /foobar, only of /foo/bar.
 *
 * This call does no i/o, as it works purely on names. As such it can
 * sometimes return %FALSE even if @file is inside a @prefix (from a
 * filesystem point of view), because the prefix of @file is an alias
 * of @prefix.
 *
 * Virtual: prefix_matches
 * Returns: %TRUE if the @files's parent, grandparent, etc is @prefix. %FALSE otherwise.
 */


/**
 * g_file_has_uri_scheme:
 * @file: input #GFile.
 * @uri_scheme: a string containing a URI scheme.
 *
 * Checks to see if a #GFile has a given URI scheme.
 *
 * This call does no blocking i/o.
 *
 * Returns: %TRUE if #GFile's backend supports the given URI scheme, %FALSE if URI scheme is %NULL, not supported, or #GFile is invalid.
 */


/**
 * g_file_hash:
 * @file: (type GFile): #gconstpointer to a #GFile.
 *
 * Creates a hash value for a #GFile.
 *
 * This call does no blocking i/o.
 *
 * Virtual: hash
 * Returns: 0 if @file is not a valid #GFile, otherwise an integer that can be used as hash value for the #GFile. This function is intended for easily hashing a #GFile to add to a #GHashTable or similar data structure.
 */


/**
 * g_file_icon_get_file:
 * @icon: a #GIcon.
 *
 * Gets the #GFile associated with the given @icon.
 *
 * Returns: (transfer none): a #GFile, or %NULL.
 */


/**
 * g_file_icon_new:
 * @file: a #GFile.
 *
 * Creates a new icon for a file.
 *
 * Returns: (transfer full) (type GFileIcon): a #GIcon for the given @file, or %NULL on error.
 */


/**
 * g_file_info_clear_status:
 * @info: a #GFileInfo.
 *
 * Clears the status information from @info.
 */


/**
 * g_file_info_copy_into:
 * @src_info: source to copy attributes from.
 * @dest_info: destination to copy attributes to.
 *
 * Copies all of the <link linkend="gio-GFileAttribute">GFileAttribute</link>s
 * from @src_info to @dest_info.
 */


/**
 * g_file_info_dup:
 * @other: a #GFileInfo.
 *
 * Duplicates a file info structure.
 *
 * Returns: (transfer full): a duplicate #GFileInfo of @other.
 */


/**
 * g_file_info_get_attribute_as_string:
 * @info: a #GFileInfo.
 * @attribute: a file attribute key.
 *
 * Gets the value of a attribute, formated as a string.
 * This escapes things as needed to make the string valid
 * utf8.
 *
 * Returns: a UTF-8 string associated with the given @attribute. When you're done with the string it must be freed with g_free().
 */


/**
 * g_file_info_get_attribute_boolean:
 * @info: a #GFileInfo.
 * @attribute: a file attribute key.
 *
 * Gets the value of a boolean attribute. If the attribute does not
 * contain a boolean value, %FALSE will be returned.
 *
 * Returns: the boolean value contained within the attribute.
 */


/**
 * g_file_info_get_attribute_byte_string:
 * @info: a #GFileInfo.
 * @attribute: a file attribute key.
 *
 * Gets the value of a byte string attribute. If the attribute does
 * not contain a byte string, %NULL will be returned.
 *
 * Returns: the contents of the @attribute value as a byte string, or %NULL otherwise.
 */


/**
 * g_file_info_get_attribute_data:
 * @info: a #GFileInfo
 * @attribute: a file attribute key
 * @type: (out) (allow-none): return location for the attribute type, or %NULL
 * @value_pp: (out) (allow-none): return location for the attribute value, or %NULL
 * @status: (out) (allow-none): return location for the attribute status, or %NULL
 *
 * Gets the attribute type, value and status for an attribute key.
 *
 * Returns: (transfer none): %TRUE if @info has an attribute named @attribute, %FALSE otherwise.
 */


/**
 * g_file_info_get_attribute_int32:
 * @info: a #GFileInfo.
 * @attribute: a file attribute key.
 *
 * Gets a signed 32-bit integer contained within the attribute. If the
 * attribute does not contain a signed 32-bit integer, or is invalid,
 * 0 will be returned.
 *
 * Returns: a signed 32-bit integer from the attribute.
 */


/**
 * g_file_info_get_attribute_int64:
 * @info: a #GFileInfo.
 * @attribute: a file attribute key.
 *
 * Gets a signed 64-bit integer contained within the attribute. If the
 * attribute does not contain an signed 64-bit integer, or is invalid,
 * 0 will be returned.
 *
 * Returns: a signed 64-bit integer from the attribute.
 */


/**
 * g_file_info_get_attribute_object:
 * @info: a #GFileInfo.
 * @attribute: a file attribute key.
 *
 * Gets the value of a #GObject attribute. If the attribute does
 * not contain a #GObject, %NULL will be returned.
 *
 * Returns: (transfer none): a #GObject associated with the given @attribute, or %NULL otherwise.
 */


/**
 * g_file_info_get_attribute_status:
 * @info: a #GFileInfo
 * @attribute: a file attribute key
 *
 * Gets the attribute status for an attribute key.
 *
 * Returns: a #GFileAttributeStatus for the given @attribute, or %G_FILE_ATTRIBUTE_STATUS_UNSET if the key is invalid.
 */


/**
 * g_file_info_get_attribute_string:
 * @info: a #GFileInfo.
 * @attribute: a file attribute key.
 *
 * Gets the value of a string attribute. If the attribute does
 * not contain a string, %NULL will be returned.
 *
 * Returns: the contents of the @attribute value as a UTF-8 string, or %NULL otherwise.
 */


/**
 * g_file_info_get_attribute_stringv:
 * @info: a #GFileInfo.
 * @attribute: a file attribute key.
 *
 * Gets the value of a stringv attribute. If the attribute does
 * not contain a stringv, %NULL will be returned.
 *
 * Returns: (transfer none): the contents of the @attribute value as a stringv, or %NULL otherwise. Do not free. These returned strings are UTF-8.
 * Since: 2.22
 */


/**
 * g_file_info_get_attribute_type:
 * @info: a #GFileInfo.
 * @attribute: a file attribute key.
 *
 * Gets the attribute type for an attribute key.
 *
 * Returns: a #GFileAttributeType for the given @attribute, or %G_FILE_ATTRIBUTE_TYPE_INVALID if the key is not set.
 */


/**
 * g_file_info_get_attribute_uint32:
 * @info: a #GFileInfo.
 * @attribute: a file attribute key.
 *
 * Gets an unsigned 32-bit integer contained within the attribute. If the
 * attribute does not contain an unsigned 32-bit integer, or is invalid,
 * 0 will be returned.
 *
 * Returns: an unsigned 32-bit integer from the attribute.
 */


/**
 * g_file_info_get_attribute_uint64:
 * @info: a #GFileInfo.
 * @attribute: a file attribute key.
 *
 * Gets a unsigned 64-bit integer contained within the attribute. If the
 * attribute does not contain an unsigned 64-bit integer, or is invalid,
 * 0 will be returned.
 *
 * Returns: a unsigned 64-bit integer from the attribute.
 */


/**
 * g_file_info_get_content_type:
 * @info: a #GFileInfo.
 *
 * Gets the file's content type.
 *
 * Returns: a string containing the file's content type.
 */


/**
 * g_file_info_get_display_name:
 * @info: a #GFileInfo.
 *
 * Gets a display name for a file.
 *
 * Returns: a string containing the display name.
 */


/**
 * g_file_info_get_edit_name:
 * @info: a #GFileInfo.
 *
 * Gets the edit name for a file.
 *
 * Returns: a string containing the edit name.
 */


/**
 * g_file_info_get_etag:
 * @info: a #GFileInfo.
 *
 * Gets the <link linkend="gfile-etag">entity tag</link> for a given
 * #GFileInfo. See %G_FILE_ATTRIBUTE_ETAG_VALUE.
 *
 * Returns: a string containing the value of the "etag:value" attribute.
 */


/**
 * g_file_info_get_file_type:
 * @info: a #GFileInfo.
 *
 * Gets a file's type (whether it is a regular file, symlink, etc).
 * This is different from the file's content type, see g_file_info_get_content_type().
 *
 * Returns: a #GFileType for the given file.
 */


/**
 * g_file_info_get_icon:
 * @info: a #GFileInfo.
 *
 * Gets the icon for a file.
 *
 * Returns: (transfer none): #GIcon for the given @info.
 */


/**
 * g_file_info_get_is_backup:
 * @info: a #GFileInfo.
 *
 * Checks if a file is a backup file.
 *
 * Returns: %TRUE if file is a backup file, %FALSE otherwise.
 */


/**
 * g_file_info_get_is_hidden:
 * @info: a #GFileInfo.
 *
 * Checks if a file is hidden.
 *
 * Returns: %TRUE if the file is a hidden file, %FALSE otherwise.
 */


/**
 * g_file_info_get_is_symlink:
 * @info: a #GFileInfo.
 *
 * Checks if a file is a symlink.
 *
 * Returns: %TRUE if the given @info is a symlink.
 */


/**
 * g_file_info_get_modification_time:
 * @info: a #GFileInfo.
 * @result: (out caller-allocates): a #GTimeVal.
 *
 * Gets the modification time of the current @info and sets it
 * in @result.
 */


/**
 * g_file_info_get_name:
 * @info: a #GFileInfo.
 *
 * Gets the name for a file.
 *
 * Returns: a string containing the file name.
 */


/**
 * g_file_info_get_size:
 * @info: a #GFileInfo.
 *
 * Gets the file's size.
 *
 * Returns: a #goffset containing the file's size.
 */


/**
 * g_file_info_get_sort_order:
 * @info: a #GFileInfo.
 *
 * Gets the value of the sort_order attribute from the #GFileInfo.
 * See %G_FILE_ATTRIBUTE_STANDARD_SORT_ORDER.
 *
 * Returns: a #gint32 containing the value of the "standard::sort_order" attribute.
 */


/**
 * g_file_info_get_symlink_target:
 * @info: a #GFileInfo.
 *
 * Gets the symlink target for a given #GFileInfo.
 *
 * Returns: a string containing the symlink target.
 */


/**
 * g_file_info_has_attribute:
 * @info: a #GFileInfo.
 * @attribute: a file attribute key.
 *
 * Checks if a file info structure has an attribute named @attribute.
 *
 * Returns: %TRUE if @Ginfo has an attribute named @attribute, %FALSE otherwise.
 */


/**
 * g_file_info_has_namespace:
 * @info: a #GFileInfo.
 * @name_space: a file attribute namespace.
 *
 * Checks if a file info structure has an attribute in the
 * specified @name_space.
 *
 * Returns: %TRUE if @Ginfo has an attribute in @name_space, %FALSE otherwise.
 * Since: 2.22
 */


/**
 * g_file_info_list_attributes:
 * @info: a #GFileInfo.
 * @name_space: a file attribute key's namespace.
 *
 * Lists the file info structure's attributes.
 *
 * Returns: (array zero-terminated=1) (transfer full): a null-terminated array of strings of all of the possible attribute types for the given @name_space, or %NULL on error.
 */


/**
 * g_file_info_new:
 *
 * Creates a new file info structure.
 *
 * Returns: a #GFileInfo.
 */


/**
 * g_file_info_remove_attribute:
 * @info: a #GFileInfo.
 * @attribute: a file attribute key.
 *
 * Removes all cases of @attribute from @info if it exists.
 */


/**
 * g_file_info_set_attribute:
 * @info: a #GFileInfo.
 * @attribute: a file attribute key.
 * @type: a #GFileAttributeType
 * @value_p: pointer to the value
 *
 * Sets the @attribute to contain the given value, if possible. To unset the
 * attribute, use %G_ATTRIBUTE_TYPE_INVALID for @type.
 */


/**
 * g_file_info_set_attribute_boolean:
 * @info: a #GFileInfo.
 * @attribute: a file attribute key.
 * @attr_value: a boolean value.
 *
 * Sets the @attribute to contain the given @attr_value,
 * if possible.
 */


/**
 * g_file_info_set_attribute_byte_string:
 * @info: a #GFileInfo.
 * @attribute: a file attribute key.
 * @attr_value: a byte string.
 *
 * Sets the @attribute to contain the given @attr_value,
 * if possible.
 */


/**
 * g_file_info_set_attribute_int32:
 * @info: a #GFileInfo.
 * @attribute: a file attribute key.
 * @attr_value: a signed 32-bit integer
 *
 * Sets the @attribute to contain the given @attr_value,
 * if possible.
 */


/**
 * g_file_info_set_attribute_int64:
 * @info: a #GFileInfo.
 * @attribute: attribute name to set.
 * @attr_value: int64 value to set attribute to.
 *
 * Sets the @attribute to contain the given @attr_value,
 * if possible.
 */


/**
 * g_file_info_set_attribute_mask:
 * @info: a #GFileInfo.
 * @mask: a #GFileAttributeMatcher.
 *
 * Sets @mask on @info to match specific attribute types.
 */


/**
 * g_file_info_set_attribute_object:
 * @info: a #GFileInfo.
 * @attribute: a file attribute key.
 * @attr_value: a #GObject.
 *
 * Sets the @attribute to contain the given @attr_value,
 * if possible.
 */


/**
 * g_file_info_set_attribute_status:
 * @info: a #GFileInfo
 * @attribute: a file attribute key
 * @status: a #GFileAttributeStatus
 *
 * Sets the attribute status for an attribute key. This is only
 * needed by external code that implement g_file_set_attributes_from_info()
 * or similar functions.
 *
 * The attribute must exist in @info for this to work. Otherwise %FALSE
 * is returned and @info is unchanged.
 *
 * Returns: %TRUE if the status was changed, %FALSE if the key was not set.
 * Since: 2.22
 */


/**
 * g_file_info_set_attribute_string:
 * @info: a #GFileInfo.
 * @attribute: a file attribute key.
 * @attr_value: a UTF-8 string.
 *
 * Sets the @attribute to contain the given @attr_value,
 * if possible.
 */


/**
 * g_file_info_set_attribute_stringv:
 * @info: a #GFileInfo.
 * @attribute: a file attribute key
 * @attr_value: (array) (element-type utf8): a %NULL terminated array of UTF-8 strings.
 *
 * Sets the @attribute to contain the given @attr_value,
 * if possible.
 *
 * Sinze: 2.22
 */


/**
 * g_file_info_set_attribute_uint32:
 * @info: a #GFileInfo.
 * @attribute: a file attribute key.
 * @attr_value: an unsigned 32-bit integer.
 *
 * Sets the @attribute to contain the given @attr_value,
 * if possible.
 */


/**
 * g_file_info_set_attribute_uint64:
 * @info: a #GFileInfo.
 * @attribute: a file attribute key.
 * @attr_value: an unsigned 64-bit integer.
 *
 * Sets the @attribute to contain the given @attr_value,
 * if possible.
 */


/**
 * g_file_info_set_content_type:
 * @info: a #GFileInfo.
 * @content_type: a content type. See <link linkend="gio-GContentType">GContentType</link>.
 *
 * Sets the content type attribute for a given #GFileInfo.
 * See %G_FILE_ATTRIBUTE_STANDARD_CONTENT_TYPE.
 */


/**
 * g_file_info_set_display_name:
 * @info: a #GFileInfo.
 * @display_name: a string containing a display name.
 *
 * Sets the display name for the current #GFileInfo.
 * See %G_FILE_ATTRIBUTE_STANDARD_DISPLAY_NAME.
 */


/**
 * g_file_info_set_edit_name:
 * @info: a #GFileInfo.
 * @edit_name: a string containing an edit name.
 *
 * Sets the edit name for the current file.
 * See %G_FILE_ATTRIBUTE_STANDARD_EDIT_NAME.
 */


/**
 * g_file_info_set_file_type:
 * @info: a #GFileInfo.
 * @type: a #GFileType.
 *
 * Sets the file type in a #GFileInfo to @type.
 * See %G_FILE_ATTRIBUTE_STANDARD_TYPE.
 */


/**
 * g_file_info_set_icon:
 * @info: a #GFileInfo.
 * @icon: a #GIcon.
 *
 * Sets the icon for a given #GFileInfo.
 * See %G_FILE_ATTRIBUTE_STANDARD_ICON.
 */


/**
 * g_file_info_set_is_hidden:
 * @info: a #GFileInfo.
 * @is_hidden: a #gboolean.
 *
 * Sets the "is_hidden" attribute in a #GFileInfo according to @is_symlink.
 * See %G_FILE_ATTRIBUTE_STANDARD_IS_HIDDEN.
 */


/**
 * g_file_info_set_is_symlink:
 * @info: a #GFileInfo.
 * @is_symlink: a #gboolean.
 *
 * Sets the "is_symlink" attribute in a #GFileInfo according to @is_symlink.
 * See %G_FILE_ATTRIBUTE_STANDARD_IS_SYMLINK.
 */


/**
 * g_file_info_set_modification_time:
 * @info: a #GFileInfo.
 * @mtime: a #GTimeVal.
 *
 * Sets the %G_FILE_ATTRIBUTE_TIME_MODIFIED attribute in the file
 * info to the given time value.
 */


/**
 * g_file_info_set_name:
 * @info: a #GFileInfo.
 * @name: a string containing a name.
 *
 * Sets the name attribute for the current #GFileInfo.
 * See %G_FILE_ATTRIBUTE_STANDARD_NAME.
 */


/**
 * g_file_info_set_size:
 * @info: a #GFileInfo.
 * @size: a #goffset containing the file's size.
 *
 * Sets the %G_FILE_ATTRIBUTE_STANDARD_SIZE attribute in the file info
 * to the given size.
 */


/**
 * g_file_info_set_sort_order:
 * @info: a #GFileInfo.
 * @sort_order: a sort order integer.
 *
 * Sets the sort order attribute in the file info structure. See
 * %G_FILE_ATTRIBUTE_STANDARD_SORT_ORDER.
 */


/**
 * g_file_info_set_symlink_target:
 * @info: a #GFileInfo.
 * @symlink_target: a static string containing a path to a symlink target.
 *
 * Sets the %G_FILE_ATTRIBUTE_STANDARD_SYMLINK_TARGET attribute in the file info
 * to the given symlink target.
 */


/**
 * g_file_info_unset_attribute_mask:
 * @info: #GFileInfo.
 *
 * Unsets a mask set by g_file_info_set_attribute_mask(), if one
 * is set.
 */


/**
 * g_file_input_stream_query_info:
 * @stream: a #GFileInputStream.
 * @attributes: a file attribute query string.
 * @cancellable: (allow-none): optional #GCancellable object, %NULL to ignore.
 * @error: a #GError location to store the error occurring, or %NULL to ignore.
 *
 * Queries a file input stream the given @attributes. This function blocks
 * while querying the stream. For the asynchronous (non-blocking) version
 * of this function, see g_file_input_stream_query_info_async(). While the
 * stream is blocked, the stream will set the pending flag internally, and
 * any other operations on the stream will fail with %G_IO_ERROR_PENDING.
 *
 * Returns: (transfer full): a #GFileInfo, or %NULL on error.
 */


/**
 * g_file_input_stream_query_info_async:
 * @stream: a #GFileInputStream.
 * @attributes: a file attribute query string.
 * @io_priority: the <link linkend="io-priority">I/O priority</link> of the request.
 * @cancellable: (allow-none): optional #GCancellable object, %NULL to ignore.
 * @callback: (scope async): callback to call when the request is satisfied
 * @user_data: (closure): the data to pass to callback function
 *
 * Queries the stream information asynchronously.
 * When the operation is finished @callback will be called.
 * You can then call g_file_input_stream_query_info_finish()
 * to get the result of the operation.
 *
 * For the synchronous version of this function,
 * see g_file_input_stream_query_info().
 *
 * If @cancellable is not %NULL, then the operation can be cancelled by
 * triggering the cancellable object from another thread. If the operation
 * was cancelled, the error %G_IO_ERROR_CANCELLED will be set
 */


/**
 * g_file_input_stream_query_info_finish:
 * @stream: a #GFileInputStream.
 * @result: a #GAsyncResult.
 * @error: a #GError location to store the error occurring, or %NULL to ignore.
 *
 * Finishes an asynchronous info query operation.
 *
 * Returns: (transfer full): #GFileInfo.
 */


/**
 * g_file_io_stream_get_etag:
 * @stream: a #GFileIOStream.
 *
 * Gets the entity tag for the file when it has been written.
 * This must be called after the stream has been written
 * and closed, as the etag can change while writing.
 *
 * Returns: the entity tag for the stream.
 * Since: 2.22
 */


/**
 * g_file_io_stream_query_info:
 * @stream: a #GFileIOStream.
 * @attributes: a file attribute query string.
 * @cancellable: (allow-none): optional #GCancellable object, %NULL to ignore.
 * @error: a #GError, %NULL to ignore.
 *
 * Queries a file io stream for the given @attributes.
 * This function blocks while querying the stream. For the asynchronous
 * version of this function, see g_file_io_stream_query_info_async().
 * While the stream is blocked, the stream will set the pending flag
 * internally, and any other operations on the stream will fail with
 * %G_IO_ERROR_PENDING.
 *
 * Can fail if the stream was already closed (with @error being set to
 * %G_IO_ERROR_CLOSED), the stream has pending operations (with @error being
 * set to %G_IO_ERROR_PENDING), or if querying info is not supported for
 * the stream's interface (with @error being set to %G_IO_ERROR_NOT_SUPPORTED). I
 * all cases of failure, %NULL will be returned.
 *
 * If @cancellable is not %NULL, then the operation can be cancelled by
 * triggering the cancellable object from another thread. If the operation
 * was cancelled, the error %G_IO_ERROR_CANCELLED will be set, and %NULL will
 * be returned.
 *
 * Returns: (transfer full): a #GFileInfo for the @stream, or %NULL on error.
 * Since: 2.22
 */


/**
 * g_file_io_stream_query_info_async:
 * @stream: a #GFileIOStream.
 * @attributes: a file attribute query string.
 * @io_priority: the <link linkend="gio-GIOScheduler">I/O priority</link> of the request.
 * @cancellable: (allow-none): optional #GCancellable object, %NULL to ignore.
 * @callback: (scope async): callback to call when the request is satisfied
 * @user_data: (closure): the data to pass to callback function
 *
 * Asynchronously queries the @stream for a #GFileInfo. When completed,
 * @callback will be called with a #GAsyncResult which can be used to
 * finish the operation with g_file_io_stream_query_info_finish().
 *
 * For the synchronous version of this function, see
 * g_file_io_stream_query_info().
 *
 * Since: 2.22
 */


/**
 * g_file_io_stream_query_info_finish:
 * @stream: a #GFileIOStream.
 * @result: a #GAsyncResult.
 * @error: a #GError, %NULL to ignore.
 *
 * Finalizes the asynchronous query started
 * by g_file_io_stream_query_info_async().
 *
 * Returns: (transfer full): A #GFileInfo for the finished query.
 * Since: 2.22
 */


/**
 * g_file_is_native:
 * @file: input #GFile.
 *
 * Checks to see if a file is native to the platform.
 *
 * A native file s one expressed in the platform-native filename format,
 * e.g. "C:\Windows" or "/usr/bin/". This does not mean the file is local,
 * as it might be on a locally mounted remote filesystem.
 *
 * On some systems non-native files may be available using
 * the native filesystem via a userspace filesystem (FUSE), in
 * these cases this call will return %FALSE, but g_file_get_path()
 * will still return a native path.
 *
 * This call does no blocking i/o.
 *
 * Returns: %TRUE if file is native.
 */


/**
 * g_file_load_contents:
 * @file: input #GFile.
 * @cancellable: optional #GCancellable object, %NULL to ignore.
 * @contents: (out) (transfer full) (element-type guint8) (array length=length): a location to place the contents of the file.
 * @length: (out) (allow-none): a location to place the length of the contents of the file, or %NULL if the length is not needed
 * @etag_out: (out) (allow-none): a location to place the current entity tag for the file, or %NULL if the entity tag is not needed
 * @error: a #GError, or %NULL
 *
 * Loads the content of the file into memory. The data is always
 * zero-terminated, but this is not included in the resultant @length.
 * The returned @content should be freed with g_free() when no longer
 * needed.
 *
 * If @cancellable is not %NULL, then the operation can be cancelled by
 * triggering the cancellable object from another thread. If the operation
 * was cancelled, the error %G_IO_ERROR_CANCELLED will be returned.
 *
 * Returns: %TRUE if the @file's contents were successfully loaded. %FALSE if there were errors.
 */


/**
 * g_file_load_contents_async:
 * @file: input #GFile.
 * @cancellable: optional #GCancellable object, %NULL to ignore.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied
 * @user_data: the data to pass to callback function
 *
 * Starts an asynchronous load of the @file's contents.
 *
 * For more details, see g_file_load_contents() which is
 * the synchronous version of this call.
 *
 * When the load operation has completed, @callback will be called
 * with @user data. To finish the operation, call
 * g_file_load_contents_finish() with the #GAsyncResult returned by
 * the @callback.
 *
 * If @cancellable is not %NULL, then the operation can be cancelled by
 * triggering the cancellable object from another thread. If the operation
 * was cancelled, the error %G_IO_ERROR_CANCELLED will be returned.
 */


/**
 * g_file_load_contents_finish:
 * @file: input #GFile.
 * @res: a #GAsyncResult.
 * @contents: (out) (transfer full) (element-type guint8) (array length=length): a location to place the contents of the file.
 * @length: (out) (allow-none): a location to place the length of the contents of the file, or %NULL if the length is not needed
 * @etag_out: (out) (allow-none): a location to place the current entity tag for the file, or %NULL if the entity tag is not needed
 * @error: a #GError, or %NULL
 *
 * Finishes an asynchronous load of the @file's contents.
 * The contents are placed in @contents, and @length is set to the
 * size of the @contents string. The @content should be freed with
 * g_free() when no longer needed. If @etag_out is present, it will be
 * set to the new entity tag for the @file.
 *
 * Returns: %TRUE if the load was successful. If %FALSE and @error is present, it will be set appropriately.
 */


/**
 * g_file_load_partial_contents_async: (skip)
 * @file: input #GFile.
 * @cancellable: optional #GCancellable object, %NULL to ignore.
 * @read_more_callback: a #GFileReadMoreCallback to receive partial data and to specify whether further data should be read.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied
 * @user_data: the data to pass to the callback functions.
 *
 * Reads the partial contents of a file. A #GFileReadMoreCallback should be
 * used to stop reading from the file when appropriate, else this function
 * will behave exactly as g_file_load_contents_async(). This operation
 * can be finished by g_file_load_partial_contents_finish().
 *
 * Users of this function should be aware that @user_data is passed to
 * both the @read_more_callback and the @callback.
 *
 * If @cancellable is not %NULL, then the operation can be cancelled by
 * triggering the cancellable object from another thread. If the operation
 * was cancelled, the error %G_IO_ERROR_CANCELLED will be returned.
 */


/**
 * g_file_load_partial_contents_finish:
 * @file: input #GFile.
 * @res: a #GAsyncResult.
 * @contents: (out) (transfer full) (element-type guint8) (array length=length): a location to place the contents of the file.
 * @length: (out) (allow-none): a location to place the length of the contents of the file, or %NULL if the length is not needed
 * @etag_out: (out) (allow-none): a location to place the current entity tag for the file, or %NULL if the entity tag is not needed
 * @error: a #GError, or %NULL
 *
 * Finishes an asynchronous partial load operation that was started
 * with g_file_load_partial_contents_async(). The data is always
 * zero-terminated, but this is not included in the resultant @length.
 * The returned @content should be freed with g_free() when no longer
 * needed.
 *
 * Returns: %TRUE if the load was successful. If %FALSE and @error is present, it will be set appropriately.
 */


/**
 * g_file_make_directory:
 * @file: input #GFile.
 * @cancellable: (allow-none): optional #GCancellable object, %NULL to ignore.
 * @error: a #GError, or %NULL
 *
 * Creates a directory. Note that this will only create a child directory of
 * the immediate parent directory of the path or URI given by the #GFile. To
 * recursively create directories, see g_file_make_directory_with_parents().
 * This function will fail if the parent directory does not exist, setting
 * @error to %G_IO_ERROR_NOT_FOUND. If the file system doesn't support creating
 * directories, this function will fail, setting @error to
 * %G_IO_ERROR_NOT_SUPPORTED.
 *
 * For a local #GFile the newly created directory will have the default
 * (current) ownership and permissions of the current process.
 *
 * If @cancellable is not %NULL, then the operation can be cancelled by
 * triggering the cancellable object from another thread. If the operation
 * was cancelled, the error %G_IO_ERROR_CANCELLED will be returned.
 *
 * Returns: %TRUE on successful creation, %FALSE otherwise.
 */


/**
 * g_file_make_directory_with_parents:
 * @file: input #GFile.
 * @cancellable: (allow-none): optional #GCancellable object, %NULL to ignore.
 * @error: a #GError, or %NULL
 *
 * Creates a directory and any parent directories that may not exist similar to
 * 'mkdir -p'. If the file system does not support creating directories, this
 * function will fail, setting @error to %G_IO_ERROR_NOT_SUPPORTED. If the
 * directory itself already exists, this function will fail setting @error
 * to %G_IO_ERROR_EXISTS, unlike the similar g_mkdir_with_parents().
 *
 * For a local #GFile the newly created directories will have the default
 * (current) ownership and permissions of the current process.
 *
 * If @cancellable is not %NULL, then the operation can be cancelled by
 * triggering the cancellable object from another thread. If the operation
 * was cancelled, the error %G_IO_ERROR_CANCELLED will be returned.
 *
 * Returns: %TRUE if all directories have been successfully created, %FALSE otherwise.
 * Since: 2.18
 */


/**
 * g_file_make_symbolic_link:
 * @file: a #GFile with the name of the symlink to create
 * @symlink_value: a string with the path for the target of the new symlink
 * @cancellable: (allow-none): optional #GCancellable object, %NULL to ignore.
 * @error: a #GError.
 *
 * Creates a symbolic link named @file which contains the string
 * @symlink_value.
 *
 * If @cancellable is not %NULL, then the operation can be cancelled by
 * triggering the cancellable object from another thread. If the operation
 * was cancelled, the error %G_IO_ERROR_CANCELLED will be returned.
 *
 * Returns: %TRUE on the creation of a new symlink, %FALSE otherwise.
 */


/**
 * g_file_monitor:
 * @file: input #GFile
 * @flags: a set of #GFileMonitorFlags
 * @cancellable: (allow-none): optional #GCancellable object, %NULL to ignore
 * @error: a #GError, or %NULL
 *
 * Obtains a file or directory monitor for the given file, depending
 * on the type of the file.
 *
 * If @cancellable is not %NULL, then the operation can be cancelled by
 * triggering the cancellable object from another thread. If the operation
 * was cancelled, the error %G_IO_ERROR_CANCELLED will be returned.
 *
 * Returns: (transfer full): a #GFileMonitor for the given @file, or %NULL on error. Free the returned object with g_object_unref().
 * Since: 2.18
 */


/**
 * g_file_monitor_cancel:
 * @monitor: a #GFileMonitor.
 *
 * Cancels a file monitor.
 *
 * Returns: %TRUE if monitor was cancelled.
 */


/**
 * g_file_monitor_directory:
 * @file: input #GFile.
 * @flags: a set of #GFileMonitorFlags.
 * @cancellable: (allow-none): optional #GCancellable object, %NULL to ignore.
 * @error: a #GError, or %NULL.
 *
 * Obtains a directory monitor for the given file.
 * This may fail if directory monitoring is not supported.
 *
 * If @cancellable is not %NULL, then the operation can be cancelled by
 * triggering the cancellable object from another thread. If the operation
 * was cancelled, the error %G_IO_ERROR_CANCELLED will be returned.
 *
 * Virtual: monitor_dir
 * Returns: (transfer full): a #GFileMonitor for the given @file, or %NULL on error. Free the returned object with g_object_unref().
 */


/**
 * g_file_monitor_emit_event:
 * @monitor: a #GFileMonitor.
 * @child: a #GFile.
 * @other_file: a #GFile.
 * @event_type: a set of #GFileMonitorEvent flags.
 *
 * Emits the #GFileMonitor::changed signal if a change
 * has taken place. Should be called from file monitor
 * implementations only.
 *
 * The signal will be emitted from an idle handler (in the <link
 * linkend="g-main-context-push-thread-default">thread-default main
 * context</link>).
 */


/**
 * g_file_monitor_file:
 * @file: input #GFile.
 * @flags: a set of #GFileMonitorFlags.
 * @cancellable: (allow-none): optional #GCancellable object, %NULL to ignore.
 * @error: a #GError, or %NULL.
 *
 * Obtains a file monitor for the given file. If no file notification
 * mechanism exists, then regular polling of the file is used.
 *
 * If @cancellable is not %NULL, then the operation can be cancelled by
 * triggering the cancellable object from another thread. If the operation
 * was cancelled, the error %G_IO_ERROR_CANCELLED will be returned.
 *
 * Returns: (transfer full): a #GFileMonitor for the given @file, or %NULL on error. Free the returned object with g_object_unref().
 */


/**
 * g_file_monitor_is_cancelled:
 * @monitor: a #GFileMonitor
 *
 * Returns whether the monitor is canceled.
 *
 * Returns: %TRUE if monitor is canceled. %FALSE otherwise.
 */


/**
 * g_file_monitor_set_rate_limit:
 * @monitor: a #GFileMonitor.
 * @limit_msecs: a non-negative integer with the limit in milliseconds to poll for changes
 *
 * Sets the rate limit to which the @monitor will report
 * consecutive change events to the same file.
 */


/**
 * g_file_mount_enclosing_volume:
 * @location: input #GFile.
 * @flags: flags affecting the operation
 * @mount_operation: (allow-none): a #GMountOperation or %NULL to avoid user interaction.
 * @cancellable: (allow-none): optional #GCancellable object, %NULL to ignore.
 * @callback: (allow-none): a #GAsyncReadyCallback to call when the request is satisfied, or %NULL.
 * @user_data: the data to pass to callback function
 *
 * Starts a @mount_operation, mounting the volume that contains the file @location.
 *
 * When this operation has completed, @callback will be called with
 * @user_user data, and the operation can be finalized with
 * g_file_mount_enclosing_volume_finish().
 *
 * If @cancellable is not %NULL, then the operation can be cancelled by
 * triggering the cancellable object from another thread. If the operation
 * was cancelled, the error %G_IO_ERROR_CANCELLED will be returned.
 */


/**
 * g_file_mount_enclosing_volume_finish:
 * @location: input #GFile.
 * @result: a #GAsyncResult.
 * @error: a #GError, or %NULL
 *
 * Finishes a mount operation started by g_file_mount_enclosing_volume().
 *
 * Returns: %TRUE if successful. If an error has occurred, this function will return %FALSE and set @error appropriately if present.
 */


/**
 * g_file_mount_mountable:
 * @file: input #GFile.
 * @flags: flags affecting the operation
 * @mount_operation: (allow-none): a #GMountOperation, or %NULL to avoid user interaction.
 * @cancellable: (allow-none): optional #GCancellable object, %NULL to ignore.
 * @callback: (scope async) (allow-none): a #GAsyncReadyCallback to call when the request is satisfied, or %NULL.
 * @user_data: (closure): the data to pass to callback function
 *
 * Mounts a file of type G_FILE_TYPE_MOUNTABLE.
 * Using @mount_operation, you can request callbacks when, for instance,
 * passwords are needed during authentication.
 *
 * If @cancellable is not %NULL, then the operation can be cancelled by
 * triggering the cancellable object from another thread. If the operation
 * was cancelled, the error %G_IO_ERROR_CANCELLED will be returned.
 *
 * When the operation is finished, @callback will be called. You can then call
 * g_file_mount_mountable_finish() to get the result of the operation.
 */


/**
 * g_file_mount_mountable_finish:
 * @file: input #GFile.
 * @result: a #GAsyncResult.
 * @error: a #GError, or %NULL
 *
 * Finishes a mount operation. See g_file_mount_mountable() for details.
 *
 * Finish an asynchronous mount operation that was started
 * with g_file_mount_mountable().
 *
 * Returns: (transfer full): a #GFile or %NULL on error. Free the returned object with g_object_unref().
 */


/**
 * g_file_move:
 * @source: #GFile pointing to the source location.
 * @destination: #GFile pointing to the destination location.
 * @flags: set of #GFileCopyFlags.
 * @cancellable: (allow-none): optional #GCancellable object, %NULL to ignore.
 * @progress_callback: (allow-none) (scope call): #GFileProgressCallback function for updates.
 * @progress_callback_data: (closure): gpointer to user data for the callback function.
 * @error: #GError for returning error conditions, or %NULL
 *
 * Tries to move the file or directory @source to the location specified by @destination.
 * If native move operations are supported then this is used, otherwise a copy + delete
 * fallback is used. The native implementation may support moving directories (for instance
 * on moves inside the same filesystem), but the fallback code does not.
 *
 * If the flag #G_FILE_COPY_OVERWRITE is specified an already
 * existing @destination file is overwritten.
 *
 * If the flag #G_FILE_COPY_NOFOLLOW_SYMLINKS is specified then symlinks
 * will be copied as symlinks, otherwise the target of the
 * @source symlink will be copied.
 *
 * If @cancellable is not %NULL, then the operation can be cancelled by
 * triggering the cancellable object from another thread. If the operation
 * was cancelled, the error %G_IO_ERROR_CANCELLED will be returned.
 *
 * If @progress_callback is not %NULL, then the operation can be monitored by
 * setting this to a #GFileProgressCallback function. @progress_callback_data
 * will be passed to this function. It is guaranteed that this callback will
 * be called after all data has been transferred with the total number of bytes
 * copied during the operation.
 *
 * If the @source file does not exist then the G_IO_ERROR_NOT_FOUND
 * error is returned, independent on the status of the @destination.
 *
 * If #G_FILE_COPY_OVERWRITE is not specified and the target exists, then the
 * error G_IO_ERROR_EXISTS is returned.
 *
 * If trying to overwrite a file over a directory the G_IO_ERROR_IS_DIRECTORY
 * error is returned. If trying to overwrite a directory with a directory the
 * G_IO_ERROR_WOULD_MERGE error is returned.
 *
 * If the source is a directory and the target does not exist, or #G_FILE_COPY_OVERWRITE is
 * specified and the target is a file, then the G_IO_ERROR_WOULD_RECURSE error
 * may be returned (if the native move operation isn't available).
 *
 * Returns: %TRUE on successful move, %FALSE otherwise.
 */


/**
 * g_file_new_for_commandline_arg:
 * @arg: a command line string.
 *
 * Creates a #GFile with the given argument from the command line. The value of
 * @arg can be either a URI, an absolute path or a relative path resolved
 * relative to the current working directory.
 * This operation never fails, but the returned object might not support any
 * I/O operation if @arg points to a malformed path.
 *
 * Returns: (transfer full): a new #GFile. Free the returned object with g_object_unref().
 */


/**
 * g_file_new_for_path:
 * @path: a string containing a relative or absolute path. The string must be encoded in the glib filename encoding.
 *
 * Constructs a #GFile for a given path. This operation never
 * fails, but the returned object might not support any I/O
 * operation if @path is malformed.
 *
 * Returns: (transfer full): a new #GFile for the given @path. Free the returned object with g_object_unref().
 */


/**
 * g_file_new_for_uri:
 * @uri: a UTF8 string containing a URI.
 *
 * Constructs a #GFile for a given URI. This operation never
 * fails, but the returned object might not support any I/O
 * operation if @uri is malformed or if the uri type is
 * not supported.
 *
 * Returns: (transfer full): a new #GFile for the given @uri. Free the returned object with g_object_unref().
 */


/**
 * g_file_new_tmp:
 * @tmpl: (type filename) (allow-none): Template for the file name, as in g_file_open_tmp(), or %NULL for a default template.
 * @iostream: (out): on return, a #GFileIOStream for the created file.
 * @error: a #GError, or %NULL
 *
 * Opens a file in the preferred directory for temporary files (as
 * returned by g_get_tmp_dir()) and returns a #GFile and
 * #GFileIOStream pointing to it.
 *
 * @tmpl should be a string in the GLib file name encoding
 * containing a sequence of six 'X' characters, and containing no
 * directory components. If it is %NULL, a default template is used.
 *
 * Unlike the other #GFile constructors, this will return %NULL if
 * a temporary file could not be created.
 *
 * Returns: (transfer full): a new #GFile. Free the returned object with g_object_unref().
 * Since: 2.32
 */


/**
 * g_file_open_readwrite:
 * @file: #GFile to open
 * @cancellable: (allow-none): a #GCancellable
 * @error: a #GError, or %NULL
 *
 * Opens an existing file for reading and writing. The result is
 * a #GFileIOStream that can be used to read and write the contents of the file.
 *
 * If @cancellable is not %NULL, then the operation can be cancelled by
 * triggering the cancellable object from another thread. If the operation
 * was cancelled, the error %G_IO_ERROR_CANCELLED will be returned.
 *
 * If the file does not exist, the G_IO_ERROR_NOT_FOUND error will be returned.
 * If the file is a directory, the G_IO_ERROR_IS_DIRECTORY error will be returned.
 * Other errors are possible too, and depend on what kind of filesystem the file is on.
 * Note that in many non-local file cases read and write streams are not supported,
 * so make sure you really need to do read and write streaming, rather than
 * just opening for reading or writing.
 *
 * Returns: (transfer full): #GFileIOStream or %NULL on error. Free the returned object with g_object_unref().
 * Since: 2.22
 */


/**
 * g_file_open_readwrite_async:
 * @file: input #GFile.
 * @io_priority: the <link linkend="io-priority">I/O priority</link> of the request.
 * @cancellable: (allow-none): optional #GCancellable object, %NULL to ignore.
 * @callback: (scope async): a #GAsyncReadyCallback to call when the request is satisfied
 * @user_data: (closure): the data to pass to callback function
 *
 * Asynchronously opens @file for reading and writing.
 *
 * For more details, see g_file_open_readwrite() which is
 * the synchronous version of this call.
 *
 * When the operation is finished, @callback will be called. You can then call
 * g_file_open_readwrite_finish() to get the result of the operation.
 *
 * Since: 2.22
 */


/**
 * g_file_open_readwrite_finish:
 * @file: input #GFile.
 * @res: a #GAsyncResult.
 * @error: a #GError, or %NULL
 *
 * Finishes an asynchronous file read operation started with
 * g_file_open_readwrite_async().
 *
 * Returns: (transfer full): a #GFileIOStream or %NULL on error. Free the returned object with g_object_unref().
 * Since: 2.22
 */


/**
 * g_file_output_stream_get_etag:
 * @stream: a #GFileOutputStream.
 *
 * Gets the entity tag for the file when it has been written.
 * This must be called after the stream has been written
 * and closed, as the etag can change while writing.
 *
 * Returns: the entity tag for the stream.
 */


/**
 * g_file_output_stream_query_info:
 * @stream: a #GFileOutputStream.
 * @attributes: a file attribute query string.
 * @cancellable: optional #GCancellable object, %NULL to ignore.
 * @error: a #GError, %NULL to ignore.
 *
 * Queries a file output stream for the given @attributes.
 * This function blocks while querying the stream. For the asynchronous
 * version of this function, see g_file_output_stream_query_info_async().
 * While the stream is blocked, the stream will set the pending flag
 * internally, and any other operations on the stream will fail with
 * %G_IO_ERROR_PENDING.
 *
 * Can fail if the stream was already closed (with @error being set to
 * %G_IO_ERROR_CLOSED), the stream has pending operations (with @error being
 * set to %G_IO_ERROR_PENDING), or if querying info is not supported for
 * the stream's interface (with @error being set to %G_IO_ERROR_NOT_SUPPORTED). In
 * all cases of failure, %NULL will be returned.
 *
 * If @cancellable is not %NULL, then the operation can be cancelled by
 * triggering the cancellable object from another thread. If the operation
 * was cancelled, the error %G_IO_ERROR_CANCELLED will be set, and %NULL will
 * be returned.
 *
 * Returns: (transfer full): a #GFileInfo for the @stream, or %NULL on error.
 */


/**
 * g_file_output_stream_query_info_async:
 * @stream: a #GFileOutputStream.
 * @attributes: a file attribute query string.
 * @io_priority: the <link linkend="gio-GIOScheduler">I/O priority</link> of the request.
 * @cancellable: optional #GCancellable object, %NULL to ignore.
 * @callback: callback to call when the request is satisfied
 * @user_data: the data to pass to callback function
 *
 * Asynchronously queries the @stream for a #GFileInfo. When completed,
 * @callback will be called with a #GAsyncResult which can be used to
 * finish the operation with g_file_output_stream_query_info_finish().
 *
 * For the synchronous version of this function, see
 * g_file_output_stream_query_info().
 */


/**
 * g_file_output_stream_query_info_finish:
 * @stream: a #GFileOutputStream.
 * @result: a #GAsyncResult.
 * @error: a #GError, %NULL to ignore.
 *
 * Finalizes the asynchronous query started
 * by g_file_output_stream_query_info_async().
 *
 * Returns: (transfer full): A #GFileInfo for the finished query.
 */


/**
 * g_file_parse_name:
 * @parse_name: a file name or path to be parsed.
 *
 * Constructs a #GFile with the given @parse_name (i.e. something given by g_file_get_parse_name()).
 * This operation never fails, but the returned object might not support any I/O
 * operation if the @parse_name cannot be parsed.
 *
 * Returns: (transfer full): a new #GFile.
 */


/**
 * g_file_poll_mountable:
 * @file: input #GFile.
 * @cancellable: optional #GCancellable object, %NULL to ignore.
 * @callback: (allow-none): a #GAsyncReadyCallback to call when the request is satisfied, or %NULL.
 * @user_data: the data to pass to callback function
 *
 * Polls a file of type G_FILE_TYPE_MOUNTABLE.
 *
 * If @cancellable is not %NULL, then the operation can be cancelled by
 * triggering the cancellable object from another thread. If the operation
 * was cancelled, the error %G_IO_ERROR_CANCELLED will be returned.
 *
 * When the operation is finished, @callback will be called. You can then call
 * g_file_mount_mountable_finish() to get the result of the operation.
 *
 * Since: 2.22
 */


/**
 * g_file_poll_mountable_finish:
 * @file: input #GFile.
 * @result: a #GAsyncResult.
 * @error: a #GError, or %NULL
 *
 * Finishes a poll operation. See g_file_poll_mountable() for details.
 *
 * Finish an asynchronous poll operation that was polled
 * with g_file_poll_mountable().
 *
 * Returns: %TRUE if the operation finished successfully. %FALSE otherwise.
 * Since: 2.22
 */


/**
 * g_file_query_default_handler:
 * @file: a #GFile to open.
 * @cancellable: optional #GCancellable object, %NULL to ignore.
 * @error: a #GError, or %NULL
 *
 * Returns the #GAppInfo that is registered as the default
 * application to handle the file specified by @file.
 *
 * If @cancellable is not %NULL, then the operation can be cancelled by
 * triggering the cancellable object from another thread. If the operation
 * was cancelled, the error %G_IO_ERROR_CANCELLED will be returned.
 *
 * Returns: (transfer full): a #GAppInfo if the handle was found, %NULL if there were errors. When you are done with it, release it with g_object_unref()
 */


/**
 * g_file_query_exists:
 * @file: input #GFile.
 * @cancellable: (allow-none): optional #GCancellable object, %NULL to ignore.
 *
 * Utility function to check if a particular file exists. This is
 * implemented using g_file_query_info() and as such does blocking I/O.
 *
 * Note that in many cases it is racy to first check for file existence
 * and then execute something based on the outcome of that, because the
 * file might have been created or removed in between the operations. The
 * general approach to handling that is to not check, but just do the
 * operation and handle the errors as they come.
 *
 * As an example of race-free checking, take the case of reading a file, and
 * if it doesn't exist, creating it. There are two racy versions: read it, and
 * on error create it; and: check if it exists, if not create it. These
 * can both result in two processes creating the file (with perhaps a partially
 * written file as the result). The correct approach is to always try to create
 * the file with g_file_create() which will either atomically create the file
 * or fail with a G_IO_ERROR_EXISTS error.
 *
 * However, in many cases an existence check is useful in a user
 * interface, for instance to make a menu item sensitive/insensitive, so that
 * you don't have to fool users that something is possible and then just show
 * and error dialog. If you do this, you should make sure to also handle the
 * errors that can happen due to races when you execute the operation.
 *
 * Returns: %TRUE if the file exists (and can be detected without error), %FALSE otherwise (or if cancelled).
 */


/**
 * g_file_query_file_type:
 * @file: input #GFile.
 * @flags: a set of #GFileQueryInfoFlags passed to g_file_query_info().
 * @cancellable: (allow-none): optional #GCancellable object, %NULL to ignore.
 *
 * Utility function to inspect the #GFileType of a file. This is
 * implemented using g_file_query_info() and as such does blocking I/O.
 *
 * The primary use case of this method is to check if a file is a regular file,
 * directory, or symlink.
 *
 * Returns: The #GFileType of the file and #G_FILE_TYPE_UNKNOWN if the file does not exist
 * Since: 2.18
 */


/**
 * g_file_query_filesystem_info:
 * @file: input #GFile.
 * @attributes: an attribute query string.
 * @cancellable: (allow-none): optional #GCancellable object, %NULL to ignore.
 * @error: a #GError.
 *
 * Similar to g_file_query_info(), but obtains information
 * about the filesystem the @file is on, rather than the file itself.
 * For instance the amount of space available and the type of
 * the filesystem.
 *
 * The @attributes value is a string that specifies the file attributes that
 * should be gathered. It is not an error if it's not possible to read a particular
 * requested attribute from a file - it just won't be set. @attributes should
 * be a comma-separated list of attributes or attribute wildcards. The wildcard "*"
 * means all attributes, and a wildcard like "filesystem::*" means all attributes in the
 * filesystem namespace. The standard namespace for filesystem attributes is "filesystem".
 * Common attributes of interest are #G_FILE_ATTRIBUTE_FILESYSTEM_SIZE
 * (the total size of the filesystem in bytes), #G_FILE_ATTRIBUTE_FILESYSTEM_FREE (number of
 * bytes available), and #G_FILE_ATTRIBUTE_FILESYSTEM_TYPE (type of the filesystem).
 *
 * If @cancellable is not %NULL, then the operation can be cancelled by
 * triggering the cancellable object from another thread. If the operation
 * was cancelled, the error %G_IO_ERROR_CANCELLED will be returned.
 *
 * If the file does not exist, the G_IO_ERROR_NOT_FOUND error will be returned.
 * Other errors are possible too, and depend on what kind of filesystem the file is on.
 *
 * Returns: (transfer full): a #GFileInfo or %NULL if there was an error. Free the returned object with g_object_unref().
 */


/**
 * g_file_query_filesystem_info_async:
 * @file: input #GFile.
 * @attributes: an attribute query string.
 * @io_priority: the <link linkend="io-priority">I/O priority</link> of the request.
 * @cancellable: (allow-none): optional #GCancellable object, %NULL to ignore.
 * @callback: (scope async): a #GAsyncReadyCallback to call when the request is satisfied
 * @user_data: (closure): the data to pass to callback function
 *
 * Asynchronously gets the requested information about the filesystem
 * that the specified @file is on. The result is a #GFileInfo object
 * that contains key-value attributes (such as type or size for the
 * file).
 *
 * For more details, see g_file_query_filesystem_info() which is the
 * synchronous version of this call.
 *
 * When the operation is finished, @callback will be called. You can
 * then call g_file_query_info_finish() to get the result of the
 * operation.
 */


/**
 * g_file_query_filesystem_info_finish:
 * @file: input #GFile.
 * @res: a #GAsyncResult.
 * @error: a #GError.
 *
 * Finishes an asynchronous filesystem info query.  See
 * g_file_query_filesystem_info_async().
 *
 * Returns: (transfer full): #GFileInfo for given @file or %NULL on error. Free the returned object with g_object_unref().
 */


/**
 * g_file_query_info:
 * @file: input #GFile.
 * @attributes: an attribute query string.
 * @flags: a set of #GFileQueryInfoFlags.
 * @cancellable: (allow-none): optional #GCancellable object, %NULL to ignore.
 * @error: a #GError.
 *
 * Gets the requested information about specified @file. The result
 * is a #GFileInfo object that contains key-value attributes (such as
 * the type or size of the file).
 *
 * The @attributes value is a string that specifies the file attributes that
 * should be gathered. It is not an error if it's not possible to read a particular
 * requested attribute from a file - it just won't be set. @attributes should
 * be a comma-separated list of attributes or attribute wildcards. The wildcard "*"
 * means all attributes, and a wildcard like "standard::*" means all attributes in the standard
 * namespace. An example attribute query be "standard::*,owner::user".
 * The standard attributes are available as defines, like #G_FILE_ATTRIBUTE_STANDARD_NAME.
 *
 * If @cancellable is not %NULL, then the operation can be cancelled by
 * triggering the cancellable object from another thread. If the operation
 * was cancelled, the error %G_IO_ERROR_CANCELLED will be returned.
 *
 * For symlinks, normally the information about the target of the
 * symlink is returned, rather than information about the symlink itself.
 * However if you pass #G_FILE_QUERY_INFO_NOFOLLOW_SYMLINKS in @flags the
 * information about the symlink itself will be returned. Also, for symlinks
 * that point to non-existing files the information about the symlink itself
 * will be returned.
 *
 * If the file does not exist, the G_IO_ERROR_NOT_FOUND error will be returned.
 * Other errors are possible too, and depend on what kind of filesystem the file is on.
 *
 * Returns: (transfer full): a #GFileInfo for the given @file, or %NULL on error. Free the returned object with g_object_unref().
 */


/**
 * g_file_query_info_async:
 * @file: input #GFile.
 * @attributes: an attribute query string.
 * @flags: a set of #GFileQueryInfoFlags.
 * @io_priority: the <link linkend="io-priority">I/O priority</link> of the request.
 * @cancellable: (allow-none): optional #GCancellable object, %NULL to ignore.
 * @callback: (scope async): a #GAsyncReadyCallback to call when the request is satisfied
 * @user_data: (closure): the data to pass to callback function
 *
 * Asynchronously gets the requested information about specified @file. The result
 * is a #GFileInfo object that contains key-value attributes (such as type or size
 * for the file).
 *
 * For more details, see g_file_query_info() which is
 * the synchronous version of this call.
 *
 * When the operation is finished, @callback will be called. You can then call
 * g_file_query_info_finish() to get the result of the operation.
 */


/**
 * g_file_query_info_finish:
 * @file: input #GFile.
 * @res: a #GAsyncResult.
 * @error: a #GError.
 *
 * Finishes an asynchronous file info query.
 * See g_file_query_info_async().
 *
 * Returns: (transfer full): #GFileInfo for given @file or %NULL on error. Free the returned object with g_object_unref().
 */


/**
 * g_file_query_settable_attributes:
 * @file: input #GFile.
 * @cancellable: (allow-none): optional #GCancellable object, %NULL to ignore.
 * @error: a #GError, or %NULL
 *
 * Obtain the list of settable attributes for the file.
 *
 * Returns the type and full attribute name of all the attributes
 * that can be set on this file. This doesn't mean setting it will always
 * succeed though, you might get an access failure, or some specific
 * file may not support a specific attribute.
 *
 * If @cancellable is not %NULL, then the operation can be cancelled by
 * triggering the cancellable object from another thread. If the operation
 * was cancelled, the error %G_IO_ERROR_CANCELLED will be returned.
 *
 * Returns: a #GFileAttributeInfoList describing the settable attributes. When you are done with it, release it with g_file_attribute_info_list_unref()
 */


/**
 * g_file_query_writable_namespaces:
 * @file: input #GFile.
 * @cancellable: (allow-none): optional #GCancellable object, %NULL to ignore.
 * @error: a #GError, or %NULL
 *
 * Obtain the list of attribute namespaces where new attributes
 * can be created by a user. An example of this is extended
 * attributes (in the "xattr" namespace).
 *
 * If @cancellable is not %NULL, then the operation can be cancelled by
 * triggering the cancellable object from another thread. If the operation
 * was cancelled, the error %G_IO_ERROR_CANCELLED will be returned.
 *
 * Returns: a #GFileAttributeInfoList describing the writable namespaces. When you are done with it, release it with g_file_attribute_info_list_unref()
 */


/**
 * g_file_read:
 * @file: #GFile to read.
 * @cancellable: (allow-none): a #GCancellable
 * @error: a #GError, or %NULL
 *
 * Opens a file for reading. The result is a #GFileInputStream that
 * can be used to read the contents of the file.
 *
 * If @cancellable is not %NULL, then the operation can be cancelled by
 * triggering the cancellable object from another thread. If the operation
 * was cancelled, the error %G_IO_ERROR_CANCELLED will be returned.
 *
 * If the file does not exist, the G_IO_ERROR_NOT_FOUND error will be returned.
 * If the file is a directory, the G_IO_ERROR_IS_DIRECTORY error will be returned.
 * Other errors are possible too, and depend on what kind of filesystem the file is on.
 *
 * Virtual: read_fn
 * Returns: (transfer full): #GFileInputStream or %NULL on error. Free the returned object with g_object_unref().
 */


/**
 * g_file_read_async:
 * @file: input #GFile
 * @io_priority: the <link linkend="io-priority">I/O priority</link> of the request.
 * @cancellable: (allow-none): optional #GCancellable object, %NULL to ignore.
 * @callback: (scope async): a #GAsyncReadyCallback to call when the request is satisfied
 * @user_data: (closure): the data to pass to callback function
 *
 * Asynchronously opens @file for reading.
 *
 * For more details, see g_file_read() which is
 * the synchronous version of this call.
 *
 * When the operation is finished, @callback will be called. You can then call
 * g_file_read_finish() to get the result of the operation.
 */


/**
 * g_file_read_finish:
 * @file: input #GFile.
 * @res: a #GAsyncResult.
 * @error: a #GError, or %NULL
 *
 * Finishes an asynchronous file read operation started with
 * g_file_read_async().
 *
 * Returns: (transfer full): a #GFileInputStream or %NULL on error. Free the returned object with g_object_unref().
 */


/**
 * g_file_replace:
 * @file: input #GFile.
 * @etag: (allow-none): an optional <link linkend="gfile-etag">entity tag</link> for the current #GFile, or #NULL to ignore.
 * @make_backup: %TRUE if a backup should be created.
 * @flags: a set of #GFileCreateFlags.
 * @cancellable: (allow-none): optional #GCancellable object, %NULL to ignore.
 * @error: a #GError, or %NULL
 *
 * Returns an output stream for overwriting the file, possibly
 * creating a backup copy of the file first. If the file doesn't exist,
 * it will be created.
 *
 * This will try to replace the file in the safest way possible so
 * that any errors during the writing will not affect an already
 * existing copy of the file. For instance, for local files it
 * may write to a temporary file and then atomically rename over
 * the destination when the stream is closed.
 *
 * By default files created are generally readable by everyone,
 * but if you pass #G_FILE_CREATE_PRIVATE in @flags the file
 * will be made readable only to the current user, to the level that
 * is supported on the target filesystem.
 *
 * If @cancellable is not %NULL, then the operation can be cancelled by
 * triggering the cancellable object from another thread. If the operation
 * was cancelled, the error %G_IO_ERROR_CANCELLED will be returned.
 *
 * If you pass in a non-#NULL @etag value, then this value is
 * compared to the current entity tag of the file, and if they differ
 * an G_IO_ERROR_WRONG_ETAG error is returned. This generally means
 * that the file has been changed since you last read it. You can get
 * the new etag from g_file_output_stream_get_etag() after you've
 * finished writing and closed the #GFileOutputStream. When you load
 * a new file you can use g_file_input_stream_query_info() to get
 * the etag of the file.
 *
 * If @make_backup is %TRUE, this function will attempt to make a backup
 * of the current file before overwriting it. If this fails a G_IO_ERROR_CANT_CREATE_BACKUP
 * error will be returned. If you want to replace anyway, try again with
 * @make_backup set to %FALSE.
 *
 * If the file is a directory the G_IO_ERROR_IS_DIRECTORY error will be returned,
 * and if the file is some other form of non-regular file then a
 * G_IO_ERROR_NOT_REGULAR_FILE error will be returned.
 * Some file systems don't allow all file names, and may
 * return an G_IO_ERROR_INVALID_FILENAME error, and if the name
 * is to long G_IO_ERROR_FILENAME_TOO_LONG will be returned.
 * Other errors are possible too, and depend on what kind of
 * filesystem the file is on.
 *
 * Returns: (transfer full): a #GFileOutputStream or %NULL on error. Free the returned object with g_object_unref().
 */


/**
 * g_file_replace_async:
 * @file: input #GFile.
 * @etag: (allow-none): an <link linkend="gfile-etag">entity tag</link> for the current #GFile, or NULL to ignore.
 * @make_backup: %TRUE if a backup should be created.
 * @flags: a set of #GFileCreateFlags.
 * @io_priority: the <link linkend="io-priority">I/O priority</link> of the request.
 * @cancellable: (allow-none): optional #GCancellable object, %NULL to ignore.
 * @callback: (scope async): a #GAsyncReadyCallback to call when the request is satisfied
 * @user_data: (closure): the data to pass to callback function
 *
 * Asynchronously overwrites the file, replacing the contents, possibly
 * creating a backup copy of the file first.
 *
 * For more details, see g_file_replace() which is
 * the synchronous version of this call.
 *
 * When the operation is finished, @callback will be called. You can then call
 * g_file_replace_finish() to get the result of the operation.
 */


/**
 * g_file_replace_contents:
 * @file: input #GFile.
 * @contents: (element-type guint8) (array length=length): a string containing the new contents for @file.
 * @length: the length of @contents in bytes.
 * @etag: (allow-none): the old <link linkend="gfile-etag">entity tag</link> for the document, or %NULL
 * @make_backup: %TRUE if a backup should be created.
 * @flags: a set of #GFileCreateFlags.
 * @new_etag: (allow-none) (out): a location to a new <link linkend="gfile-etag">entity tag</link> for the document. This should be freed with g_free() when no longer needed, or %NULL
 * @cancellable: optional #GCancellable object, %NULL to ignore.
 * @error: a #GError, or %NULL
 *
 * Replaces the contents of @file with @contents of @length bytes.
 *
 * If @etag is specified (not %NULL) any existing file must have that etag, or
 * the error %G_IO_ERROR_WRONG_ETAG will be returned.
 *
 * If @make_backup is %TRUE, this function will attempt to make a backup of @file.
 *
 * If @cancellable is not %NULL, then the operation can be cancelled by
 * triggering the cancellable object from another thread. If the operation
 * was cancelled, the error %G_IO_ERROR_CANCELLED will be returned.
 *
 * The returned @new_etag can be used to verify that the file hasn't changed the
 * next time it is saved over.
 *
 * Returns: %TRUE if successful. If an error has occurred, this function will return %FALSE and set @error appropriately if present.
 */


/**
 * g_file_replace_contents_async:
 * @file: input #GFile.
 * @contents: (element-type guint8) (array length=length): string of contents to replace the file with.
 * @length: the length of @contents in bytes.
 * @etag: (allow-none): a new <link linkend="gfile-etag">entity tag</link> for the @file, or %NULL
 * @make_backup: %TRUE if a backup should be created.
 * @flags: a set of #GFileCreateFlags.
 * @cancellable: optional #GCancellable object, %NULL to ignore.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied
 * @user_data: the data to pass to callback function
 *
 * Starts an asynchronous replacement of @file with the given
 * @contents of @length bytes. @etag will replace the document's
 * current entity tag.
 *
 * When this operation has completed, @callback will be called with
 * @user_user data, and the operation can be finalized with
 * g_file_replace_contents_finish().
 *
 * If @cancellable is not %NULL, then the operation can be cancelled by
 * triggering the cancellable object from another thread. If the operation
 * was cancelled, the error %G_IO_ERROR_CANCELLED will be returned.
 *
 * If @make_backup is %TRUE, this function will attempt to
 * make a backup of @file.
 */


/**
 * g_file_replace_contents_finish:
 * @file: input #GFile.
 * @res: a #GAsyncResult.
 * @new_etag: (out) (allow-none): a location of a new <link linkend="gfile-etag">entity tag</link> for the document. This should be freed with g_free() when it is no longer needed, or %NULL
 * @error: a #GError, or %NULL
 *
 * Finishes an asynchronous replace of the given @file. See
 * g_file_replace_contents_async(). Sets @new_etag to the new entity
 * tag for the document, if present.
 *
 * Returns: %TRUE on success, %FALSE on failure.
 */


/**
 * g_file_replace_finish:
 * @file: input #GFile.
 * @res: a #GAsyncResult.
 * @error: a #GError, or %NULL
 *
 * Finishes an asynchronous file replace operation started with
 * g_file_replace_async().
 *
 * Returns: (transfer full): a #GFileOutputStream, or %NULL on error. Free the returned object with g_object_unref().
 */


/**
 * g_file_replace_readwrite:
 * @file: a #GFile
 * @etag: (allow-none): an optional <link linkend="gfile-etag">entity tag</link> for the current #GFile, or #NULL to ignore
 * @make_backup: %TRUE if a backup should be created
 * @flags: a set of #GFileCreateFlags
 * @cancellable: (allow-none): optional #GCancellable object, %NULL to ignore
 * @error: return location for a #GError, or %NULL
 *
 * Returns an output stream for overwriting the file in readwrite mode,
 * possibly creating a backup copy of the file first. If the file doesn't
 * exist, it will be created.
 *
 * For details about the behaviour, see g_file_replace() which does the same
 * thing but returns an output stream only.
 *
 * Note that in many non-local file cases read and write streams are not
 * supported, so make sure you really need to do read and write streaming,
 * rather than just opening for reading or writing.
 *
 * Returns: (transfer full): a #GFileIOStream or %NULL on error. Free the returned object with g_object_unref().
 * Since: 2.22
 */


/**
 * g_file_replace_readwrite_async:
 * @file: input #GFile.
 * @etag: (allow-none): an <link linkend="gfile-etag">entity tag</link> for the current #GFile, or NULL to ignore.
 * @make_backup: %TRUE if a backup should be created.
 * @flags: a set of #GFileCreateFlags.
 * @io_priority: the <link linkend="io-priority">I/O priority</link> of the request.
 * @cancellable: (allow-none): optional #GCancellable object, %NULL to ignore.
 * @callback: (scope async): a #GAsyncReadyCallback to call when the request is satisfied
 * @user_data: (closure): the data to pass to callback function
 *
 * Asynchronously overwrites the file in read-write mode, replacing the
 * contents, possibly creating a backup copy of the file first.
 *
 * For more details, see g_file_replace_readwrite() which is
 * the synchronous version of this call.
 *
 * When the operation is finished, @callback will be called. You can then
 * call g_file_replace_readwrite_finish() to get the result of the operation.
 *
 * Since: 2.22
 */


/**
 * g_file_replace_readwrite_finish:
 * @file: input #GFile.
 * @res: a #GAsyncResult.
 * @error: a #GError, or %NULL
 *
 * Finishes an asynchronous file replace operation started with
 * g_file_replace_readwrite_async().
 *
 * Returns: (transfer full): a #GFileIOStream, or %NULL on error. Free the returned object with g_object_unref().
 * Since: 2.22
 */


/**
 * g_file_resolve_relative_path:
 * @file: input #GFile.
 * @relative_path: a given relative path string.
 *
 * Resolves a relative path for @file to an absolute path.
 *
 * This call does no blocking i/o.
 *
 * Returns: (transfer full): #GFile to the resolved path. %NULL if @relative_path is %NULL or if @file is invalid. Free the returned object with g_object_unref().
 */


/**
 * g_file_set_attribute:
 * @file: input #GFile.
 * @attribute: a string containing the attribute's name.
 * @type: The type of the attribute
 * @value_p: (allow-none): a pointer to the value (or the pointer itself if the type is a pointer type)
 * @flags: a set of #GFileQueryInfoFlags.
 * @cancellable: (allow-none): optional #GCancellable object, %NULL to ignore.
 * @error: a #GError, or %NULL
 *
 * Sets an attribute in the file with attribute name @attribute to @value.
 *
 * Some attributes can be unset by setting @attribute to
 * %G_FILE_ATTRIBUTE_TYPE_INVALID and @value_p to %NULL.
 *
 * If @cancellable is not %NULL, then the operation can be cancelled by
 * triggering the cancellable object from another thread. If the operation
 * was cancelled, the error %G_IO_ERROR_CANCELLED will be returned.
 *
 * Returns: %TRUE if the attribute was set, %FALSE otherwise.
 */


/**
 * g_file_set_attribute_byte_string:
 * @file: input #GFile.
 * @attribute: a string containing the attribute's name.
 * @value: a string containing the attribute's new value.
 * @flags: a #GFileQueryInfoFlags.
 * @cancellable: (allow-none): optional #GCancellable object, %NULL to ignore.
 * @error: a #GError, or %NULL
 *
 * Sets @attribute of type %G_FILE_ATTRIBUTE_TYPE_BYTE_STRING to @value.
 * If @attribute is of a different type, this operation will fail,
 * returning %FALSE.
 *
 * If @cancellable is not %NULL, then the operation can be cancelled by
 * triggering the cancellable object from another thread. If the operation
 * was cancelled, the error %G_IO_ERROR_CANCELLED will be returned.
 *
 * Returns: %TRUE if the @attribute was successfully set to @value in the @file, %FALSE otherwise.
 */


/**
 * g_file_set_attribute_int32:
 * @file: input #GFile.
 * @attribute: a string containing the attribute's name.
 * @value: a #gint32 containing the attribute's new value.
 * @flags: a #GFileQueryInfoFlags.
 * @cancellable: (allow-none): optional #GCancellable object, %NULL to ignore.
 * @error: a #GError, or %NULL
 *
 * Sets @attribute of type %G_FILE_ATTRIBUTE_TYPE_INT32 to @value.
 * If @attribute is of a different type, this operation will fail.
 *
 * If @cancellable is not %NULL, then the operation can be cancelled by
 * triggering the cancellable object from another thread. If the operation
 * was cancelled, the error %G_IO_ERROR_CANCELLED will be returned.
 *
 * Returns: %TRUE if the @attribute was successfully set to @value in the @file, %FALSE otherwise.
 */


/**
 * g_file_set_attribute_int64:
 * @file: input #GFile.
 * @attribute: a string containing the attribute's name.
 * @value: a #guint64 containing the attribute's new value.
 * @flags: a #GFileQueryInfoFlags.
 * @cancellable: (allow-none): optional #GCancellable object, %NULL to ignore.
 * @error: a #GError, or %NULL
 *
 * Sets @attribute of type %G_FILE_ATTRIBUTE_TYPE_INT64 to @value.
 * If @attribute is of a different type, this operation will fail.
 *
 * If @cancellable is not %NULL, then the operation can be cancelled by
 * triggering the cancellable object from another thread. If the operation
 * was cancelled, the error %G_IO_ERROR_CANCELLED will be returned.
 *
 * Returns: %TRUE if the @attribute was successfully set, %FALSE otherwise.
 */


/**
 * g_file_set_attribute_string:
 * @file: input #GFile.
 * @attribute: a string containing the attribute's name.
 * @value: a string containing the attribute's value.
 * @flags: #GFileQueryInfoFlags.
 * @cancellable: (allow-none): optional #GCancellable object, %NULL to ignore.
 * @error: a #GError, or %NULL
 *
 * Sets @attribute of type %G_FILE_ATTRIBUTE_TYPE_STRING to @value.
 * If @attribute is of a different type, this operation will fail.
 *
 * If @cancellable is not %NULL, then the operation can be cancelled by
 * triggering the cancellable object from another thread. If the operation
 * was cancelled, the error %G_IO_ERROR_CANCELLED will be returned.
 *
 * Returns: %TRUE if the @attribute was successfully set, %FALSE otherwise.
 */


/**
 * g_file_set_attribute_uint32:
 * @file: input #GFile.
 * @attribute: a string containing the attribute's name.
 * @value: a #guint32 containing the attribute's new value.
 * @flags: a #GFileQueryInfoFlags.
 * @cancellable: (allow-none): optional #GCancellable object, %NULL to ignore.
 * @error: a #GError, or %NULL
 *
 * Sets @attribute of type %G_FILE_ATTRIBUTE_TYPE_UINT32 to @value.
 * If @attribute is of a different type, this operation will fail.
 *
 * If @cancellable is not %NULL, then the operation can be cancelled by
 * triggering the cancellable object from another thread. If the operation
 * was cancelled, the error %G_IO_ERROR_CANCELLED will be returned.
 *
 * Returns: %TRUE if the @attribute was successfully set to @value in the @file, %FALSE otherwise.
 */


/**
 * g_file_set_attribute_uint64:
 * @file: input #GFile.
 * @attribute: a string containing the attribute's name.
 * @value: a #guint64 containing the attribute's new value.
 * @flags: a #GFileQueryInfoFlags.
 * @cancellable: (allow-none): optional #GCancellable object, %NULL to ignore.
 * @error: a #GError, or %NULL
 *
 * Sets @attribute of type %G_FILE_ATTRIBUTE_TYPE_UINT64 to @value.
 * If @attribute is of a different type, this operation will fail.
 *
 * If @cancellable is not %NULL, then the operation can be cancelled by
 * triggering the cancellable object from another thread. If the operation
 * was cancelled, the error %G_IO_ERROR_CANCELLED will be returned.
 *
 * Returns: %TRUE if the @attribute was successfully set to @value in the @file, %FALSE otherwise.
 */


/**
 * g_file_set_attributes_async:
 * @file: input #GFile.
 * @info: a #GFileInfo.
 * @flags: a #GFileQueryInfoFlags.
 * @io_priority: the <link linkend="io-priority">I/O priority</link> of the request.
 * @cancellable: (allow-none): optional #GCancellable object, %NULL to ignore.
 * @callback: (scope async): a #GAsyncReadyCallback.
 * @user_data: (closure): a #gpointer.
 *
 * Asynchronously sets the attributes of @file with @info.
 *
 * For more details, see g_file_set_attributes_from_info() which is
 * the synchronous version of this call.
 *
 * When the operation is finished, @callback will be called. You can then call
 * g_file_set_attributes_finish() to get the result of the operation.
 */


/**
 * g_file_set_attributes_finish:
 * @file: input #GFile.
 * @result: a #GAsyncResult.
 * @info: (out) (transfer full): a #GFileInfo.
 * @error: a #GError, or %NULL
 *
 * Finishes setting an attribute started in g_file_set_attributes_async().
 *
 * Returns: %TRUE if the attributes were set correctly, %FALSE otherwise.
 */


/**
 * g_file_set_attributes_from_info:
 * @file: input #GFile.
 * @info: a #GFileInfo.
 * @flags: #GFileQueryInfoFlags
 * @cancellable: (allow-none): optional #GCancellable object, %NULL to ignore.
 * @error: a #GError, or %NULL
 *
 * Tries to set all attributes in the #GFileInfo on the target values,
 * not stopping on the first error.
 *
 * If there is any error during this operation then @error will be set to
 * the first error. Error on particular fields are flagged by setting
 * the "status" field in the attribute value to
 * %G_FILE_ATTRIBUTE_STATUS_ERROR_SETTING, which means you can also detect
 * further errors.
 *
 * If @cancellable is not %NULL, then the operation can be cancelled by
 * triggering the cancellable object from another thread. If the operation
 * was cancelled, the error %G_IO_ERROR_CANCELLED will be returned.
 *
 * Returns: %TRUE if there was any error, %FALSE otherwise.
 */


/**
 * g_file_set_display_name:
 * @file: input #GFile.
 * @display_name: a string.
 * @cancellable: (allow-none): optional #GCancellable object, %NULL to ignore.
 * @error: a #GError, or %NULL
 *
 * Renames @file to the specified display name.
 *
 * The display name is converted from UTF8 to the correct encoding for the target
 * filesystem if possible and the @file is renamed to this.
 *
 * If you want to implement a rename operation in the user interface the edit name
 * (#G_FILE_ATTRIBUTE_STANDARD_EDIT_NAME) should be used as the initial value in the rename
 * widget, and then the result after editing should be passed to g_file_set_display_name().
 *
 * On success the resulting converted filename is returned.
 *
 * If @cancellable is not %NULL, then the operation can be cancelled by
 * triggering the cancellable object from another thread. If the operation
 * was cancelled, the error %G_IO_ERROR_CANCELLED will be returned.
 *
 * Returns: (transfer full): a #GFile specifying what @file was renamed to, or %NULL if there was an error. Free the returned object with g_object_unref().
 */


/**
 * g_file_set_display_name_async:
 * @file: input #GFile.
 * @display_name: a string.
 * @io_priority: the <link linkend="io-priority">I/O priority</link> of the request.
 * @cancellable: (allow-none): optional #GCancellable object, %NULL to ignore.
 * @callback: (scope async): a #GAsyncReadyCallback to call when the request is satisfied
 * @user_data: (closure): the data to pass to callback function
 *
 * Asynchronously sets the display name for a given #GFile.
 *
 * For more details, see g_file_set_display_name() which is
 * the synchronous version of this call.
 *
 * When the operation is finished, @callback will be called. You can then call
 * g_file_set_display_name_finish() to get the result of the operation.
 */


/**
 * g_file_set_display_name_finish:
 * @file: input #GFile.
 * @res: a #GAsyncResult.
 * @error: a #GError, or %NULL
 *
 * Finishes setting a display name started with
 * g_file_set_display_name_async().
 *
 * Returns: (transfer full): a #GFile or %NULL on error. Free the returned object with g_object_unref().
 */


/**
 * g_file_start_mountable:
 * @file: input #GFile.
 * @flags: flags affecting the operation
 * @start_operation: (allow-none): a #GMountOperation, or %NULL to avoid user interaction.
 * @cancellable: (allow-none): optional #GCancellable object, %NULL to ignore.
 * @callback: (allow-none): a #GAsyncReadyCallback to call when the request is satisfied, or %NULL.
 * @user_data: the data to pass to callback function
 *
 * Starts a file of type G_FILE_TYPE_MOUNTABLE.
 * Using @start_operation, you can request callbacks when, for instance,
 * passwords are needed during authentication.
 *
 * If @cancellable is not %NULL, then the operation can be cancelled by
 * triggering the cancellable object from another thread. If the operation
 * was cancelled, the error %G_IO_ERROR_CANCELLED will be returned.
 *
 * When the operation is finished, @callback will be called. You can then call
 * g_file_mount_mountable_finish() to get the result of the operation.
 *
 * Since: 2.22
 */


/**
 * g_file_start_mountable_finish:
 * @file: input #GFile.
 * @result: a #GAsyncResult.
 * @error: a #GError, or %NULL
 *
 * Finishes a start operation. See g_file_start_mountable() for details.
 *
 * Finish an asynchronous start operation that was started
 * with g_file_start_mountable().
 *
 * Returns: %TRUE if the operation finished successfully. %FALSE otherwise.
 * Since: 2.22
 */


/**
 * g_file_stop_mountable:
 * @file: input #GFile.
 * @flags: flags affecting the operation
 * @mount_operation: (allow-none): a #GMountOperation, or %NULL to avoid user interaction.
 * @cancellable: (allow-none): optional #GCancellable object, %NULL to ignore.
 * @callback: (allow-none): a #GAsyncReadyCallback to call when the request is satisfied, or %NULL.
 * @user_data: the data to pass to callback function
 *
 * Stops a file of type G_FILE_TYPE_MOUNTABLE.
 *
 * If @cancellable is not %NULL, then the operation can be cancelled by
 * triggering the cancellable object from another thread. If the operation
 * was cancelled, the error %G_IO_ERROR_CANCELLED will be returned.
 *
 * When the operation is finished, @callback will be called. You can then call
 * g_file_stop_mountable_finish() to get the result of the operation.
 *
 * Since: 2.22
 */


/**
 * g_file_stop_mountable_finish:
 * @file: input #GFile.
 * @result: a #GAsyncResult.
 * @error: a #GError, or %NULL
 *
 * Finishes an stop operation, see g_file_stop_mountable() for details.
 *
 * Finish an asynchronous stop operation that was started
 * with g_file_stop_mountable().
 *
 * Returns: %TRUE if the operation finished successfully. %FALSE otherwise.
 * Since: 2.22
 */


/**
 * g_file_supports_thread_contexts:
 * @file: a #GFile.
 *
 * Checks if @file supports <link
 * linkend="g-main-context-push-thread-default-context">thread-default
 * contexts</link>. If this returns %FALSE, you cannot perform
 * asynchronous operations on @file in a thread that has a
 * thread-default context.
 *
 * Returns: Whether or not @file supports thread-default contexts.
 * Since: 2.22
 */


/**
 * g_file_trash:
 * @file: #GFile to send to trash.
 * @cancellable: (allow-none): optional #GCancellable object, %NULL to ignore.
 * @error: a #GError, or %NULL
 *
 * Sends @file to the "Trashcan", if possible. This is similar to
 * deleting it, but the user can recover it before emptying the trashcan.
 * Not all file systems support trashing, so this call can return the
 * %G_IO_ERROR_NOT_SUPPORTED error.
 *
 *
 * If @cancellable is not %NULL, then the operation can be cancelled by
 * triggering the cancellable object from another thread. If the operation
 * was cancelled, the error %G_IO_ERROR_CANCELLED will be returned.
 *
 * Returns: %TRUE on successful trash, %FALSE otherwise.
 */


/**
 * g_file_unmount_mountable:
 * @file: input #GFile.
 * @flags: flags affecting the operation
 * @cancellable: (allow-none): optional #GCancellable object, %NULL to ignore.
 * @callback: (scope async) (allow-none): a #GAsyncReadyCallback to call when the request is satisfied, or %NULL.
 * @user_data: (closure): the data to pass to callback function
 *
 * Unmounts a file of type G_FILE_TYPE_MOUNTABLE.
 *
 * If @cancellable is not %NULL, then the operation can be cancelled by
 * triggering the cancellable object from another thread. If the operation
 * was cancelled, the error %G_IO_ERROR_CANCELLED will be returned.
 *
 * When the operation is finished, @callback will be called. You can then call
 * g_file_unmount_mountable_finish() to get the result of the operation.
 *
 * Deprecated: 2.22: Use g_file_unmount_mountable_with_operation() instead.
 */


/**
 * g_file_unmount_mountable_finish:
 * @file: input #GFile.
 * @result: a #GAsyncResult.
 * @error: a #GError, or %NULL
 *
 * Finishes an unmount operation, see g_file_unmount_mountable() for details.
 *
 * Finish an asynchronous unmount operation that was started
 * with g_file_unmount_mountable().
 *
 * Returns: %TRUE if the operation finished successfully. %FALSE otherwise.
 * Deprecated: 2.22: Use g_file_unmount_mountable_with_operation_finish() instead.
 */


/**
 * g_file_unmount_mountable_with_operation:
 * @file: input #GFile.
 * @flags: flags affecting the operation
 * @mount_operation: (allow-none): a #GMountOperation, or %NULL to avoid user interaction.
 * @cancellable: (allow-none): optional #GCancellable object, %NULL to ignore.
 * @callback: (scope async) (allow-none): a #GAsyncReadyCallback to call when the request is satisfied, or %NULL.
 * @user_data: (closure): the data to pass to callback function
 *
 * Unmounts a file of type G_FILE_TYPE_MOUNTABLE.
 *
 * If @cancellable is not %NULL, then the operation can be cancelled by
 * triggering the cancellable object from another thread. If the operation
 * was cancelled, the error %G_IO_ERROR_CANCELLED will be returned.
 *
 * When the operation is finished, @callback will be called. You can then call
 * g_file_unmount_mountable_finish() to get the result of the operation.
 *
 * Since: 2.22
 */


/**
 * g_file_unmount_mountable_with_operation_finish:
 * @file: input #GFile.
 * @result: a #GAsyncResult.
 * @error: a #GError, or %NULL
 *
 * Finishes an unmount operation, see g_file_unmount_mountable_with_operation() for details.
 *
 * Finish an asynchronous unmount operation that was started
 * with g_file_unmount_mountable_with_operation().
 *
 * Returns: %TRUE if the operation finished successfully. %FALSE otherwise.
 * Since: 2.22
 */


/**
 * g_filename_completer_get_completion_suffix:
 * @completer: the filename completer.
 * @initial_text: text to be completed.
 *
 * Obtains a completion for @initial_text from @completer.
 *
 * Returns: a completed string, or %NULL if no completion exists. This string is not owned by GIO, so remember to g_free() it when finished.
 */


/**
 * g_filename_completer_get_completions:
 * @completer: the filename completer.
 * @initial_text: text to be completed.
 *
 * Gets an array of completion strings for a given initial text.
 *
 * Returns: (array zero-terminated=1) (transfer full): array of strings with possible completions for @initial_text. This array must be freed by g_strfreev() when finished.
 */


/**
 * g_filename_completer_new:
 *
 * Creates a new filename completer.
 *
 * Returns: a #GFilenameCompleter.
 */


/**
 * g_filename_completer_set_dirs_only:
 * @completer: the filename completer.
 * @dirs_only: a #gboolean.
 *
 * If @dirs_only is %TRUE, @completer will only
 * complete directory names, and not file names.
 */


/**
 * g_filter_input_stream_get_base_stream:
 * @stream: a #GFilterInputStream.
 *
 * Gets the base stream for the filter stream.
 *
 * Returns: (transfer none): a #GInputStream.
 */


/**
 * g_filter_input_stream_get_close_base_stream:
 * @stream: a #GFilterInputStream.
 *
 * Returns whether the base stream will be closed when @stream is
 * closed.
 *
 * Returns: %TRUE if the base stream will be closed.
 */


/**
 * g_filter_input_stream_set_close_base_stream:
 * @stream: a #GFilterInputStream.
 * @close_base: %TRUE to close the base stream.
 *
 * Sets whether the base stream will be closed when @stream is closed.
 */


/**
 * g_filter_output_stream_get_base_stream:
 * @stream: a #GFilterOutputStream.
 *
 * Gets the base stream for the filter stream.
 *
 * Returns: (transfer none): a #GOutputStream.
 */


/**
 * g_filter_output_stream_get_close_base_stream:
 * @stream: a #GFilterOutputStream.
 *
 * Returns whether the base stream will be closed when @stream is
 * closed.
 *
 * Returns: %TRUE if the base stream will be closed.
 */


/**
 * g_filter_output_stream_set_close_base_stream:
 * @stream: a #GFilterOutputStream.
 * @close_base: %TRUE to close the base stream.
 *
 * Sets whether the base stream will be closed when @stream is closed.
 */


/**
 * g_icon_equal:
 * @icon1: (allow-none): pointer to the first #GIcon.
 * @icon2: (allow-none): pointer to the second #GIcon.
 *
 * Checks if two icons are equal.
 *
 * Returns: %TRUE if @icon1 is equal to @icon2. %FALSE otherwise.
 */


/**
 * g_icon_hash:
 * @icon: #gconstpointer to an icon object.
 *
 * Gets a hash for an icon.
 *
 * Virtual: hash
 * Returns: a #guint containing a hash for the @icon, suitable for use in a #GHashTable or similar data structure.
 */


/**
 * g_icon_new_for_string:
 * @str: A string obtained via g_icon_to_string().
 * @error: Return location for error.
 *
 * Generate a #GIcon instance from @str. This function can fail if
 * @str is not valid - see g_icon_to_string() for discussion.
 *
 * If your application or library provides one or more #GIcon
 * implementations you need to ensure that each #GType is registered
 * with the type system prior to calling g_icon_new_for_string().
 *
 * Returns: (transfer full): An object implementing the #GIcon interface or %NULL if @error is set.
 * Since: 2.20
 */


/**
 * g_icon_to_string:
 * @icon: a #GIcon.
 *
 * Generates a textual representation of @icon that can be used for
 * serialization such as when passing @icon to a different process or
 * saving it to persistent storage. Use g_icon_new_for_string() to
 * get @icon back from the returned string.
 *
 * The encoding of the returned string is proprietary to #GIcon except
 * in the following two cases
 *
 * <itemizedlist>
 * <listitem><para>
 *     If @icon is a #GFileIcon, the returned string is a native path
 *     (such as <literal>/path/to/my icon.png</literal>) without escaping
 *     if the #GFile for @icon is a native file.  If the file is not
 *     native, the returned string is the result of g_file_get_uri()
 *     (such as <literal>sftp://path/to/my&percnt;20icon.png</literal>).
 * </para></listitem>
 * <listitem><para>
 *    If @icon is a #GThemedIcon with exactly one name, the encoding is
 *    simply the name (such as <literal>network-server</literal>).
 * </para></listitem>
 * </itemizedlist>
 *
 * Virtual: to_tokens
 * Returns: An allocated NUL-terminated UTF8 string or %NULL if @icon can't be serialized. Use g_free() to free.
 * Since: 2.20
 */


/**
 * g_inet_address_equal:
 * @address: A #GInetAddress.
 * @other_address: Another #GInetAddress.
 *
 * Checks if two #GInetAddress instances are equal, e.g. the same address.
 *
 * Returns: %TRUE if @address and @other_address are equal, %FALSE otherwise.
 * Since: 2.30
 */


/**
 * g_inet_address_get_family:
 * @address: a #GInetAddress
 *
 * Gets @address's family
 *
 * Returns: @address's family
 * Since: 2.22
 */


/**
 * g_inet_address_get_is_any:
 * @address: a #GInetAddress
 *
 * Tests whether @address is the "any" address for its family.
 *
 * Returns: %TRUE if @address is the "any" address for its family.
 * Since: 2.22
 */


/**
 * g_inet_address_get_is_link_local:
 * @address: a #GInetAddress
 *
 * Tests whether @address is a link-local address (that is, if it
 * identifies a host on a local network that is not connected to the
 * Internet).
 *
 * Returns: %TRUE if @address is a link-local address.
 * Since: 2.22
 */


/**
 * g_inet_address_get_is_loopback:
 * @address: a #GInetAddress
 *
 * Tests whether @address is the loopback address for its family.
 *
 * Returns: %TRUE if @address is the loopback address for its family.
 * Since: 2.22
 */


/**
 * g_inet_address_get_is_mc_global:
 * @address: a #GInetAddress
 *
 * Tests whether @address is a global multicast address.
 *
 * Returns: %TRUE if @address is a global multicast address.
 * Since: 2.22
 */


/**
 * g_inet_address_get_is_mc_link_local:
 * @address: a #GInetAddress
 *
 * Tests whether @address is a link-local multicast address.
 *
 * Returns: %TRUE if @address is a link-local multicast address.
 * Since: 2.22
 */


/**
 * g_inet_address_get_is_mc_node_local:
 * @address: a #GInetAddress
 *
 * Tests whether @address is a node-local multicast address.
 *
 * Returns: %TRUE if @address is a node-local multicast address.
 * Since: 2.22
 */


/**
 * g_inet_address_get_is_mc_org_local:
 * @address: a #GInetAddress
 *
 * Tests whether @address is an organization-local multicast address.
 *
 * Returns: %TRUE if @address is an organization-local multicast address.
 * Since: 2.22
 */


/**
 * g_inet_address_get_is_mc_site_local:
 * @address: a #GInetAddress
 *
 * Tests whether @address is a site-local multicast address.
 *
 * Returns: %TRUE if @address is a site-local multicast address.
 * Since: 2.22
 */


/**
 * g_inet_address_get_is_multicast:
 * @address: a #GInetAddress
 *
 * Tests whether @address is a multicast address.
 *
 * Returns: %TRUE if @address is a multicast address.
 * Since: 2.22
 */


/**
 * g_inet_address_get_is_site_local:
 * @address: a #GInetAddress
 *
 * Tests whether @address is a site-local address such as 10.0.0.1
 * (that is, the address identifies a host on a local network that can
 * not be reached directly from the Internet, but which may have
 * outgoing Internet connectivity via a NAT or firewall).
 *
 * Returns: %TRUE if @address is a site-local address.
 * Since: 2.22
 */


/**
 * g_inet_address_get_native_size:
 * @address: a #GInetAddress
 *
 * Gets the size of the native raw binary address for @address. This
 * is the size of the data that you get from g_inet_address_to_bytes().
 *
 * Returns: the number of bytes used for the native version of @address.
 * Since: 2.22
 */


/**
 * g_inet_address_mask_equal:
 * @mask: a #GInetAddressMask
 * @mask2: another #GInetAddressMask
 *
 * Tests if @mask and @mask2 are the same mask.
 *
 * Returns: whether @mask and @mask2 are the same mask
 * Since: 2.32
 */


/**
 * g_inet_address_mask_get_address:
 * @mask: a #GInetAddressMask
 *
 * Gets @mask's base address
 *
 * Returns: (transfer none): @mask's base address
 * Since: 2.32
 */


/**
 * g_inet_address_mask_get_family:
 * @mask: a #GInetAddressMask
 *
 * Gets the #GSocketFamily of @mask's address
 *
 * Returns: the #GSocketFamily of @mask's address
 * Since: 2.32
 */


/**
 * g_inet_address_mask_get_length:
 * @mask: a #GInetAddressMask
 *
 * Gets @mask's length
 *
 * Returns: @mask's length
 * Since: 2.32
 */


/**
 * g_inet_address_mask_matches:
 * @mask: a #GInetAddressMask
 * @address: a #GInetAddress
 *
 * Tests if @address falls within the range described by @mask.
 *
 * Returns: whether @address falls within the range described by @mask.
 * Since: 2.32
 */


/**
 * g_inet_address_mask_new:
 * @addr: a #GInetAddress
 * @length: number of bits of @addr to use
 * @error: return location for #GError, or %NULL
 *
 * Creates a new #GInetAddressMask representing all addresses whose
 * first @length bits match @addr.
 *
 * Returns: a new #GInetAddressMask, or %NULL on error
 * Since: 2.32
 */


/**
 * g_inet_address_mask_new_from_string:
 * @mask_string: an IP address or address/length string
 * @error: return location for #GError, or %NULL
 *
 * Parses @mask_string as an IP address and (optional) length, and
 * creates a new #GInetAddressMask. The length, if present, is
 * delimited by a "/". If it is not present, then the length is
 * assumed to be the full length of the address.
 *
 * Returns: a new #GInetAddressMask corresponding to @string, or %NULL on error.
 * Since: 2.32
 */


/**
 * g_inet_address_mask_to_string:
 * @mask: a #GInetAddressMask
 *
 * Converts @mask back to its corresponding string form.
 *
 * Returns: a string corresponding to @mask.
 * Since: 2.32
 */


/**
 * g_inet_address_new_any:
 * @family: the address family
 *
 * Creates a #GInetAddress for the "any" address (unassigned/"don't
 * care") for @family.
 *
 * Returns: a new #GInetAddress corresponding to the "any" address for @family.
 * Since: 2.22
 */


/**
 * g_inet_address_new_from_bytes:
 * @bytes: (array) (element-type guint8): raw address data
 * @family: the address family of @bytes
 *
 * Creates a new #GInetAddress from the given @family and @bytes.
 * @bytes should be 4 bytes for %G_SOCKET_FAMILY_IPV4 and 16 bytes for
 * %G_SOCKET_FAMILY_IPV6.
 *
 * Returns: a new #GInetAddress corresponding to @family and @bytes.
 * Since: 2.22
 */


/**
 * g_inet_address_new_from_string:
 * @string: a string representation of an IP address
 *
 * Parses @string as an IP address and creates a new #GInetAddress.
 *
 * Returns: a new #GInetAddress corresponding to @string, or %NULL if @string could not be parsed.
 * Since: 2.22
 */


/**
 * g_inet_address_new_loopback:
 * @family: the address family
 *
 * Creates a #GInetAddress for the loopback address for @family.
 *
 * Returns: a new #GInetAddress corresponding to the loopback address for @family.
 * Since: 2.22
 */


/**
 * g_inet_address_to_bytes: (skip)
 * @address: a #GInetAddress
 *
 * Gets the raw binary address data from @address.
 *
 * Returns: a pointer to an internal array of the bytes in @address, which should not be modified, stored, or freed. The size of this array can be gotten with g_inet_address_get_native_size().
 * Since: 2.22
 */


/**
 * g_inet_address_to_string:
 * @address: a #GInetAddress
 *
 * Converts @address to string form.
 *
 * Returns: a representation of @address as a string, which should be freed after use.
 * Since: 2.22
 */


/**
 * g_inet_socket_address_get_address:
 * @address: a #GInetSocketAddress
 *
 * Gets @address's #GInetAddress.
 *
 * Returns: (transfer none): the #GInetAddress for @address, which must be g_object_ref()'d if it will be stored
 * Since: 2.22
 */


/**
 * g_inet_socket_address_get_flowinfo:
 * @address: a %G_SOCKET_FAMILY_IPV6 #GInetSocketAddress
 *
 * Gets the <literal>sin6_flowinfo</literal> field from @address,
 * which must be an IPv6 address.
 *
 * Returns: the flowinfo field
 * Since: 2.32
 */


/**
 * g_inet_socket_address_get_port:
 * @address: a #GInetSocketAddress
 *
 * Gets @address's port.
 *
 * Returns: the port for @address
 * Since: 2.22
 */


/**
 * g_inet_socket_address_get_scope_id:
 * @address: a %G_SOCKET_FAMILY_IPV6 #GInetAddress
 *
 * Gets the <literal>sin6_scope_id</literal> field from @address,
 * which must be an IPv6 address.
 *
 * Returns: the scope id field
 * Since: 2.32
 */


/**
 * g_inet_socket_address_new:
 * @address: a #GInetAddress
 * @port: a port number
 *
 * Creates a new #GInetSocketAddress for @address and @port.
 *
 * Returns: a new #GInetSocketAddress
 * Since: 2.22
 */


/**
 * g_initable_init:
 * @initable: a #GInitable.
 * @cancellable: optional #GCancellable object, %NULL to ignore.
 * @error: a #GError location to store the error occurring, or %NULL to ignore.
 *
 * Initializes the object implementing the interface.
 *
 * The object must be initialized before any real use after initial
 * construction, either with this function or g_async_initable_init_async().
 *
 * Implementations may also support cancellation. If @cancellable is not %NULL,
 * then initialization can be cancelled by triggering the cancellable object
 * from another thread. If the operation was cancelled, the error
 * %G_IO_ERROR_CANCELLED will be returned. If @cancellable is not %NULL and
 * the object doesn't support cancellable initialization the error
 * %G_IO_ERROR_NOT_SUPPORTED will be returned.
 *
 * If the object is not initialized, or initialization returns with an
 * error, then all operations on the object except g_object_ref() and
 * g_object_unref() are considered to be invalid, and have undefined
 * behaviour. See the <xref linkend="ginitable"/> section introduction
 * for more details.
 *
 * Implementations of this method must be idempotent, i.e. multiple calls
 * to this function with the same argument should return the same results.
 * Only the first call initializes the object, further calls return the result
 * of the first call. This is so that it's safe to implement the singleton
 * pattern in the GObject constructor function.
 *
 * Returns: %TRUE if successful. If an error has occurred, this function will return %FALSE and set @error appropriately if present.
 * Since: 2.22
 */


/**
 * g_initable_new:
 * @object_type: a #GType supporting #GInitable.
 * @cancellable: optional #GCancellable object, %NULL to ignore.
 * @error: a #GError location to store the error occurring, or %NULL to ignore.
 * @first_property_name: (allow-none): the name of the first property, or %NULL if no properties
 * @...: the value if the first property, followed by and other property value pairs, and ended by %NULL.
 *
 * Helper function for constructing #GInitable object. This is
 * similar to g_object_new() but also initializes the object
 * and returns %NULL, setting an error on failure.
 *
 * Returns: (transfer full): a newly allocated #GObject, or %NULL on error
 * Since: 2.22
 */


/**
 * g_initable_new_valist:
 * @object_type: a #GType supporting #GInitable.
 * @first_property_name: the name of the first property, followed by the value, and other property value pairs, and ended by %NULL.
 * @var_args: The var args list generated from @first_property_name.
 * @cancellable: optional #GCancellable object, %NULL to ignore.
 * @error: a #GError location to store the error occurring, or %NULL to ignore.
 *
 * Helper function for constructing #GInitable object. This is
 * similar to g_object_new_valist() but also initializes the object
 * and returns %NULL, setting an error on failure.
 *
 * Returns: (transfer full): a newly allocated #GObject, or %NULL on error
 * Since: 2.22
 */


/**
 * g_initable_newv:
 * @object_type: a #GType supporting #GInitable.
 * @n_parameters: the number of parameters in @parameters
 * @parameters: (array length=n_parameters): the parameters to use to construct the object
 * @cancellable: optional #GCancellable object, %NULL to ignore.
 * @error: a #GError location to store the error occurring, or %NULL to ignore.
 *
 * Helper function for constructing #GInitable object. This is
 * similar to g_object_newv() but also initializes the object
 * and returns %NULL, setting an error on failure.
 *
 * Returns: (transfer full): a newly allocated #GObject, or %NULL on error
 * Since: 2.22
 */


/**
 * g_input_stream_clear_pending:
 * @stream: input stream
 *
 * Clears the pending flag on @stream.
 */


/**
 * g_input_stream_close:
 * @stream: A #GInputStream.
 * @cancellable: (allow-none): optional #GCancellable object, %NULL to ignore.
 * @error: location to store the error occurring, or %NULL to ignore
 *
 * Closes the stream, releasing resources related to it.
 *
 * Once the stream is closed, all other operations will return %G_IO_ERROR_CLOSED.
 * Closing a stream multiple times will not return an error.
 *
 * Streams will be automatically closed when the last reference
 * is dropped, but you might want to call this function to make sure
 * resources are released as early as possible.
 *
 * Some streams might keep the backing store of the stream (e.g. a file descriptor)
 * open after the stream is closed. See the documentation for the individual
 * stream for details.
 *
 * On failure the first error that happened will be reported, but the close
 * operation will finish as much as possible. A stream that failed to
 * close will still return %G_IO_ERROR_CLOSED for all operations. Still, it
 * is important to check and report the error to the user.
 *
 * If @cancellable is not %NULL, then the operation can be cancelled by
 * triggering the cancellable object from another thread. If the operation
 * was cancelled, the error %G_IO_ERROR_CANCELLED will be returned.
 * Cancelling a close will still leave the stream closed, but some streams
 * can use a faster close that doesn't block to e.g. check errors.
 *
 * Returns: %TRUE on success, %FALSE on failure
 */


/**
 * g_input_stream_close_async:
 * @stream: A #GInputStream.
 * @io_priority: the <link linkend="io-priority">I/O priority</link> of the request.
 * @cancellable: (allow-none): optional cancellable object
 * @callback: (scope async): callback to call when the request is satisfied
 * @user_data: (closure): the data to pass to callback function
 *
 * Requests an asynchronous closes of the stream, releasing resources related to it.
 * When the operation is finished @callback will be called.
 * You can then call g_input_stream_close_finish() to get the result of the
 * operation.
 *
 * For behaviour details see g_input_stream_close().
 *
 * The asyncronous methods have a default fallback that uses threads to implement
 * asynchronicity, so they are optional for inheriting classes. However, if you
 * override one you must override all.
 */


/**
 * g_input_stream_close_finish:
 * @stream: a #GInputStream.
 * @result: a #GAsyncResult.
 * @error: a #GError location to store the error occurring, or %NULL to ignore.
 *
 * Finishes closing a stream asynchronously, started from g_input_stream_close_async().
 *
 * Returns: %TRUE if the stream was closed successfully.
 */


/**
 * g_input_stream_has_pending:
 * @stream: input stream.
 *
 * Checks if an input stream has pending actions.
 *
 * Returns: %TRUE if @stream has pending actions.
 */


/**
 * g_input_stream_is_closed:
 * @stream: input stream.
 *
 * Checks if an input stream is closed.
 *
 * Returns: %TRUE if the stream is closed.
 */


/**
 * g_input_stream_read:
 * @stream: a #GInputStream.
 * @buffer: a buffer to read data into (which should be at least count bytes long).
 * @count: the number of bytes that will be read from the stream
 * @cancellable: (allow-none): optional #GCancellable object, %NULL to ignore.
 * @error: location to store the error occurring, or %NULL to ignore
 *
 * Tries to read @count bytes from the stream into the buffer starting at
 * @buffer. Will block during this read.
 *
 * If count is zero returns zero and does nothing. A value of @count
 * larger than %G_MAXSSIZE will cause a %G_IO_ERROR_INVALID_ARGUMENT error.
 *
 * On success, the number of bytes read into the buffer is returned.
 * It is not an error if this is not the same as the requested size, as it
 * can happen e.g. near the end of a file. Zero is returned on end of file
 * (or if @count is zero),  but never otherwise.
 *
 * If @cancellable is not %NULL, then the operation can be cancelled by
 * triggering the cancellable object from another thread. If the operation
 * was cancelled, the error %G_IO_ERROR_CANCELLED will be returned. If an
 * operation was partially finished when the operation was cancelled the
 * partial result will be returned, without an error.
 *
 * On error -1 is returned and @error is set accordingly.
 *
 * Returns: Number of bytes read, or -1 on error, or 0 on end of file.
 */


/**
 * g_input_stream_read_all:
 * @stream: a #GInputStream.
 * @buffer: a buffer to read data into (which should be at least count bytes long).
 * @count: the number of bytes that will be read from the stream
 * @bytes_read: (out): location to store the number of bytes that was read from the stream
 * @cancellable: (allow-none): optional #GCancellable object, %NULL to ignore.
 * @error: location to store the error occurring, or %NULL to ignore
 *
 * Tries to read @count bytes from the stream into the buffer starting at
 * @buffer. Will block during this read.
 *
 * This function is similar to g_input_stream_read(), except it tries to
 * read as many bytes as requested, only stopping on an error or end of stream.
 *
 * On a successful read of @count bytes, or if we reached the end of the
 * stream,  %TRUE is returned, and @bytes_read is set to the number of bytes
 * read into @buffer.
 *
 * If there is an error during the operation %FALSE is returned and @error
 * is set to indicate the error status, @bytes_read is updated to contain
 * the number of bytes read into @buffer before the error occurred.
 *
 * Returns: %TRUE on success, %FALSE if there was an error
 */


/**
 * g_input_stream_read_async:
 * @stream: A #GInputStream.
 * @buffer: a buffer to read data into (which should be at least count bytes long).
 * @count: the number of bytes that will be read from the stream
 * @io_priority: the <link linkend="io-priority">I/O priority</link> of the request.
 * @cancellable: (allow-none): optional #GCancellable object, %NULL to ignore.
 * @callback: (scope async): callback to call when the request is satisfied
 * @user_data: (closure): the data to pass to callback function
 *
 * Request an asynchronous read of @count bytes from the stream into the buffer
 * starting at @buffer. When the operation is finished @callback will be called.
 * You can then call g_input_stream_read_finish() to get the result of the
 * operation.
 *
 * During an async request no other sync and async calls are allowed on @stream, and will
 * result in %G_IO_ERROR_PENDING errors.
 *
 * A value of @count larger than %G_MAXSSIZE will cause a %G_IO_ERROR_INVALID_ARGUMENT error.
 *
 * On success, the number of bytes read into the buffer will be passed to the
 * callback. It is not an error if this is not the same as the requested size, as it
 * can happen e.g. near the end of a file, but generally we try to read
 * as many bytes as requested. Zero is returned on end of file
 * (or if @count is zero),  but never otherwise.
 *
 * Any outstanding i/o request with higher priority (lower numerical value) will
 * be executed before an outstanding request with lower priority. Default
 * priority is %G_PRIORITY_DEFAULT.
 *
 * The asyncronous methods have a default fallback that uses threads to implement
 * asynchronicity, so they are optional for inheriting classes. However, if you
 * override one you must override all.
 */


/**
 * g_input_stream_read_finish:
 * @stream: a #GInputStream.
 * @result: a #GAsyncResult.
 * @error: a #GError location to store the error occurring, or %NULL to ignore.
 *
 * Finishes an asynchronous stream read operation.
 *
 * Returns: number of bytes read in, or -1 on error, or 0 on end of file.
 */


/**
 * g_input_stream_set_pending:
 * @stream: input stream
 * @error: a #GError location to store the error occurring, or %NULL to ignore.
 *
 * Sets @stream to have actions pending. If the pending flag is
 * already set or @stream is closed, it will return %FALSE and set
 * @error.
 *
 * Returns: %TRUE if pending was previously unset and is now set.
 */


/**
 * g_input_stream_skip:
 * @stream: a #GInputStream.
 * @count: the number of bytes that will be skipped from the stream
 * @cancellable: (allow-none): optional #GCancellable object, %NULL to ignore.
 * @error: location to store the error occurring, or %NULL to ignore
 *
 * Tries to skip @count bytes from the stream. Will block during the operation.
 *
 * This is identical to g_input_stream_read(), from a behaviour standpoint,
 * but the bytes that are skipped are not returned to the user. Some
 * streams have an implementation that is more efficient than reading the data.
 *
 * This function is optional for inherited classes, as the default implementation
 * emulates it using read.
 *
 * If @cancellable is not %NULL, then the operation can be cancelled by
 * triggering the cancellable object from another thread. If the operation
 * was cancelled, the error %G_IO_ERROR_CANCELLED will be returned. If an
 * operation was partially finished when the operation was cancelled the
 * partial result will be returned, without an error.
 *
 * Returns: Number of bytes skipped, or -1 on error
 */


/**
 * g_input_stream_skip_async:
 * @stream: A #GInputStream.
 * @count: the number of bytes that will be skipped from the stream
 * @io_priority: the <link linkend="io-priority">I/O priority</link> of the request.
 * @cancellable: (allow-none): optional #GCancellable object, %NULL to ignore.
 * @callback: (scope async): callback to call when the request is satisfied
 * @user_data: (closure): the data to pass to callback function
 *
 * Request an asynchronous skip of @count bytes from the stream.
 * When the operation is finished @callback will be called.
 * You can then call g_input_stream_skip_finish() to get the result
 * of the operation.
 *
 * During an async request no other sync and async calls are allowed,
 * and will result in %G_IO_ERROR_PENDING errors.
 *
 * A value of @count larger than %G_MAXSSIZE will cause a %G_IO_ERROR_INVALID_ARGUMENT error.
 *
 * On success, the number of bytes skipped will be passed to the callback.
 * It is not an error if this is not the same as the requested size, as it
 * can happen e.g. near the end of a file, but generally we try to skip
 * as many bytes as requested. Zero is returned on end of file
 * (or if @count is zero), but never otherwise.
 *
 * Any outstanding i/o request with higher priority (lower numerical value)
 * will be executed before an outstanding request with lower priority.
 * Default priority is %G_PRIORITY_DEFAULT.
 *
 * The asynchronous methods have a default fallback that uses threads to
 * implement asynchronicity, so they are optional for inheriting classes.
 * However, if you override one, you must override all.
 */


/**
 * g_input_stream_skip_finish:
 * @stream: a #GInputStream.
 * @result: a #GAsyncResult.
 * @error: a #GError location to store the error occurring, or %NULL to ignore.
 *
 * Finishes a stream skip operation.
 *
 * Returns: the size of the bytes skipped, or %-1 on error.
 */


/**
 * g_io_error_from_errno:
 * @err_no: Error number as defined in errno.h.
 *
 * Converts errno.h error codes into GIO error codes.
 *
 * Returns: #GIOErrorEnum value for the given errno.h error number.
 */


/**
 * g_io_error_from_win32_error:
 * @error_code: Windows error number.
 *
 * Converts some common error codes into GIO error codes. The
 * fallback value G_IO_ERROR_FAILED is returned for error codes not
 * handled.
 *
 * Returns: #GIOErrorEnum value for the given error number.
 * Since: 2.26
 */


/**
 * g_io_error_quark:
 *
 * Gets the GIO Error Quark.
 *
 * Returns: a #GQuark.
 */


/**
 * g_io_extension_get_name:
 * @extension: a #GIOExtension
 *
 * Gets the name under which @extension was registered.
 *
 * Note that the same type may be registered as extension
 * for multiple extension points, under different names.
 *
 * Returns: the name of @extension.
 */


/**
 * g_io_extension_get_priority:
 * @extension: a #GIOExtension
 *
 * Gets the priority with which @extension was registered.
 *
 * Returns: the priority of @extension
 */


/**
 * g_io_extension_get_type:
 * @extension: a #GIOExtension
 *
 * Gets the type associated with @extension.
 *
 * Returns: the type of @extension
 */


/**
 * g_io_extension_point_get_extension_by_name:
 * @extension_point: a #GIOExtensionPoint
 * @name: the name of the extension to get
 *
 * Finds a #GIOExtension for an extension point by name.
 *
 * Returns: (transfer none): the #GIOExtension for @extension_point that has the given name, or %NULL if there is no extension with that name
 */


/**
 * g_io_extension_point_get_extensions:
 * @extension_point: a #GIOExtensionPoint
 *
 * Gets a list of all extensions that implement this extension point.
 * The list is sorted by priority, beginning with the highest priority.
 *
 * Returns: (element-type GIOExtension) (transfer none): a #GList of #GIOExtension<!-- -->s. The list is owned by GIO and should not be modified.
 */


/**
 * g_io_extension_point_get_required_type:
 * @extension_point: a #GIOExtensionPoint
 *
 * Gets the required type for @extension_point.
 *
 * Returns: the #GType that all implementations must have, or #G_TYPE_INVALID if the extension point has no required type
 */


/**
 * g_io_extension_point_implement:
 * @extension_point_name: the name of the extension point
 * @type: the #GType to register as extension
 * @extension_name: the name for the extension
 * @priority: the priority for the extension
 *
 * Registers @type as extension for the extension point with name
 * @extension_point_name.
 *
 * If @type has already been registered as an extension for this
 * extension point, the existing #GIOExtension object is returned.
 *
 * Returns: (transfer none): a #GIOExtension object for #GType
 */


/**
 * g_io_extension_point_lookup:
 * @name: the name of the extension point
 *
 * Looks up an existing extension point.
 *
 * Returns: (transfer none): the #GIOExtensionPoint, or %NULL if there is no registered extension point with the given name.
 */


/**
 * g_io_extension_point_register:
 * @name: The name of the extension point
 *
 * Registers an extension point.
 *
 * Returns: (transfer none): the new #GIOExtensionPoint. This object is owned by GIO and should not be freed.
 */


/**
 * g_io_extension_point_set_required_type:
 * @extension_point: a #GIOExtensionPoint
 * @type: the #GType to require
 *
 * Sets the required type for @extension_point to @type.
 * All implementations must henceforth have this type.
 */


/**
 * g_io_extension_ref_class:
 * @extension: a #GIOExtension
 *
 * Gets a reference to the class for the type that is
 * associated with @extension.
 *
 * Returns: (transfer full): the #GTypeClass for the type of @extension
 */


/**
 * g_io_module_new:
 * @filename: filename of the shared library module.
 *
 * Creates a new GIOModule that will load the specific
 * shared library when in use.
 *
 * Returns: a #GIOModule from given @filename, or %NULL on error.
 */


/**
 * g_io_module_scope_block:
 * @scope: a module loading scope
 * @basename: the basename to block
 *
 * Block modules with the given @basename from being loaded when
 * this scope is used with g_io_modules_scan_all_in_directory_with_scope()
 * or g_io_modules_load_all_in_directory_with_scope().
 *
 * Since: 2.30
 */


/**
 * g_io_module_scope_free:
 * @scope: a module loading scope
 *
 * Free a module scope.
 *
 * Since: 2.30
 */


/**
 * g_io_module_scope_new:
 * @flags: flags for the new scope
 *
 * Create a new scope for loading of IO modules. A scope can be used for
 * blocking duplicate modules, or blocking a module you don't want to load.
 *
 * Specify the %G_IO_MODULE_SCOPE_BLOCK_DUPLICATES flag to block modules
 * which have the same base name as a module that has already been seen
 * in this scope.
 *
 * Returns: (transfer full): the new module scope
 * Since: 2.30
 */


/**
 * g_io_modules_load_all_in_directory:
 * @dirname: pathname for a directory containing modules to load.
 *
 * Loads all the modules in the specified directory.
 *
 * If don't require all modules to be initialized (and thus registering
 * all gtypes) then you can use g_io_modules_scan_all_in_directory()
 * which allows delayed/lazy loading of modules.
 *
 * Returns: (element-type GIOModule) (transfer full): a list of #GIOModules loaded from the directory, All the modules are loaded into memory, if you want to unload them (enabling on-demand loading) you must call g_type_module_unuse() on all the modules. Free the list with g_list_free().
 */


/**
 * g_io_modules_load_all_in_directory_with_scope:
 * @dirname: pathname for a directory containing modules to load.
 * @scope: a scope to use when scanning the modules.
 *
 * Loads all the modules in the specified directory.
 *
 * If don't require all modules to be initialized (and thus registering
 * all gtypes) then you can use g_io_modules_scan_all_in_directory()
 * which allows delayed/lazy loading of modules.
 *
 * Returns: (element-type GIOModule) (transfer full): a list of #GIOModules loaded from the directory, All the modules are loaded into memory, if you want to unload them (enabling on-demand loading) you must call g_type_module_unuse() on all the modules. Free the list with g_list_free().
 * Since: 2.30
 */


/**
 * g_io_modules_scan_all_in_directory:
 * @dirname: pathname for a directory containing modules to scan.
 *
 * Scans all the modules in the specified directory, ensuring that
 * any extension point implemented by a module is registered.
 *
 * This may not actually load and initialize all the types in each
 * module, some modules may be lazily loaded and initialized when
 * an extension point it implementes is used with e.g.
 * g_io_extension_point_get_extensions() or
 * g_io_extension_point_get_extension_by_name().
 *
 * If you need to guarantee that all types are loaded in all the modules,
 * use g_io_modules_load_all_in_directory().
 *
 * Since: 2.24
 */


/**
 * g_io_modules_scan_all_in_directory_with_scope:
 * @dirname: pathname for a directory containing modules to scan.
 * @scope: a scope to use when scanning the modules
 *
 * Scans all the modules in the specified directory, ensuring that
 * any extension point implemented by a module is registered.
 *
 * This may not actually load and initialize all the types in each
 * module, some modules may be lazily loaded and initialized when
 * an extension point it implementes is used with e.g.
 * g_io_extension_point_get_extensions() or
 * g_io_extension_point_get_extension_by_name().
 *
 * If you need to guarantee that all types are loaded in all the modules,
 * use g_io_modules_load_all_in_directory().
 *
 * Since: 2.30
 */


/**
 * g_io_scheduler_cancel_all_jobs:
 *
 * Cancels all cancellable I/O jobs.
 *
 * A job is cancellable if a #GCancellable was passed into
 * g_io_scheduler_push_job().
 */


/**
 * g_io_scheduler_job_send_to_mainloop:
 * @job: a #GIOSchedulerJob
 * @func: a #GSourceFunc callback that will be called in the original thread
 * @user_data: data to pass to @func
 * @notify: (allow-none): a #GDestroyNotify for @user_data, or %NULL
 *
 * Used from an I/O job to send a callback to be run in the thread
 * that the job was started from, waiting for the result (and thus
 * blocking the I/O job).
 *
 * Returns: The return value of @func
 */


/**
 * g_io_scheduler_job_send_to_mainloop_async:
 * @job: a #GIOSchedulerJob
 * @func: a #GSourceFunc callback that will be called in the original thread
 * @user_data: data to pass to @func
 * @notify: (allow-none): a #GDestroyNotify for @user_data, or %NULL
 *
 * Used from an I/O job to send a callback to be run asynchronously in
 * the thread that the job was started from. The callback will be run
 * when the main loop is available, but at that time the I/O job might
 * have finished. The return value from the callback is ignored.
 *
 * Note that if you are passing the @user_data from g_io_scheduler_push_job()
 * on to this function you have to ensure that it is not freed before
 * @func is called, either by passing %NULL as @notify to
 * g_io_scheduler_push_job() or by using refcounting for @user_data.
 */


/**
 * g_io_scheduler_push_job:
 * @job_func: a #GIOSchedulerJobFunc.
 * @user_data: data to pass to @job_func
 * @notify: (allow-none): a #GDestroyNotify for @user_data, or %NULL
 * @io_priority: the <link linkend="gioscheduler">I/O priority</link> of the request.
 * @cancellable: optional #GCancellable object, %NULL to ignore.
 *
 * Schedules the I/O job to run in another thread.
 *
 * @notify will be called on @user_data after @job_func has returned,
 * regardless whether the job was cancelled or has run to completion.
 *
 * If @cancellable is not %NULL, it can be used to cancel the I/O job
 * by calling g_cancellable_cancel() or by calling
 * g_io_scheduler_cancel_all_jobs().
 */


/**
 * g_io_stream_clear_pending:
 * @stream: a #GIOStream
 *
 * Clears the pending flag on @stream.
 *
 * Since: 2.22
 */


/**
 * g_io_stream_close:
 * @stream: a #GIOStream
 * @cancellable: (allow-none): optional #GCancellable object, %NULL to ignore
 * @error: location to store the error occurring, or %NULL to ignore
 *
 * Closes the stream, releasing resources related to it. This will also
 * closes the individual input and output streams, if they are not already
 * closed.
 *
 * Once the stream is closed, all other operations will return
 * %G_IO_ERROR_CLOSED. Closing a stream multiple times will not
 * return an error.
 *
 * Closing a stream will automatically flush any outstanding buffers
 * in the stream.
 *
 * Streams will be automatically closed when the last reference
 * is dropped, but you might want to call this function to make sure
 * resources are released as early as possible.
 *
 * Some streams might keep the backing store of the stream (e.g. a file
 * descriptor) open after the stream is closed. See the documentation for
 * the individual stream for details.
 *
 * On failure the first error that happened will be reported, but the
 * close operation will finish as much as possible. A stream that failed
 * to close will still return %G_IO_ERROR_CLOSED for all operations.
 * Still, it is important to check and report the error to the user,
 * otherwise there might be a loss of data as all data might not be written.
 *
 * If @cancellable is not NULL, then the operation can be cancelled by
 * triggering the cancellable object from another thread. If the operation
 * was cancelled, the error %G_IO_ERROR_CANCELLED will be returned.
 * Cancelling a close will still leave the stream closed, but some streams
 * can use a faster close that doesn't block to e.g. check errors.
 *
 * The default implementation of this method just calls close on the
 * individual input/output streams.
 *
 * Returns: %TRUE on success, %FALSE on failure
 * Since: 2.22
 */


/**
 * g_io_stream_close_async:
 * @stream: a #GIOStream
 * @io_priority: the io priority of the request
 * @cancellable: (allow-none): optional cancellable object
 * @callback: (scope async): callback to call when the request is satisfied
 * @user_data: (closure): the data to pass to callback function
 *
 * Requests an asynchronous close of the stream, releasing resources
 * related to it. When the operation is finished @callback will be
 * called. You can then call g_io_stream_close_finish() to get
 * the result of the operation.
 *
 * For behaviour details see g_io_stream_close().
 *
 * The asynchronous methods have a default fallback that uses threads
 * to implement asynchronicity, so they are optional for inheriting
 * classes. However, if you override one you must override all.
 *
 * Since: 2.22
 */


/**
 * g_io_stream_close_finish:
 * @stream: a #GIOStream
 * @result: a #GAsyncResult
 * @error: a #GError location to store the error occurring, or %NULL to ignore
 *
 * Closes a stream.
 *
 * Returns: %TRUE if stream was successfully closed, %FALSE otherwise.
 * Since: 2.22
 */


/**
 * g_io_stream_get_input_stream:
 * @stream: a #GIOStream
 *
 * Gets the input stream for this object. This is used
 * for reading.
 *
 * Returns: (transfer none): a #GInputStream, owned by the #GIOStream. Do not free.
 * Since: 2.22
 */


/**
 * g_io_stream_get_output_stream:
 * @stream: a #GIOStream
 *
 * Gets the output stream for this object. This is used for
 * writing.
 *
 * Returns: (transfer none): a #GOutputStream, owned by the #GIOStream. Do not free.
 * Since: 2.22
 */


/**
 * g_io_stream_has_pending:
 * @stream: a #GIOStream
 *
 * Checks if a stream has pending actions.
 *
 * Returns: %TRUE if @stream has pending actions.
 * Since: 2.22
 */


/**
 * g_io_stream_is_closed:
 * @stream: a #GIOStream
 *
 * Checks if a stream is closed.
 *
 * Returns: %TRUE if the stream is closed.
 * Since: 2.22
 */


/**
 * g_io_stream_set_pending:
 * @stream: a #GIOStream
 * @error: a #GError location to store the error occurring, or %NULL to ignore
 *
 * Sets @stream to have actions pending. If the pending flag is
 * already set or @stream is closed, it will return %FALSE and set
 * @error.
 *
 * Returns: %TRUE if pending was previously unset and is now set.
 * Since: 2.22
 */


/**
 * g_io_stream_splice_async:
 * @stream1: a #GIOStream.
 * @stream2: a #GIOStream.
 * @flags: a set of #GIOStreamSpliceFlags.
 * @io_priority: the io priority of the request.
 * @cancellable: (allow-none): optional #GCancellable object, %NULL to ignore.
 * @callback: (scope async): a #GAsyncReadyCallback.
 * @user_data: (closure): user data passed to @callback.
 *
 * Asyncronously splice the output stream of @stream1 to the input stream of
 * @stream2, and splice the output stream of @stream2 to the input stream of
 * @stream1.
 *
 * When the operation is finished @callback will be called.
 * You can then call g_io_stream_splice_finish() to get the
 * result of the operation.
 *
 * Since: 2.28
 */


/**
 * g_io_stream_splice_finish:
 * @result: a #GAsyncResult.
 * @error: a #GError location to store the error occurring, or %NULL to ignore.
 *
 * Finishes an asynchronous io stream splice operation.
 *
 * Returns: %TRUE on success, %FALSE otherwise.
 * Since: 2.28
 */


/**
 * g_keyfile_settings_backend_new:
 * @filename: the filename of the keyfile
 * @root_path: the path under which all settings keys appear
 * @root_group: (allow-none): the group name corresponding to @root_path, or %NULL
 *
 * Creates a keyfile-backed #GSettingsBackend.
 *
 * The filename of the keyfile to use is given by @filename.
 *
 * All settings read to or written from the backend must fall under the
 * path given in @root_path (which must start and end with a slash and
 * not contain two consecutive slashes).  @root_path may be "/".
 *
 * If @root_group is non-%NULL then it specifies the name of the keyfile
 * group used for keys that are written directly below @root_path.  For
 * example, if @root_path is "/apps/example/" and @root_group is
 * "toplevel", then settings the key "/apps/example/enabled" to a value
 * of %TRUE will cause the following to appear in the keyfile:
 *
 * |[
 *   [toplevel]
 *   enabled=true
 * ]|
 *
 * If @root_group is %NULL then it is not permitted to store keys
 * directly below the @root_path.
 *
 * For keys not stored directly below @root_path (ie: in a sub-path),
 * the name of the subpath (with the final slash stripped) is used as
 * the name of the keyfile group.  To continue the example, if
 * "/apps/example/profiles/default/font-size" were set to
 * 12 then the following would appear in the keyfile:
 *
 * |[
 *   [profiles/default]
 *   font-size=12
 * ]|
 *
 * The backend will refuse writes (and return writability as being
 * %FALSE) for keys outside of @root_path and, in the event that
 * @root_group is %NULL, also for keys directly under @root_path.
 * Writes will also be refused if the backend detects that it has the
 * inability to rewrite the keyfile (ie: the containing directory is not
 * writable).
 *
 * There is no checking done for your key namespace clashing with the
 * syntax of the key file format.  For example, if you have '[' or ']'
 * characters in your path names or '=' in your key names you may be in
 * trouble.
 *
 * Returns: (transfer full): a keyfile-backed #GSettingsBackend
 */


/**
 * g_loadable_icon_load:
 * @icon: a #GLoadableIcon.
 * @size: an integer.
 * @type: (out) (allow-none): a location to store the type of the loaded icon, %NULL to ignore.
 * @cancellable: (allow-none): optional #GCancellable object, %NULL to ignore.
 * @error: a #GError location to store the error occurring, or %NULL to ignore.
 *
 * Loads a loadable icon. For the asynchronous version of this function,
 * see g_loadable_icon_load_async().
 *
 * Returns: (transfer full): a #GInputStream to read the icon from.
 */


/**
 * g_loadable_icon_load_async:
 * @icon: a #GLoadableIcon.
 * @size: an integer.
 * @cancellable: (allow-none): optional #GCancellable object, %NULL to ignore.
 * @callback: (scope async): a #GAsyncReadyCallback to call when the request is satisfied
 * @user_data: (closure): the data to pass to callback function
 *
 * Loads an icon asynchronously. To finish this function, see
 * g_loadable_icon_load_finish(). For the synchronous, blocking
 * version of this function, see g_loadable_icon_load().
 */


/**
 * g_loadable_icon_load_finish:
 * @icon: a #GLoadableIcon.
 * @res: a #GAsyncResult.
 * @type: a location to store the type of the loaded icon, %NULL to ignore.
 * @error: a #GError location to store the error occurring, or %NULL to ignore.
 *
 * Finishes an asynchronous icon load started in g_loadable_icon_load_async().
 *
 * Returns: (transfer full): a #GInputStream to read the icon from.
 */


/**
 * g_local_vfs_new:
 *
 * Returns a new #GVfs handle for a local vfs.
 *
 * Returns: a new #GVfs handle.
 */


/**
 * g_memory_input_stream_add_data:
 * @stream: a #GMemoryInputStream
 * @data: (array length=len) (element-type guint8) (transfer full): input data
 * @len: length of the data, may be -1 if @data is a nul-terminated string
 * @destroy: (allow-none): function that is called to free @data, or %NULL
 *
 * Appends @data to data that can be read from the input stream
 */


/**
 * g_memory_input_stream_new:
 *
 * Creates a new empty #GMemoryInputStream.
 *
 * Returns: a new #GInputStream
 */


/**
 * g_memory_input_stream_new_from_data:
 * @data: (array length=len) (element-type guint8) (transfer full): input data
 * @len: length of the data, may be -1 if @data is a nul-terminated string
 * @destroy: (allow-none): function that is called to free @data, or %NULL
 *
 * Creates a new #GMemoryInputStream with data in memory of a given size.
 *
 * Returns: new #GInputStream read from @data of @len bytes.
 */


/**
 * g_memory_output_stream_get_data:
 * @ostream: a #GMemoryOutputStream
 *
 * Gets any loaded data from the @ostream.
 *
 * Note that the returned pointer may become invalid on the next
 * write or truncate operation on the stream.
 *
 * Returns: (transfer none): pointer to the stream's data
 */


/**
 * g_memory_output_stream_get_data_size:
 * @ostream: a #GMemoryOutputStream
 *
 * Returns the number of bytes from the start up
 * to including the last byte written in the stream
 * that has not been truncated away.
 *
 * Returns: the number of bytes written to the stream
 * Since: 2.18
 */


/**
 * g_memory_output_stream_get_size:
 * @ostream: a #GMemoryOutputStream
 *
 * Gets the size of the currently allocated data area (available from
 * g_memory_output_stream_get_data()). If the stream isn't
 * growable (no realloc was passed to g_memory_output_stream_new()) then
 * this is the maximum size of the stream and further writes
 * will return %G_IO_ERROR_NO_SPACE.
 *
 * Note that for growable streams the returned size may become invalid on
 * the next write or truncate operation on the stream.
 *
 * If you want the number of bytes currently written to the stream, use
 * g_memory_output_stream_get_data_size().
 *
 * Returns: the number of bytes allocated for the data buffer
 */


/**
 * g_memory_output_stream_new: (skip)
 * @data: (allow-none): pointer to a chunk of memory to use, or %NULL
 * @size: the size of @data
 * @realloc_function: (allow-none): a function with realloc() semantics (like g_realloc()) to be called when @data needs to be grown, or %NULL
 * @destroy_function: (allow-none): a function to be called on @data when the stream is finalized, or %NULL
 *
 * Creates a new #GMemoryOutputStream.
 *
 * If @data is non-%NULL, the stream  will use that for its internal storage.
 * If @realloc_fn is non-%NULL, it will be used for resizing the internal
 * storage when necessary. To construct a fixed-size output stream,
 * pass %NULL as @realloc_fn.
 *
 * |[
 * /&ast; a stream that can grow &ast;/
 * stream = g_memory_output_stream_new (NULL, 0, realloc, free);
 *
 * /&ast; another stream that can grow &ast;/
 * stream2 = g_memory_output_stream_new (NULL, 0, g_realloc, g_free);
 *
 * /&ast; a fixed-size stream &ast;/
 * data = malloc (200);
 * stream3 = g_memory_output_stream_new (data, 200, NULL, free);
 * ]|
 *
 * Returns: A newly created #GMemoryOutputStream object.
 */


/**
 * g_memory_output_stream_steal_data:
 * @ostream: a #GMemoryOutputStream
 *
 * Gets any loaded data from the @ostream. Ownership of the data
 * is transferred to the caller; when no longer needed it must be
 * freed using the free function set in @ostream's
 * #GMemoryOutputStream:destroy-function property.
 *
 * @ostream must be closed before calling this function.
 *
 * Returns: (transfer full): the stream's data
 * Since: 2.26
 */


/**
 * g_memory_settings_backend_new:
 *
 * Creates a memory-backed #GSettingsBackend.
 *
 * This backend allows changes to settings, but does not write them
 * to any backing storage, so the next time you run your application,
 * the memory backend will start out with the default values again.
 *
 * Returns: (transfer full): a newly created #GSettingsBackend
 * Since: 2.28
 */


/**
 * g_menu_append:
 * @menu: a #GMenu
 * @label: (allow-none): the section label, or %NULL
 * @detailed_action: (allow-none): the detailed action string, or %NULL
 *
 * Convenience function for appending a normal menu item to the end of
 * @menu.  Combine g_menu_new() and g_menu_insert_item() for a more
 * flexible alternative.
 *
 * Since: 2.32
 */


/**
 * g_menu_append_item:
 * @menu: a #GMenu
 * @item: a #GMenuItem to append
 *
 * Appends @item to the end of @menu.
 *
 * See g_menu_insert_item() for more information.
 *
 * Since: 2.32
 */


/**
 * g_menu_append_section:
 * @menu: a #GMenu
 * @label: (allow-none): the section label, or %NULL
 * @section: a #GMenuModel with the items of the section
 *
 * Convenience function for appending a section menu item to the end of
 * @menu.  Combine g_menu_item_new_section() and g_menu_insert_item() for a
 * more flexible alternative.
 *
 * Since: 2.32
 */


/**
 * g_menu_append_submenu:
 * @menu: a #GMenu
 * @label: (allow-none): the section label, or %NULL
 * @submenu: a #GMenuModel with the items of the submenu
 *
 * Convenience function for appending a submenu menu item to the end of
 * @menu.  Combine g_menu_item_new_submenu() and g_menu_insert_item() for a
 * more flexible alternative.
 *
 * Since: 2.32
 */


/**
 * g_menu_attribute_iter_get_name:
 * @iter: a #GMenuAttributeIter
 *
 * Gets the name of the attribute at the current iterator position, as
 * a string.
 *
 * The iterator is not advanced.
 *
 * Returns: the name of the attribute
 * Since: 2.32
 */


/**
 * g_menu_attribute_iter_get_next:
 * @iter: a #GMenuAttributeIter
 * @out_name: (out) (allow-none) (transfer none): the type of the attribute
 * @value: (out) (allow-none) (transfer full): the attribute value
 *
 * This function combines g_menu_attribute_iter_next() with
 * g_menu_attribute_iter_get_name() and g_menu_attribute_iter_get_value().
 *
 * First the iterator is advanced to the next (possibly first) attribute.
 * If that fails, then %FALSE is returned and there are no other
 * effects.
 *
 * If successful, @name and @value are set to the name and value of the
 * attribute that has just been advanced to.  At this point,
 * g_menu_attribute_iter_get_name() and g_menu_attribute_iter_get_value() will
 * return the same values again.
 *
 * The value returned in @name remains valid for as long as the iterator
 * remains at the current position.  The value returned in @value must
 * be unreffed using g_variant_unref() when it is no longer in use.
 *
 * Returns: %TRUE on success, or %FALSE if there is no additional attribute
 * Since: 2.32
 */


/**
 * g_menu_attribute_iter_get_value:
 * @iter: a #GMenuAttributeIter
 *
 * Gets the value of the attribute at the current iterator position.
 *
 * The iterator is not advanced.
 *
 * Returns: (transfer full): the value of the current attribute
 * Since: 2.32
 */


/**
 * g_menu_attribute_iter_next:
 * @iter: a #GMenuAttributeIter
 *
 * Attempts to advance the iterator to the next (possibly first)
 * attribute.
 *
 * %TRUE is returned on success, or %FALSE if there are no more
 * attributes.
 *
 * You must call this function when you first acquire the iterator
 * to advance it to the first attribute (and determine if the first
 * attribute exists at all).
 *
 * Returns: %TRUE on success, or %FALSE when there are no more attributes
 * Since: 2.32
 */


/**
 * g_menu_freeze:
 * @menu: a #GMenu
 *
 * Marks @menu as frozen.
 *
 * After the menu is frozen, it is an error to attempt to make any
 * changes to it.  In effect this means that the #GMenu API must no
 * longer be used.
 *
 * This function causes g_menu_model_is_mutable() to begin returning
 * %FALSE, which has some positive performance implications.
 *
 * Since: 2.32
 */


/**
 * g_menu_insert:
 * @menu: a #GMenu
 * @position: the position at which to insert the item
 * @label: (allow-none): the section label, or %NULL
 * @detailed_action: (allow-none): the detailed action string, or %NULL
 *
 * Convenience function for inserting a normal menu item into @menu.
 * Combine g_menu_new() and g_menu_insert_item() for a more flexible
 * alternative.
 *
 * Since: 2.32
 */


/**
 * g_menu_insert_item:
 * @menu: a #GMenu
 * @position: the position at which to insert the item
 * @item: the #GMenuItem to insert
 *
 * Inserts @item into @menu.
 *
 * The "insertion" is actually done by copying all of the attribute and
 * link values of @item and using them to form a new item within @menu.
 * As such, @item itself is not really inserted, but rather, a menu item
 * that is exactly the same as the one presently described by @item.
 *
 * This means that @item is essentially useless after the insertion
 * occurs.  Any changes you make to it are ignored unless it is inserted
 * again (at which point its updated values will be copied).
 *
 * You should probably just free @item once you're done.
 *
 * There are many convenience functions to take care of common cases.
 * See g_menu_insert(), g_menu_insert_section() and
 * g_menu_insert_submenu() as well as "prepend" and "append" variants of
 * each of these functions.
 *
 * Since: 2.32
 */


/**
 * g_menu_insert_section:
 * @menu: a #GMenu
 * @position: the position at which to insert the item
 * @label: (allow-none): the section label, or %NULL
 * @section: a #GMenuModel with the items of the section
 *
 * Convenience function for inserting a section menu item into @menu.
 * Combine g_menu_item_new_section() and g_menu_insert_item() for a more
 * flexible alternative.
 *
 * Since: 2.32
 */


/**
 * g_menu_insert_submenu:
 * @menu: a #GMenu
 * @position: the position at which to insert the item
 * @label: (allow-none): the section label, or %NULL
 * @submenu: a #GMenuModel with the items of the submenu
 *
 * Convenience function for inserting a submenu menu item into @menu.
 * Combine g_menu_item_new_submenu() and g_menu_insert_item() for a more
 * flexible alternative.
 *
 * Since: 2.32
 */


/**
 * g_menu_item_new:
 * @label: (allow-none): the section label, or %NULL
 * @detailed_action: (allow-none): the detailed action string, or %NULL
 *
 * Creates a new #GMenuItem.
 *
 * If @label is non-%NULL it is used to set the "label" attribute of the
 * new item.
 *
 * If @detailed_action is non-%NULL it is used to set the "action" and
 * possibly the "target" attribute of the new item.  See
 * g_menu_item_set_detailed_action() for more information.
 *
 * Returns: a new #GMenuItem
 * Since: 2.32
 */


/**
 * g_menu_item_new_section:
 * @label: (allow-none): the section label, or %NULL
 * @section: a #GMenuModel with the items of the section
 *
 * Creates a new #GMenuItem representing a section.
 *
 * This is a convenience API around g_menu_item_new() and
 * g_menu_item_set_section().
 *
 * The effect of having one menu appear as a section of another is
 * exactly as it sounds: the items from @section become a direct part of
 * the menu that @menu_item is added to.
 *
 * Visual separation is typically displayed between two non-empty
 * sections.  If @label is non-%NULL then it will be encorporated into
 * this visual indication.  This allows for labeled subsections of a
 * menu.
 *
 * As a simple example, consider a typical "Edit" menu from a simple
 * program.  It probably contains an "Undo" and "Redo" item, followed by
 * a separator, followed by "Cut", "Copy" and "Paste".
 *
 * This would be accomplished by creating three #GMenu instances.  The
 * first would be populated with the "Undo" and "Redo" items, and the
 * second with the "Cut", "Copy" and "Paste" items.  The first and
 * second menus would then be added as submenus of the third.  In XML
 * format, this would look something like the following:
 *
 * <informalexample><programlisting><![CDATA[
 * <menu id='edit-menu'>
 *   <section>
 *     <item label='Undo'/>
 *     <item label='Redo'/>
 *   </section>
 *   <section>
 *     <item label='Cut'/>
 *     <item label='Copy'/>
 *     <item label='Paste'/>
 *   </section>
 * </menu>
 * ]]></programlisting></informalexample>
 *
 * The following example is exactly equivalent.  It is more illustrative
 * of the exact relationship between the menus and items (keeping in
 * mind that the 'link' element defines a new menu that is linked to the
 * containing one).  The style of the second example is more verbose and
 * difficult to read (and therefore not recommended except for the
 * purpose of understanding what is really going on).
 *
 * <informalexample><programlisting><![CDATA[
 * <menu id='edit-menu'>
 *   <item>
 *     <link name='section'>
 *       <item label='Undo'/>
 *       <item label='Redo'/>
 *     </link>
 *   </item>
 *   <item>
 *     <link name='section'>
 *       <item label='Cut'/>
 *       <item label='Copy'/>
 *       <item label='Paste'/>
 *     </link>
 *   </item>
 * </menu>
 * ]]></programlisting></informalexample>
 *
 * Returns: a new #GMenuItem
 * Since: 2.32
 */


/**
 * g_menu_item_new_submenu:
 * @label: (allow-none): the section label, or %NULL
 * @submenu: a #GMenuModel with the items of the submenu
 *
 * Creates a new #GMenuItem representing a submenu.
 *
 * This is a convenience API around g_menu_item_new() and
 * g_menu_item_set_submenu().
 *
 * Returns: a new #GMenuItem
 * Since: 2.32
 */


/**
 * g_menu_item_set_action_and_target:
 * @menu_item: a #GMenuItem
 * @action: (allow-none): the name of the action for this item
 * @format_string: (allow-none): a GVariant format string
 * @...: positional parameters, as per @format_string
 *
 * Sets or unsets the "action" and "target" attributes of @menu_item.
 *
 * If @action is %NULL then both the "action" and "target" attributes
 * are unset (and @format_string is ignored along with the positional
 * parameters).
 *
 * If @action is non-%NULL then the "action" attribute is set.
 * @format_string is then inspected.  If it is non-%NULL then the proper
 * position parameters are collected to create a #GVariant instance to
 * use as the target value.  If it is %NULL then the positional
 * parameters are ignored and the "target" attribute is unset.
 *
 * See also g_menu_item_set_action_and_target_value() for an equivalent
 * call that directly accepts a #GVariant.  See
 * g_menu_item_set_detailed_action() for a more convenient version that
 * works with string-typed targets.
 *
 * See also g_menu_item_set_action_and_target_value() for a
 * description of the semantics of the action and target attributes.
 *
 * Since: 2.32
 */


/**
 * g_menu_item_set_action_and_target_value:
 * @menu_item: a #GMenuItem
 * @action: (allow-none): the name of the action for this item
 * @target_value: (allow-none): a #GVariant to use as the action target
 *
 * Sets or unsets the "action" and "target" attributes of @menu_item.
 *
 * If @action is %NULL then both the "action" and "target" attributes
 * are unset (and @target_value is ignored).
 *
 * If @action is non-%NULL then the "action" attribute is set.  The
 * "target" attribute is then set to the value of @target_value if it is
 * non-%NULL or unset otherwise.
 *
 * Normal menu items (ie: not submenu, section or other custom item
 * types) are expected to have the "action" attribute set to identify
 * the action that they are associated with.  The state type of the
 * action help to determine the disposition of the menu item.  See
 * #GAction and #GActionGroup for an overview of actions.
 *
 * In general, clicking on the menu item will result in activation of
 * the named action with the "target" attribute given as the parameter
 * to the action invocation.  If the "target" attribute is not set then
 * the action is invoked with no parameter.
 *
 * If the action has no state then the menu item is usually drawn as a
 * plain menu item (ie: with no additional decoration).
 *
 * If the action has a boolean state then the menu item is usually drawn
 * as a toggle menu item (ie: with a checkmark or equivalent
 * indication).  The item should be marked as 'toggled' or 'checked'
 * when the boolean state is %TRUE.
 *
 * If the action has a string state then the menu item is usually drawn
 * as a radio menu item (ie: with a radio bullet or equivalent
 * indication).  The item should be marked as 'selected' when the string
 * state is equal to the value of the @target property.
 *
 * See g_menu_item_set_action_and_target() or
 * g_menu_item_set_detailed_action() for two equivalent calls that are
 * probably more convenient for most uses.
 *
 * Since: 2.32
 */


/**
 * g_menu_item_set_attribute:
 * @menu_item: a #GMenuItem
 * @attribute: the attribute to set
 * @format_string: (allow-none): a #GVariant format string, or %NULL
 * @...: positional parameters, as per @format_string
 *
 * Sets or unsets an attribute on @menu_item.
 *
 * The attribute to set or unset is specified by @attribute. This
 * can be one of the standard attribute names %G_MENU_ATTRIBUTE_LABEL,
 * %G_MENU_ATTRIBUTE_ACTION, %G_MENU_ATTRIBUTE_TARGET, or a custom
 * attribute name.
 * Attribute names are restricted to lowercase characters, numbers
 * and '-'. Furthermore, the names must begin with a lowercase character,
 * must not end with a '-', and must not contain consecutive dashes.
 *
 * If @format_string is non-%NULL then the proper position parameters
 * are collected to create a #GVariant instance to use as the attribute
 * value.  If it is %NULL then the positional parameterrs are ignored
 * and the named attribute is unset.
 *
 * See also g_menu_item_set_attribute_value() for an equivalent call
 * that directly accepts a #GVariant.
 *
 * Since: 2.32
 */


/**
 * g_menu_item_set_attribute_value:
 * @menu_item: a #GMenuItem
 * @attribute: the attribute to set
 * @value: (allow-none): a #GVariant to use as the value, or %NULL
 *
 * Sets or unsets an attribute on @menu_item.
 *
 * The attribute to set or unset is specified by @attribute. This
 * can be one of the standard attribute names %G_MENU_ATTRIBUTE_LABEL,
 * %G_MENU_ATTRIBUTE_ACTION, %G_MENU_ATTRIBUTE_TARGET, or a custom
 * attribute name.
 * Attribute names are restricted to lowercase characters, numbers
 * and '-'. Furthermore, the names must begin with a lowercase character,
 * must not end with a '-', and must not contain consecutive dashes.
 *
 * must consist only of lowercase
 * ASCII characters, digits and '-'.
 *
 * If @value is non-%NULL then it is used as the new value for the
 * attribute.  If @value is %NULL then the attribute is unset. If
 * the @value #GVariant is floating, it is consumed.
 *
 * See also g_menu_item_set_attribute() for a more convenient way to do
 * the same.
 *
 * Since: 2.32
 */


/**
 * g_menu_item_set_detailed_action:
 * @menu_item: a #GMenuItem
 * @detailed_action: the "detailed" action string
 *
 * Sets the "action" and possibly the "target" attribute of @menu_item.
 *
 * If @detailed_action contains a double colon ("::") then it is used as
 * a separator between an action name and a target string.  In this
 * case, this call is equivalent to calling
 * g_menu_item_set_action_and_target() with the part before the "::" and
 * with a string-type #GVariant containing the part following the "::".
 *
 * If @detailed_action doesn't contain "::" then the action is set to
 * the given string (verbatim) and the target value is unset.
 *
 * See g_menu_item_set_action_and_target() or
 * g_menu_item_set_action_and_target_value() for more flexible (but
 * slightly less convenient) alternatives.
 *
 * See also g_menu_item_set_action_and_target_value() for a description of
 * the semantics of the action and target attributes.
 *
 * Since: 2.32
 */


/**
 * g_menu_item_set_label:
 * @menu_item: a #GMenuItem
 * @label: (allow-none): the label to set, or %NULL to unset
 *
 * Sets or unsets the "label" attribute of @menu_item.
 *
 * If @label is non-%NULL it is used as the label for the menu item.  If
 * it is %NULL then the label attribute is unset.
 *
 * Since: 2.32
 */


/**
 * g_menu_item_set_link:
 * @menu_item: a #GMenuItem
 * @link: type of link to establish or unset
 * @model: (allow-none): the #GMenuModel to link to (or %NULL to unset)
 *
 * Creates a link from @menu_item to @model if non-%NULL, or unsets it.
 *
 * Links are used to establish a relationship between a particular menu
 * item and another menu.  For example, %G_MENU_LINK_SUBMENU is used to
 * associate a submenu with a particular menu item, and %G_MENU_LINK_SECTION
 * is used to create a section. Other types of link can be used, but there
 * is no guarantee that clients will be able to make sense of them.
 * Link types are restricted to lowercase characters, numbers
 * and '-'. Furthermore, the names must begin with a lowercase character,
 * must not end with a '-', and must not contain consecutive dashes.
 *
 * Since: 2.32
 */


/**
 * g_menu_item_set_section:
 * @menu_item: a #GMenuItem
 * @section: (allow-none): a #GMenuModel, or %NULL
 *
 * Sets or unsets the "section" link of @menu_item to @section.
 *
 * The effect of having one menu appear as a section of another is
 * exactly as it sounds: the items from @section become a direct part of
 * the menu that @menu_item is added to.  See g_menu_item_new_section()
 * for more information about what it means for a menu item to be a
 * section.
 *
 * Since: 2.32
 */


/**
 * g_menu_item_set_submenu:
 * @menu_item: a #GMenuItem
 * @submenu: (allow-none): a #GMenuModel, or %NULL
 *
 * Sets or unsets the "submenu" link of @menu_item to @submenu.
 *
 * If @submenu is non-%NULL, it is linked to.  If it is %NULL then the
 * link is unset.
 *
 * The effect of having one menu appear as a submenu of another is
 * exactly as it sounds.
 *
 * Since: 2.32
 */


/**
 * g_menu_link_iter_get_name:
 * @iter: a #GMenuLinkIter
 *
 * Gets the name of the link at the current iterator position.
 *
 * The iterator is not advanced.
 *
 * Returns: the type of the link
 * Since: 2.32
 */


/**
 * g_menu_link_iter_get_next:
 * @iter: a #GMenuLinkIter
 * @out_link: (out) (allow-none) (transfer none): the name of the link
 * @value: (out) (allow-none) (transfer full): the linked #GMenuModel
 *
 * This function combines g_menu_link_iter_next() with
 * g_menu_link_iter_get_name() and g_menu_link_iter_get_value().
 *
 * First the iterator is advanced to the next (possibly first) link.
 * If that fails, then %FALSE is returned and there are no other effects.
 *
 * If successful, @out_link and @value are set to the name and #GMenuModel
 * of the link that has just been advanced to.  At this point,
 * g_menu_link_iter_get_name() and g_menu_link_iter_get_value() will return the
 * same values again.
 *
 * The value returned in @out_link remains valid for as long as the iterator
 * remains at the current position.  The value returned in @value must
 * be unreffed using g_object_unref() when it is no longer in use.
 *
 * Returns: %TRUE on success, or %FALSE if there is no additional link
 * Since: 2.32
 */


/**
 * g_menu_link_iter_get_value:
 * @iter: a #GMenuLinkIter
 *
 * Gets the linked #GMenuModel at the current iterator position.
 *
 * The iterator is not advanced.
 *
 * Returns: (transfer full): the #GMenuModel that is linked to
 * Since: 2.32
 */


/**
 * g_menu_link_iter_next:
 * @iter: a #GMenuLinkIter
 *
 * Attempts to advance the iterator to the next (possibly first)
 * link.
 *
 * %TRUE is returned on success, or %FALSE if there are no more links.
 *
 * You must call this function when you first acquire the iterator to
 * advance it to the first link (and determine if the first link exists
 * at all).
 *
 * Returns: %TRUE on success, or %FALSE when there are no more links
 * Since: 2.32
 */


/**
 * g_menu_model_get_item_attribute:
 * @model: a #GMenuModel
 * @item_index: the index of the item
 * @attribute: the attribute to query
 * @format_string: a #GVariant format string
 * @...: positional parameters, as per @format_string
 *
 * Queries item at position @item_index in @model for the attribute
 * specified by @attribute.
 *
 * If the attribute exists and matches the #GVariantType corresponding
 * to @format_string then @format_string is used to deconstruct the
 * value into the positional parameters and %TRUE is returned.
 *
 * If the attribute does not exist, or it does exist but has the wrong
 * type, then the positional parameters are ignored and %FALSE is
 * returned.
 *
 * Returns: %TRUE if the named attribute was found with the expected type
 * Since: 2.32
 */


/**
 * g_menu_model_get_item_attribute_value:
 * @model: a #GMenuModel
 * @item_index: the index of the item
 * @attribute: the attribute to query
 * @expected_type: (allow-none): the expected type of the attribute, or %NULL
 *
 * Queries the item at position @item_index in @model for the attribute
 * specified by @attribute.
 *
 * If @expected_type is non-%NULL then it specifies the expected type of
 * the attribute.  If it is %NULL then any type will be accepted.
 *
 * If the attribute exists and matches @expected_type (or if the
 * expected type is unspecified) then the value is returned.
 *
 * If the attribute does not exist, or does not match the expected type
 * then %NULL is returned.
 *
 * Returns: (transfer full): the value of the attribute
 * Since: 2.32
 */


/**
 * g_menu_model_get_item_link:
 * @model: a #GMenuModel
 * @item_index: the index of the item
 * @link: the link to query
 *
 * Queries the item at position @item_index in @model for the link
 * specified by @link.
 *
 * If the link exists, the linked #GMenuModel is returned.  If the link
 * does not exist, %NULL is returned.
 *
 * Returns: (transfer full): the linked #GMenuModel, or %NULL
 * Since: 2.32
 */


/**
 * g_menu_model_get_n_items:
 * @model: a #GMenuModel
 *
 * Query the number of items in @model.
 *
 * Returns: the number of items
 * Since: 2.32
 */


/**
 * g_menu_model_is_mutable:
 * @model: a #GMenuModel
 *
 * Queries if @model is mutable.
 *
 * An immutable #GMenuModel will never emit the #GMenuModel::items-changed
 * signal. Consumers of the model may make optimisations accordingly.
 *
 * Returns: %TRUE if the model is mutable (ie: "items-changed" may be emitted).
 * Since: 2.32
 */


/**
 * g_menu_model_items_changed:
 * @model: a #GMenuModel
 * @position: the position of the change
 * @removed: the number of items removed
 * @added: the number of items added
 *
 * Requests emission of the #GMenuModel::items-changed signal on @model.
 *
 * This function should never be called except by #GMenuModel
 * subclasses.  Any other calls to this function will very likely lead
 * to a violation of the interface of the model.
 *
 * The implementation should update its internal representation of the
 * menu before emitting the signal.  The implementation should further
 * expect to receive queries about the new state of the menu (and
 * particularly added menu items) while signal handlers are running.
 *
 * The implementation must dispatch this call directly from a mainloop
 * entry and not in response to calls -- particularly those from the
 * #GMenuModel API.  Said another way: the menu must not change while
 * user code is running without returning to the mainloop.
 *
 * Since: 2.32
 */


/**
 * g_menu_model_iterate_item_attributes:
 * @model: a #GMenuModel
 * @item_index: the index of the item
 *
 * Creates a #GMenuAttributeIter to iterate over the attributes of
 * the item at position @item_index in @model.
 *
 * You must free the iterator with g_object_unref() when you are done.
 *
 * Returns: (transfer full): a new #GMenuAttributeIter
 * Since: 2.32
 */


/**
 * g_menu_model_iterate_item_links:
 * @model: a #GMenuModel
 * @item_index: the index of the item
 *
 * Creates a #GMenuLinkIter to iterate over the links of the item at
 * position @item_index in @model.
 *
 * You must free the iterator with g_object_unref() when you are done.
 *
 * Returns: (transfer full): a new #GMenuLinkIter
 * Since: 2.32
 */


/**
 * g_menu_new:
 *
 * Creates a new #GMenu.
 *
 * The new menu has no items.
 *
 * Returns: a new #GMenu
 * Since: 2.32
 */


/**
 * g_menu_prepend:
 * @menu: a #GMenu
 * @label: (allow-none): the section label, or %NULL
 * @detailed_action: (allow-none): the detailed action string, or %NULL
 *
 * Convenience function for prepending a normal menu item to the start
 * of @menu.  Combine g_menu_new() and g_menu_insert_item() for a more
 * flexible alternative.
 *
 * Since: 2.32
 */


/**
 * g_menu_prepend_item:
 * @menu: a #GMenu
 * @item: a #GMenuItem to prepend
 *
 * Prepends @item to the start of @menu.
 *
 * See g_menu_insert_item() for more information.
 *
 * Since: 2.32
 */


/**
 * g_menu_prepend_section:
 * @menu: a #GMenu
 * @label: (allow-none): the section label, or %NULL
 * @section: a #GMenuModel with the items of the section
 *
 * Convenience function for prepending a section menu item to the start
 * of @menu.  Combine g_menu_item_new_section() and g_menu_insert_item() for
 * a more flexible alternative.
 *
 * Since: 2.32
 */


/**
 * g_menu_prepend_submenu:
 * @menu: a #GMenu
 * @label: (allow-none): the section label, or %NULL
 * @submenu: a #GMenuModel with the items of the submenu
 *
 * Convenience function for prepending a submenu menu item to the start
 * of @menu.  Combine g_menu_item_new_submenu() and g_menu_insert_item() for
 * a more flexible alternative.
 *
 * Since: 2.32
 */


/**
 * g_menu_remove:
 * @menu: a #GMenu
 * @position: the position of the item to remove
 *
 * Removes an item from the menu.
 *
 * @position gives the index of the item to remove.
 *
 * It is an error if position is not in range the range from 0 to one
 * less than the number of items in the menu.
 *
 * It is not possible to remove items by identity since items are added
 * to the menu simply by copying their links and attributes (ie:
 * identity of the item itself is not preserved).
 *
 * Since: 2.32
 */


/**
 * g_mount_can_eject:
 * @mount: a #GMount.
 *
 * Checks if @mount can be eject.
 *
 * Returns: %TRUE if the @mount can be ejected.
 */


/**
 * g_mount_can_unmount:
 * @mount: a #GMount.
 *
 * Checks if @mount can be mounted.
 *
 * Returns: %TRUE if the @mount can be unmounted.
 */


/**
 * g_mount_eject:
 * @mount: a #GMount.
 * @flags: flags affecting the unmount if required for eject
 * @cancellable: (allow-none): optional #GCancellable object, %NULL to ignore.
 * @callback: (allow-none): a #GAsyncReadyCallback, or %NULL.
 * @user_data: user data passed to @callback.
 *
 * Ejects a mount. This is an asynchronous operation, and is
 * finished by calling g_mount_eject_finish() with the @mount
 * and #GAsyncResult data returned in the @callback.
 *
 * Deprecated: 2.22: Use g_mount_eject_with_operation() instead.
 */


/**
 * g_mount_eject_finish:
 * @mount: a #GMount.
 * @result: a #GAsyncResult.
 * @error: a #GError location to store the error occurring, or %NULL to ignore.
 *
 * Finishes ejecting a mount. If any errors occurred during the operation,
 * @error will be set to contain the errors and %FALSE will be returned.
 *
 * Returns: %TRUE if the mount was successfully ejected. %FALSE otherwise.
 * Deprecated: 2.22: Use g_mount_eject_with_operation_finish() instead.
 */


/**
 * g_mount_eject_with_operation:
 * @mount: a #GMount.
 * @flags: flags affecting the unmount if required for eject
 * @mount_operation: (allow-none): a #GMountOperation or %NULL to avoid user interaction.
 * @cancellable: (allow-none): optional #GCancellable object, %NULL to ignore.
 * @callback: (allow-none): a #GAsyncReadyCallback, or %NULL.
 * @user_data: user data passed to @callback.
 *
 * Ejects a mount. This is an asynchronous operation, and is
 * finished by calling g_mount_eject_with_operation_finish() with the @mount
 * and #GAsyncResult data returned in the @callback.
 *
 * Since: 2.22
 */


/**
 * g_mount_eject_with_operation_finish:
 * @mount: a #GMount.
 * @result: a #GAsyncResult.
 * @error: a #GError location to store the error occurring, or %NULL to ignore.
 *
 * Finishes ejecting a mount. If any errors occurred during the operation,
 * @error will be set to contain the errors and %FALSE will be returned.
 *
 * Returns: %TRUE if the mount was successfully ejected. %FALSE otherwise.
 * Since: 2.22
 */


/**
 * g_mount_get_default_location:
 * @mount: a #GMount.
 *
 * Gets the default location of @mount. The default location of the given
 * @mount is a path that reflects the main entry point for the user (e.g.
 * the home directory, or the root of the volume).
 *
 * Returns: (transfer full): a #GFile. The returned object should be unreffed with g_object_unref() when no longer needed.
 */


/**
 * g_mount_get_drive:
 * @mount: a #GMount.
 *
 * Gets the drive for the @mount.
 *
 * This is a convenience method for getting the #GVolume and then
 * using that object to get the #GDrive.
 *
 * Returns: (transfer full): a #GDrive or %NULL if @mount is not associated with a volume or a drive. The returned object should be unreffed with g_object_unref() when no longer needed.
 */


/**
 * g_mount_get_icon:
 * @mount: a #GMount.
 *
 * Gets the icon for @mount.
 *
 * Returns: (transfer full): a #GIcon. The returned object should be unreffed with g_object_unref() when no longer needed.
 */


/**
 * g_mount_get_name:
 * @mount: a #GMount.
 *
 * Gets the name of @mount.
 *
 * Returns: the name for the given @mount. The returned string should be freed with g_free() when no longer needed.
 */


/**
 * g_mount_get_root:
 * @mount: a #GMount.
 *
 * Gets the root directory on @mount.
 *
 * Returns: (transfer full): a #GFile. The returned object should be unreffed with g_object_unref() when no longer needed.
 */


/**
 * g_mount_get_sort_key:
 * @mount: A #GMount.
 *
 * Gets the sort key for @mount, if any.
 *
 * Returns: Sorting key for @mount or %NULL if no such key is available.
 * Since: 2.32
 */


/**
 * g_mount_get_uuid:
 * @mount: a #GMount.
 *
 * Gets the UUID for the @mount. The reference is typically based on
 * the file system UUID for the mount in question and should be
 * considered an opaque string. Returns %NULL if there is no UUID
 * available.
 *
 * Returns: the UUID for @mount or %NULL if no UUID can be computed. The returned string should be freed with g_free() when no longer needed.
 */


/**
 * g_mount_get_volume:
 * @mount: a #GMount.
 *
 * Gets the volume for the @mount.
 *
 * Returns: (transfer full): a #GVolume or %NULL if @mount is not associated with a volume. The returned object should be unreffed with g_object_unref() when no longer needed.
 */


/**
 * g_mount_guess_content_type:
 * @mount: a #GMount
 * @force_rescan: Whether to force a rescan of the content. Otherwise a cached result will be used if available
 * @cancellable: (allow-none): optional #GCancellable object, %NULL to ignore
 * @callback: a #GAsyncReadyCallback
 * @user_data: user data passed to @callback
 *
 * Tries to guess the type of content stored on @mount. Returns one or
 * more textual identifiers of well-known content types (typically
 * prefixed with "x-content/"), e.g. x-content/image-dcf for camera
 * memory cards. See the <ulink url="http://www.freedesktop.org/wiki/Specifications/shared-mime-info-spec">shared-mime-info</ulink>
 * specification for more on x-content types.
 *
 * This is an asynchronous operation (see
 * g_mount_guess_content_type_sync() for the synchronous version), and
 * is finished by calling g_mount_guess_content_type_finish() with the
 * @mount and #GAsyncResult data returned in the @callback.
 *
 * Since: 2.18
 */


/**
 * g_mount_guess_content_type_finish:
 * @mount: a #GMount
 * @result: a #GAsyncResult
 * @error: a #GError location to store the error occurring, or %NULL to ignore
 *
 * Finishes guessing content types of @mount. If any errors occurred
 * during the operation, @error will be set to contain the errors and
 * %FALSE will be returned. In particular, you may get an
 * %G_IO_ERROR_NOT_SUPPORTED if the mount does not support content
 * guessing.
 *
 * Returns: (transfer full) (element-type utf8): a %NULL-terminated array of content types or %NULL on error. Caller should free this array with g_strfreev() when done with it.
 * Since: 2.18
 */


/**
 * g_mount_guess_content_type_sync:
 * @mount: a #GMount
 * @force_rescan: Whether to force a rescan of the content. Otherwise a cached result will be used if available
 * @cancellable: (allow-none): optional #GCancellable object, %NULL to ignore
 * @error: a #GError location to store the error occurring, or %NULL to ignore
 *
 * Tries to guess the type of content stored on @mount. Returns one or
 * more textual identifiers of well-known content types (typically
 * prefixed with "x-content/"), e.g. x-content/image-dcf for camera
 * memory cards. See the <ulink url="http://www.freedesktop.org/wiki/Specifications/shared-mime-info-spec">shared-mime-info</ulink>
 * specification for more on x-content types.
 *
 * This is an synchronous operation and as such may block doing IO;
 * see g_mount_guess_content_type() for the asynchronous version.
 *
 * Returns: (transfer full) (element-type utf8): a %NULL-terminated array of content types or %NULL on error. Caller should free this array with g_strfreev() when done with it.
 * Since: 2.18
 */


/**
 * g_mount_is_shadowed:
 * @mount: A #GMount.
 *
 * Determines if @mount is shadowed. Applications or libraries should
 * avoid displaying @mount in the user interface if it is shadowed.
 *
 * A mount is said to be shadowed if there exists one or more user
 * visible objects (currently #GMount objects) with a root that is
 * inside the root of @mount.
 *
 * One application of shadow mounts is when exposing a single file
 * system that is used to address several logical volumes. In this
 * situation, a #GVolumeMonitor implementation would create two
 * #GVolume objects (for example, one for the camera functionality of
 * the device and one for a SD card reader on the device) with
 * activation URIs <literal>gphoto2://[usb:001,002]/store1/</literal>
 * and <literal>gphoto2://[usb:001,002]/store2/</literal>. When the
 * underlying mount (with root
 * <literal>gphoto2://[usb:001,002]/</literal>) is mounted, said
 * #GVolumeMonitor implementation would create two #GMount objects
 * (each with their root matching the corresponding volume activation
 * root) that would shadow the original mount.
 *
 * The proxy monitor in GVfs 2.26 and later, automatically creates and
 * manage shadow mounts (and shadows the underlying mount) if the
 * activation root on a #GVolume is set.
 *
 * Returns: %TRUE if @mount is shadowed.
 * Since: 2.20
 */


/**
 * g_mount_operation_get_anonymous:
 * @op: a #GMountOperation.
 *
 * Check to see whether the mount operation is being used
 * for an anonymous user.
 *
 * Returns: %TRUE if mount operation is anonymous.
 */


/**
 * g_mount_operation_get_choice:
 * @op: a #GMountOperation.
 *
 * Gets a choice from the mount operation.
 *
 * Returns: an integer containing an index of the user's choice from the choice's list, or %0.
 */


/**
 * g_mount_operation_get_domain:
 * @op: a #GMountOperation.
 *
 * Gets the domain of the mount operation.
 *
 * Returns: a string set to the domain.
 */


/**
 * g_mount_operation_get_password:
 * @op: a #GMountOperation.
 *
 * Gets a password from the mount operation.
 *
 * Returns: a string containing the password within @op.
 */


/**
 * g_mount_operation_get_password_save:
 * @op: a #GMountOperation.
 *
 * Gets the state of saving passwords for the mount operation.
 *
 * Returns: a #GPasswordSave flag.
 */


/**
 * g_mount_operation_get_username:
 * @op: a #GMountOperation.
 *
 * Get the user name from the mount operation.
 *
 * Returns: a string containing the user name.
 */


/**
 * g_mount_operation_new:
 *
 * Creates a new mount operation.
 *
 * Returns: a #GMountOperation.
 */


/**
 * g_mount_operation_reply:
 * @op: a #GMountOperation
 * @result: a #GMountOperationResult
 *
 * Emits the #GMountOperation::reply signal.
 */


/**
 * g_mount_operation_set_anonymous:
 * @op: a #GMountOperation.
 * @anonymous: boolean value.
 *
 * Sets the mount operation to use an anonymous user if @anonymous is %TRUE.
 */


/**
 * g_mount_operation_set_choice:
 * @op: a #GMountOperation.
 * @choice: an integer.
 *
 * Sets a default choice for the mount operation.
 */


/**
 * g_mount_operation_set_domain:
 * @op: a #GMountOperation.
 * @domain: the domain to set.
 *
 * Sets the mount operation's domain.
 */


/**
 * g_mount_operation_set_password:
 * @op: a #GMountOperation.
 * @password: password to set.
 *
 * Sets the mount operation's password to @password.
 */


/**
 * g_mount_operation_set_password_save:
 * @op: a #GMountOperation.
 * @save: a set of #GPasswordSave flags.
 *
 * Sets the state of saving passwords for the mount operation.
 */


/**
 * g_mount_operation_set_username:
 * @op: a #GMountOperation.
 * @username: input username.
 *
 * Sets the user name within @op to @username.
 */


/**
 * g_mount_remount:
 * @mount: a #GMount.
 * @flags: flags affecting the operation
 * @mount_operation: (allow-none): a #GMountOperation or %NULL to avoid user interaction.
 * @cancellable: (allow-none): optional #GCancellable object, %NULL to ignore.
 * @callback: (allow-none): a #GAsyncReadyCallback, or %NULL.
 * @user_data: user data passed to @callback.
 *
 * Remounts a mount. This is an asynchronous operation, and is
 * finished by calling g_mount_remount_finish() with the @mount
 * and #GAsyncResults data returned in the @callback.
 *
 * Remounting is useful when some setting affecting the operation
 * of the volume has been changed, as these may need a remount to
 * take affect. While this is semantically equivalent with unmounting
 * and then remounting not all backends might need to actually be
 * unmounted.
 */


/**
 * g_mount_remount_finish:
 * @mount: a #GMount.
 * @result: a #GAsyncResult.
 * @error: a #GError location to store the error occurring, or %NULL to ignore.
 *
 * Finishes remounting a mount. If any errors occurred during the operation,
 * @error will be set to contain the errors and %FALSE will be returned.
 *
 * Returns: %TRUE if the mount was successfully remounted. %FALSE otherwise.
 */


/**
 * g_mount_shadow:
 * @mount: A #GMount.
 *
 * Increments the shadow count on @mount. Usually used by
 * #GVolumeMonitor implementations when creating a shadow mount for
 * @mount, see g_mount_is_shadowed() for more information. The caller
 * will need to emit the #GMount::changed signal on @mount manually.
 *
 * Since: 2.20
 */


/**
 * g_mount_unmount:
 * @mount: a #GMount.
 * @flags: flags affecting the operation
 * @cancellable: (allow-none): optional #GCancellable object, %NULL to ignore.
 * @callback: (allow-none): a #GAsyncReadyCallback, or %NULL.
 * @user_data: user data passed to @callback.
 *
 * Unmounts a mount. This is an asynchronous operation, and is
 * finished by calling g_mount_unmount_finish() with the @mount
 * and #GAsyncResult data returned in the @callback.
 *
 * Deprecated: 2.22: Use g_mount_unmount_with_operation() instead.
 */


/**
 * g_mount_unmount_finish:
 * @mount: a #GMount.
 * @result: a #GAsyncResult.
 * @error: a #GError location to store the error occurring, or %NULL to ignore.
 *
 * Finishes unmounting a mount. If any errors occurred during the operation,
 * @error will be set to contain the errors and %FALSE will be returned.
 *
 * Returns: %TRUE if the mount was successfully unmounted. %FALSE otherwise.
 * Deprecated: 2.22: Use g_mount_unmount_with_operation_finish() instead.
 */


/**
 * g_mount_unmount_with_operation:
 * @mount: a #GMount.
 * @flags: flags affecting the operation
 * @mount_operation: (allow-none): a #GMountOperation or %NULL to avoid user interaction.
 * @cancellable: (allow-none): optional #GCancellable object, %NULL to ignore.
 * @callback: (allow-none): a #GAsyncReadyCallback, or %NULL.
 * @user_data: user data passed to @callback.
 *
 * Unmounts a mount. This is an asynchronous operation, and is
 * finished by calling g_mount_unmount_with_operation_finish() with the @mount
 * and #GAsyncResult data returned in the @callback.
 *
 * Since: 2.22
 */


/**
 * g_mount_unmount_with_operation_finish:
 * @mount: a #GMount.
 * @result: a #GAsyncResult.
 * @error: a #GError location to store the error occurring, or %NULL to ignore.
 *
 * Finishes unmounting a mount. If any errors occurred during the operation,
 * @error will be set to contain the errors and %FALSE will be returned.
 *
 * Returns: %TRUE if the mount was successfully unmounted. %FALSE otherwise.
 * Since: 2.22
 */


/**
 * g_mount_unshadow:
 * @mount: A #GMount.
 *
 * Decrements the shadow count on @mount. Usually used by
 * #GVolumeMonitor implementations when destroying a shadow mount for
 * @mount, see g_mount_is_shadowed() for more information. The caller
 * will need to emit the #GMount::changed signal on @mount manually.
 *
 * Since: 2.20
 */


/**
 * g_network_address_get_hostname:
 * @addr: a #GNetworkAddress
 *
 * Gets @addr's hostname. This might be either UTF-8 or ASCII-encoded,
 * depending on what @addr was created with.
 *
 * Returns: @addr's hostname
 * Since: 2.22
 */


/**
 * g_network_address_get_port:
 * @addr: a #GNetworkAddress
 *
 * Gets @addr's port number
 *
 * Returns: @addr's port (which may be 0)
 * Since: 2.22
 */


/**
 * g_network_address_get_scheme:
 * @addr: a #GNetworkAddress
 *
 * Gets @addr's scheme
 *
 * Returns: @addr's scheme (%NULL if not built from URI)
 * Since: 2.26
 */


/**
 * g_network_address_new:
 * @hostname: the hostname
 * @port: the port
 *
 * Creates a new #GSocketConnectable for connecting to the given
 * @hostname and @port.
 *
 * Returns: (transfer full) (type GNetworkAddress): the new #GNetworkAddress
 * Since: 2.22
 */


/**
 * g_network_address_parse:
 * @host_and_port: the hostname and optionally a port
 * @default_port: the default port if not in @host_and_port
 * @error: a pointer to a #GError, or %NULL
 *
 * Creates a new #GSocketConnectable for connecting to the given
 * @hostname and @port. May fail and return %NULL in case
 * parsing @host_and_port fails.
 *
 * @host_and_port may be in any of a number of recognised formats; an IPv6
 * address, an IPv4 address, or a domain name (in which case a DNS
 * lookup is performed). Quoting with [] is supported for all address
 * types. A port override may be specified in the usual way with a
 * colon.
 *
 * If no port is specified in @host_and_port then @default_port will be
 * used as the port number to connect to.
 *
 * In general, @host_and_port is expected to be provided by the user
 * (allowing them to give the hostname, and a port overide if necessary)
 * and @default_port is expected to be provided by the application.
 *
 * (The port component of @host_and_port can also be specified as a
 * service name rather than as a numeric port, but this functionality
 * is deprecated, because it depends on the contents of /etc/services,
 * which is generally quite sparse on platforms other than Linux.)
 *
 * Returns: (transfer full): the new #GNetworkAddress, or %NULL on error
 * Since: 2.22
 */


/**
 * g_network_address_parse_uri:
 * @uri: the hostname and optionally a port
 * @default_port: The default port if none is found in the URI
 * @error: a pointer to a #GError, or %NULL
 *
 * Creates a new #GSocketConnectable for connecting to the given
 * @uri. May fail and return %NULL in case parsing @uri fails.
 *
 * Using this rather than g_network_address_new() or
 * g_network_address_parse() allows #GSocketClient to determine
 * when to use application-specific proxy protocols.
 *
 * Returns: (transfer full): the new #GNetworkAddress, or %NULL on error
 * Since: 2.26
 */


/**
 * g_network_monitor_base_add_network:
 * @monitor: the #GNetworkMonitorBase
 * @network: a #GInetAddressMask
 *
 * Adds @network to @monitor's list of available networks.
 *
 * Since: 2.32
 */


/**
 * g_network_monitor_base_remove_network:
 * @monitor: the #GNetworkMonitorBase
 * @network: a #GInetAddressMask
 *
 * Removes @network from @monitor's list of available networks.
 *
 * Since: 2.32
 */


/**
 * g_network_monitor_base_set_networks:
 * @monitor: the #GNetworkMonitorBase
 * @networks: (array length=length): an array of #GInetAddressMask
 * @length: length of @networks
 *
 * Drops @monitor's current list of available networks and replaces
 * it with @networks.
 */


/**
 * g_network_monitor_can_reach:
 * @monitor: a #GNetworkMonitor
 * @connectable: a #GSocketConnectable
 * @cancellable: (allow-none): a #GCancellable, or %NULL
 * @error: return location for a #GError, or %NULL
 *
 * Attempts to determine whether or not the host pointed to by
 * @connectable can be reached, without actually trying to connect to
 * it.
 *
 * This may return %TRUE even when #GNetworkMonitor:network-available
 * is %FALSE, if, for example, @monitor can determine that
 * @connectable refers to a host on a local network.
 *
 * If @monitor believes that an attempt to connect to @connectable
 * will succeed, it will return %TRUE. Otherwise, it will return
 * %FALSE and set @error to an appropriate error (such as
 * %G_IO_ERROR_HOST_UNREACHABLE).
 *
 * Note that although this does not attempt to connect to
 * @connectable, it may still block for a brief period of time (eg,
 * trying to do multicast DNS on the local network), so if you do not
 * want to block, you should use g_network_monitor_can_reach_async().
 *
 * Returns: %TRUE if @connectable is reachable, %FALSE if not.
 * Since: 2.32
 */


/**
 * g_network_monitor_can_reach_async:
 * @monitor: a #GNetworkMonitor
 * @connectable: a #GSocketConnectable
 * @cancellable: (allow-none): a #GCancellable, or %NULL
 * @callback: (scope async): a #GAsyncReadyCallback to call when the request is satisfied
 * @user_data: (closure): the data to pass to callback function
 *
 * Asynchronously attempts to determine whether or not the host
 * pointed to by @connectable can be reached, without actually
 * trying to connect to it.
 *
 * For more details, see g_network_monitor_can_reach().
 *
 * When the operation is finished, @callback will be called.
 * You can then call g_network_monitor_can_reach_finish()
 * to get the result of the operation.
 */


/**
 * g_network_monitor_can_reach_finish:
 * @monitor: a #GNetworkMonitor
 * @result: a #GAsyncResult
 * @error: return location for errors, or %NULL
 *
 * Finishes an async network connectivity test.
 * See g_network_monitor_can_reach_async().
 *
 * Returns: %TRUE if network is reachable, %FALSE if not.
 */


/**
 * g_network_monitor_get_default:
 *
 * Gets the default #GNetworkMonitor for the system.
 *
 * Returns: (transfer none): a #GNetworkMonitor
 * Since: 2.32
 */


/**
 * g_network_monitor_get_network_available:
 * @monitor: the #GNetworkMonitor
 *
 * Checks if the network is available. "Available" here means that the
 * system has a default route available for at least one of IPv4 or
 * IPv6. It does not necessarily imply that the public Internet is
 * reachable. See #GNetworkMonitor:network-available for more details.
 *
 * Returns: whether the network is available
 * Since: 2.32
 */


/**
 * g_network_service_get_domain:
 * @srv: a #GNetworkService
 *
 * Gets the domain that @srv serves. This might be either UTF-8 or
 * ASCII-encoded, depending on what @srv was created with.
 *
 * Returns: @srv's domain name
 * Since: 2.22
 */


/**
 * g_network_service_get_protocol:
 * @srv: a #GNetworkService
 *
 * Gets @srv's protocol name (eg, "tcp").
 *
 * Returns: @srv's protocol name
 * Since: 2.22
 */


/**
 * g_network_service_get_scheme:
 * @srv: a #GNetworkService
 *
 * Get's the URI scheme used to resolve proxies. By default, the service name
 * is used as scheme.
 *
 * Returns: @srv's scheme name
 * Since: 2.26
 */


/**
 * g_network_service_get_service:
 * @srv: a #GNetworkService
 *
 * Gets @srv's service name (eg, "ldap").
 *
 * Returns: @srv's service name
 * Since: 2.22
 */


/**
 * g_network_service_new:
 * @service: the service type to look up (eg, "ldap")
 * @protocol: the networking protocol to use for @service (eg, "tcp")
 * @domain: the DNS domain to look up the service in
 *
 * Creates a new #GNetworkService representing the given @service,
 * @protocol, and @domain. This will initially be unresolved; use the
 * #GSocketConnectable interface to resolve it.
 *
 * Returns: (transfer full) (type GNetworkService): a new #GNetworkService
 * Since: 2.22
 */


/**
 * g_network_service_set_scheme:
 * @srv: a #GNetworkService
 * @scheme: a URI scheme
 *
 * Set's the URI scheme used to resolve proxies. By default, the service name
 * is used as scheme.
 *
 * Since: 2.26
 */


/**
 * g_null_settings_backend_new:
 *
 * Creates a readonly #GSettingsBackend.
 *
 * This backend does not allow changes to settings, so all settings
 * will always have their default values.
 *
 * Returns: (transfer full): a newly created #GSettingsBackend
 * Since: 2.28
 */


/**
 * g_output_stream_clear_pending:
 * @stream: output stream
 *
 * Clears the pending flag on @stream.
 */


/**
 * g_output_stream_close:
 * @stream: A #GOutputStream.
 * @cancellable: (allow-none): optional cancellable object
 * @error: location to store the error occurring, or %NULL to ignore
 *
 * Closes the stream, releasing resources related to it.
 *
 * Once the stream is closed, all other operations will return %G_IO_ERROR_CLOSED.
 * Closing a stream multiple times will not return an error.
 *
 * Closing a stream will automatically flush any outstanding buffers in the
 * stream.
 *
 * Streams will be automatically closed when the last reference
 * is dropped, but you might want to call this function to make sure
 * resources are released as early as possible.
 *
 * Some streams might keep the backing store of the stream (e.g. a file descriptor)
 * open after the stream is closed. See the documentation for the individual
 * stream for details.
 *
 * On failure the first error that happened will be reported, but the close
 * operation will finish as much as possible. A stream that failed to
 * close will still return %G_IO_ERROR_CLOSED for all operations. Still, it
 * is important to check and report the error to the user, otherwise
 * there might be a loss of data as all data might not be written.
 *
 * If @cancellable is not %NULL, then the operation can be cancelled by
 * triggering the cancellable object from another thread. If the operation
 * was cancelled, the error %G_IO_ERROR_CANCELLED will be returned.
 * Cancelling a close will still leave the stream closed, but there some streams
 * can use a faster close that doesn't block to e.g. check errors. On
 * cancellation (as with any error) there is no guarantee that all written
 * data will reach the target.
 *
 * Returns: %TRUE on success, %FALSE on failure
 */


/**
 * g_output_stream_close_async:
 * @stream: A #GOutputStream.
 * @io_priority: the io priority of the request.
 * @cancellable: (allow-none): optional cancellable object
 * @callback: (scope async): callback to call when the request is satisfied
 * @user_data: (closure): the data to pass to callback function
 *
 * Requests an asynchronous close of the stream, releasing resources
 * related to it. When the operation is finished @callback will be
 * called. You can then call g_output_stream_close_finish() to get
 * the result of the operation.
 *
 * For behaviour details see g_output_stream_close().
 *
 * The asyncronous methods have a default fallback that uses threads
 * to implement asynchronicity, so they are optional for inheriting
 * classes. However, if you override one you must override all.
 */


/**
 * g_output_stream_close_finish:
 * @stream: a #GOutputStream.
 * @result: a #GAsyncResult.
 * @error: a #GError location to store the error occurring, or %NULL to ignore.
 *
 * Closes an output stream.
 *
 * Returns: %TRUE if stream was successfully closed, %FALSE otherwise.
 */


/**
 * g_output_stream_flush:
 * @stream: a #GOutputStream.
 * @cancellable: (allow-none): optional cancellable object
 * @error: location to store the error occurring, or %NULL to ignore
 *
 * Forces a write of all user-space buffered data for the given
 * @stream. Will block during the operation. Closing the stream will
 * implicitly cause a flush.
 *
 * This function is optional for inherited classes.
 *
 * If @cancellable is not %NULL, then the operation can be cancelled by
 * triggering the cancellable object from another thread. If the operation
 * was cancelled, the error %G_IO_ERROR_CANCELLED will be returned.
 *
 * Returns: %TRUE on success, %FALSE on error
 */


/**
 * g_output_stream_flush_async:
 * @stream: a #GOutputStream.
 * @io_priority: the io priority of the request.
 * @cancellable: (allow-none): optional #GCancellable object, %NULL to ignore.
 * @callback: (scope async): a #GAsyncReadyCallback to call when the request is satisfied
 * @user_data: (closure): the data to pass to callback function
 *
 * Forces an asynchronous write of all user-space buffered data for
 * the given @stream.
 * For behaviour details see g_output_stream_flush().
 *
 * When the operation is finished @callback will be
 * called. You can then call g_output_stream_flush_finish() to get the
 * result of the operation.
 */


/**
 * g_output_stream_flush_finish:
 * @stream: a #GOutputStream.
 * @result: a GAsyncResult.
 * @error: a #GError location to store the error occurring, or %NULL to ignore.
 *
 * Finishes flushing an output stream.
 *
 * Returns: %TRUE if flush operation succeeded, %FALSE otherwise.
 */


/**
 * g_output_stream_has_pending:
 * @stream: a #GOutputStream.
 *
 * Checks if an ouput stream has pending actions.
 *
 * Returns: %TRUE if @stream has pending actions.
 */


/**
 * g_output_stream_is_closed:
 * @stream: a #GOutputStream.
 *
 * Checks if an output stream has already been closed.
 *
 * Returns: %TRUE if @stream is closed. %FALSE otherwise.
 */


/**
 * g_output_stream_is_closing:
 * @stream: a #GOutputStream.
 *
 * Checks if an output stream is being closed. This can be
 * used inside e.g. a flush implementation to see if the
 * flush (or other i/o operation) is called from within
 * the closing operation.
 *
 * Returns: %TRUE if @stream is being closed. %FALSE otherwise.
 * Since: 2.24
 */


/**
 * g_output_stream_set_pending:
 * @stream: a #GOutputStream.
 * @error: a #GError location to store the error occurring, or %NULL to ignore.
 *
 * Sets @stream to have actions pending. If the pending flag is
 * already set or @stream is closed, it will return %FALSE and set
 * @error.
 *
 * Returns: %TRUE if pending was previously unset and is now set.
 */


/**
 * g_output_stream_splice:
 * @stream: a #GOutputStream.
 * @source: a #GInputStream.
 * @flags: a set of #GOutputStreamSpliceFlags.
 * @cancellable: (allow-none): optional #GCancellable object, %NULL to ignore.
 * @error: a #GError location to store the error occurring, or %NULL to ignore.
 *
 * Splices an input stream into an output stream.
 *
 * Returns: a #gssize containing the size of the data spliced, or -1 if an error occurred. Note that if the number of bytes spliced is greater than %G_MAXSSIZE, then that will be returned, and there is no way to determine the actual number of bytes spliced.
 */


/**
 * g_output_stream_splice_async:
 * @stream: a #GOutputStream.
 * @source: a #GInputStream.
 * @flags: a set of #GOutputStreamSpliceFlags.
 * @io_priority: the io priority of the request.
 * @cancellable: (allow-none): optional #GCancellable object, %NULL to ignore.
 * @callback: (scope async): a #GAsyncReadyCallback.
 * @user_data: (closure): user data passed to @callback.
 *
 * Splices a stream asynchronously.
 * When the operation is finished @callback will be called.
 * You can then call g_output_stream_splice_finish() to get the
 * result of the operation.
 *
 * For the synchronous, blocking version of this function, see
 * g_output_stream_splice().
 */


/**
 * g_output_stream_splice_finish:
 * @stream: a #GOutputStream.
 * @result: a #GAsyncResult.
 * @error: a #GError location to store the error occurring, or %NULL to ignore.
 *
 * Finishes an asynchronous stream splice operation.
 *
 * Returns: a #gssize of the number of bytes spliced. Note that if the number of bytes spliced is greater than %G_MAXSSIZE, then that will be returned, and there is no way to determine the actual number of bytes spliced.
 */


/**
 * g_output_stream_write:
 * @stream: a #GOutputStream.
 * @buffer: (array length=count) (element-type guint8): the buffer containing the data to write.
 * @count: the number of bytes to write
 * @cancellable: (allow-none): optional cancellable object
 * @error: location to store the error occurring, or %NULL to ignore
 *
 * Tries to write @count bytes from @buffer into the stream. Will block
 * during the operation.
 *
 * If count is 0, returns 0 and does nothing. A value of @count
 * larger than %G_MAXSSIZE will cause a %G_IO_ERROR_INVALID_ARGUMENT error.
 *
 * On success, the number of bytes written to the stream is returned.
 * It is not an error if this is not the same as the requested size, as it
 * can happen e.g. on a partial I/O error, or if there is not enough
 * storage in the stream. All writes block until at least one byte
 * is written or an error occurs; 0 is never returned (unless
 * @count is 0).
 *
 * If @cancellable is not %NULL, then the operation can be cancelled by
 * triggering the cancellable object from another thread. If the operation
 * was cancelled, the error %G_IO_ERROR_CANCELLED will be returned. If an
 * operation was partially finished when the operation was cancelled the
 * partial result will be returned, without an error.
 *
 * On error -1 is returned and @error is set accordingly.
 *
 * Virtual: write_fn
 * Returns: Number of bytes written, or -1 on error
 */


/**
 * g_output_stream_write_all:
 * @stream: a #GOutputStream.
 * @buffer: (array length=count) (element-type guint8): the buffer containing the data to write.
 * @count: the number of bytes to write
 * @bytes_written: (out): location to store the number of bytes that was written to the stream
 * @cancellable: (allow-none): optional #GCancellable object, %NULL to ignore.
 * @error: location to store the error occurring, or %NULL to ignore
 *
 * Tries to write @count bytes from @buffer into the stream. Will block
 * during the operation.
 *
 * This function is similar to g_output_stream_write(), except it tries to
 * write as many bytes as requested, only stopping on an error.
 *
 * On a successful write of @count bytes, %TRUE is returned, and @bytes_written
 * is set to @count.
 *
 * If there is an error during the operation %FALSE is returned and @error
 * is set to indicate the error status, @bytes_written is updated to contain
 * the number of bytes written into the stream before the error occurred.
 *
 * Returns: %TRUE on success, %FALSE if there was an error
 */


/**
 * g_output_stream_write_async:
 * @stream: A #GOutputStream.
 * @buffer: (array length=count) (element-type guint8): the buffer containing the data to write.
 * @count: the number of bytes to write
 * @io_priority: the io priority of the request.
 * @cancellable: (allow-none): optional #GCancellable object, %NULL to ignore.
 * @callback: (scope async): callback to call when the request is satisfied
 * @user_data: (closure): the data to pass to callback function
 *
 * Request an asynchronous write of @count bytes from @buffer into
 * the stream. When the operation is finished @callback will be called.
 * You can then call g_output_stream_write_finish() to get the result of the
 * operation.
 *
 * During an async request no other sync and async calls are allowed,
 * and will result in %G_IO_ERROR_PENDING errors.
 *
 * A value of @count larger than %G_MAXSSIZE will cause a
 * %G_IO_ERROR_INVALID_ARGUMENT error.
 *
 * On success, the number of bytes written will be passed to the
 * @callback. It is not an error if this is not the same as the
 * requested size, as it can happen e.g. on a partial I/O error,
 * but generally we try to write as many bytes as requested.
 *
 * You are guaranteed that this method will never fail with
 * %G_IO_ERROR_WOULD_BLOCK - if @stream can't accept more data, the
 * method will just wait until this changes.
 *
 * Any outstanding I/O request with higher priority (lower numerical
 * value) will be executed before an outstanding request with lower
 * priority. Default priority is %G_PRIORITY_DEFAULT.
 *
 * The asyncronous methods have a default fallback that uses threads
 * to implement asynchronicity, so they are optional for inheriting
 * classes. However, if you override one you must override all.
 *
 * For the synchronous, blocking version of this function, see
 * g_output_stream_write().
 */


/**
 * g_output_stream_write_finish:
 * @stream: a #GOutputStream.
 * @result: a #GAsyncResult.
 * @error: a #GError location to store the error occurring, or %NULL to ignore.
 *
 * Finishes a stream write operation.
 *
 * Returns: a #gssize containing the number of bytes written to the stream.
 */


/**
 * g_permission_acquire:
 * @permission: a #GPermission instance
 * @cancellable: (allow-none): a #GCancellable, or %NULL
 * @error: a pointer to a %NULL #GError, or %NULL
 *
 * Attempts to acquire the permission represented by @permission.
 *
 * The precise method by which this happens depends on the permission
 * and the underlying authentication mechanism.  A simple example is
 * that a dialog may appear asking the user to enter their password.
 *
 * You should check with g_permission_get_can_acquire() before calling
 * this function.
 *
 * If the permission is acquired then %TRUE is returned.  Otherwise,
 * %FALSE is returned and @error is set appropriately.
 *
 * This call is blocking, likely for a very long time (in the case that
 * user interaction is required).  See g_permission_acquire_async() for
 * the non-blocking version.
 *
 * Returns: %TRUE if the permission was successfully acquired
 * Since: 2.26
 */


/**
 * g_permission_acquire_async:
 * @permission: a #GPermission instance
 * @cancellable: (allow-none): a #GCancellable, or %NULL
 * @callback: the #GAsyncReadyCallback to call when done
 * @user_data: the user data to pass to @callback
 *
 * Attempts to acquire the permission represented by @permission.
 *
 * This is the first half of the asynchronous version of
 * g_permission_acquire().
 *
 * Since: 2.26
 */


/**
 * g_permission_acquire_finish:
 * @permission: a #GPermission instance
 * @result: the #GAsyncResult given to the #GAsyncReadyCallback
 * @error: a pointer to a %NULL #GError, or %NULL
 *
 * Collects the result of attempting to acquire the permission
 * represented by @permission.
 *
 * This is the second half of the asynchronous version of
 * g_permission_acquire().
 *
 * Returns: %TRUE if the permission was successfully acquired
 * Since: 2.26
 */


/**
 * g_permission_get_allowed:
 * @permission: a #GPermission instance
 *
 * Gets the value of the 'allowed' property.  This property is %TRUE if
 * the caller currently has permission to perform the action that
 * @permission represents the permission to perform.
 *
 * Returns: the value of the 'allowed' property
 * Since: 2.26
 */


/**
 * g_permission_get_can_acquire:
 * @permission: a #GPermission instance
 *
 * Gets the value of the 'can-acquire' property.  This property is %TRUE
 * if it is generally possible to acquire the permission by calling
 * g_permission_acquire().
 *
 * Returns: the value of the 'can-acquire' property
 * Since: 2.26
 */


/**
 * g_permission_get_can_release:
 * @permission: a #GPermission instance
 *
 * Gets the value of the 'can-release' property.  This property is %TRUE
 * if it is generally possible to release the permission by calling
 * g_permission_release().
 *
 * Returns: the value of the 'can-release' property
 * Since: 2.26
 */


/**
 * g_permission_impl_update:
 * @permission: a #GPermission instance
 * @allowed: the new value for the 'allowed' property
 * @can_acquire: the new value for the 'can-acquire' property
 * @can_release: the new value for the 'can-release' property
 *
 * This function is called by the #GPermission implementation to update
 * the properties of the permission.  You should never call this
 * function except from a #GPermission implementation.
 *
 * GObject notify signals are generated, as appropriate.
 *
 * Since: 2.26
 */


/**
 * g_permission_release:
 * @permission: a #GPermission instance
 * @cancellable: (allow-none): a #GCancellable, or %NULL
 * @error: a pointer to a %NULL #GError, or %NULL
 *
 * Attempts to release the permission represented by @permission.
 *
 * The precise method by which this happens depends on the permission
 * and the underlying authentication mechanism.  In most cases the
 * permission will be dropped immediately without further action.
 *
 * You should check with g_permission_get_can_release() before calling
 * this function.
 *
 * If the permission is released then %TRUE is returned.  Otherwise,
 * %FALSE is returned and @error is set appropriately.
 *
 * This call is blocking, likely for a very long time (in the case that
 * user interaction is required).  See g_permission_release_async() for
 * the non-blocking version.
 *
 * Returns: %TRUE if the permission was successfully released
 * Since: 2.26
 */


/**
 * g_permission_release_async:
 * @permission: a #GPermission instance
 * @cancellable: (allow-none): a #GCancellable, or %NULL
 * @callback: the #GAsyncReadyCallback to call when done
 * @user_data: the user data to pass to @callback
 *
 * Attempts to release the permission represented by @permission.
 *
 * This is the first half of the asynchronous version of
 * g_permission_release().
 *
 * Since: 2.26
 */


/**
 * g_permission_release_finish:
 * @permission: a #GPermission instance
 * @result: the #GAsyncResult given to the #GAsyncReadyCallback
 * @error: a pointer to a %NULL #GError, or %NULL
 *
 * Collects the result of attempting to release the permission
 * represented by @permission.
 *
 * This is the second half of the asynchronous version of
 * g_permission_release().
 *
 * Returns: %TRUE if the permission was successfully released
 * Since: 2.26
 */


/**
 * g_poll_file_monitor_new:
 * @file: a #GFile.
 *
 * Polls @file for changes.
 *
 * Returns: a new #GFileMonitor for the given #GFile.
 */


/**
 * g_pollable_input_stream_can_poll:
 * @stream: a #GPollableInputStream.
 *
 * Checks if @stream is actually pollable. Some classes may implement
 * #GPollableInputStream but have only certain instances of that class
 * be pollable. If this method returns %FALSE, then the behavior of
 * other #GPollableInputStream methods is undefined.
 *
 * For any given stream, the value returned by this method is constant;
 * a stream cannot switch from pollable to non-pollable or vice versa.
 *
 * Returns: %TRUE if @stream is pollable, %FALSE if not.
 * Since: 2.28
 */


/**
 * g_pollable_input_stream_create_source:
 * @stream: a #GPollableInputStream.
 * @cancellable: (allow-none): a #GCancellable, or %NULL
 *
 * Creates a #GSource that triggers when @stream can be read, or
 * @cancellable is triggered or an error occurs. The callback on the
 * source is of the #GPollableSourceFunc type.
 *
 * As with g_pollable_input_stream_is_readable(), it is possible that
 * the stream may not actually be readable even after the source
 * triggers, so you should use g_pollable_input_stream_read_nonblocking()
 * rather than g_input_stream_read() from the callback.
 *
 * Returns: (transfer full): a new #GSource
 * Since: 2.28
 */


/**
 * g_pollable_input_stream_is_readable:
 * @stream: a #GPollableInputStream.
 *
 * Checks if @stream can be read.
 *
 * Note that some stream types may not be able to implement this 100%
 * reliably, and it is possible that a call to g_input_stream_read()
 * after this returns %TRUE would still block. To guarantee
 * non-blocking behavior, you should always use
 * g_pollable_input_stream_read_nonblocking(), which will return a
 * %G_IO_ERROR_WOULD_BLOCK error rather than blocking.
 *
 * Returns: %TRUE if @stream is readable, %FALSE if not. If an error has occurred on @stream, this will result in g_pollable_input_stream_is_readable() returning %TRUE, and the next attempt to read will return the error.
 * Since: 2.28
 */


/**
 * g_pollable_input_stream_read_nonblocking:
 * @stream: a #GPollableInputStream
 * @buffer: a buffer to read data into (which should be at least @count bytes long).
 * @count: the number of bytes you want to read
 * @cancellable: (allow-none): a #GCancellable, or %NULL
 * @error: #GError for error reporting, or %NULL to ignore.
 *
 * Attempts to read up to @count bytes from @stream into @buffer, as
 * with g_input_stream_read(). If @stream is not currently readable,
 * this will immediately return %G_IO_ERROR_WOULD_BLOCK, and you can
 * use g_pollable_input_stream_create_source() to create a #GSource
 * that will be triggered when @stream is readable.
 *
 * Note that since this method never blocks, you cannot actually
 * use @cancellable to cancel it. However, it will return an error
 * if @cancellable has already been cancelled when you call, which
 * may happen if you call this method after a source triggers due
 * to having been cancelled.
 *
 * Virtual: read_nonblocking
 * Returns: the number of bytes read, or -1 on error (including %G_IO_ERROR_WOULD_BLOCK).
 */


/**
 * g_pollable_output_stream_can_poll:
 * @stream: a #GPollableOutputStream.
 *
 * Checks if @stream is actually pollable. Some classes may implement
 * #GPollableOutputStream but have only certain instances of that
 * class be pollable. If this method returns %FALSE, then the behavior
 * of other #GPollableOutputStream methods is undefined.
 *
 * For any given stream, the value returned by this method is constant;
 * a stream cannot switch from pollable to non-pollable or vice versa.
 *
 * Returns: %TRUE if @stream is pollable, %FALSE if not.
 * Since: 2.28
 */


/**
 * g_pollable_output_stream_create_source:
 * @stream: a #GPollableOutputStream.
 * @cancellable: (allow-none): a #GCancellable, or %NULL
 *
 * Creates a #GSource that triggers when @stream can be written, or
 * @cancellable is triggered or an error occurs. The callback on the
 * source is of the #GPollableSourceFunc type.
 *
 * As with g_pollable_output_stream_is_writable(), it is possible that
 * the stream may not actually be writable even after the source
 * triggers, so you should use g_pollable_output_stream_write_nonblocking()
 * rather than g_output_stream_write() from the callback.
 *
 * Returns: (transfer full): a new #GSource
 * Since: 2.28
 */


/**
 * g_pollable_output_stream_is_writable:
 * @stream: a #GPollableOutputStream.
 *
 * Checks if @stream can be written.
 *
 * Note that some stream types may not be able to implement this 100%
 * reliably, and it is possible that a call to g_output_stream_write()
 * after this returns %TRUE would still block. To guarantee
 * non-blocking behavior, you should always use
 * g_pollable_output_stream_write_nonblocking(), which will return a
 * %G_IO_ERROR_WOULD_BLOCK error rather than blocking.
 *
 * Returns: %TRUE if @stream is writable, %FALSE if not. If an error has occurred on @stream, this will result in g_pollable_output_stream_is_writable() returning %TRUE, and the next attempt to write will return the error.
 * Since: 2.28
 */


/**
 * g_pollable_output_stream_write_nonblocking:
 * @stream: a #GPollableOutputStream
 * @buffer: (array length=count) (element-type guint8): a buffer to write data from
 * @count: the number of bytes you want to write
 * @cancellable: (allow-none): a #GCancellable, or %NULL
 * @error: #GError for error reporting, or %NULL to ignore.
 *
 * Attempts to write up to @count bytes from @buffer to @stream, as
 * with g_output_stream_write(). If @stream is not currently writable,
 * this will immediately return %G_IO_ERROR_WOULD_BLOCK, and you can
 * use g_pollable_output_stream_create_source() to create a #GSource
 * that will be triggered when @stream is writable.
 *
 * Note that since this method never blocks, you cannot actually
 * use @cancellable to cancel it. However, it will return an error
 * if @cancellable has already been cancelled when you call, which
 * may happen if you call this method after a source triggers due
 * to having been cancelled.
 *
 * Virtual: write_nonblocking
 * Returns: the number of bytes written, or -1 on error (including %G_IO_ERROR_WOULD_BLOCK).
 */


/**
 * g_pollable_source_new:
 * @pollable_stream: the stream associated with the new source
 *
 * Utility method for #GPollableInputStream and #GPollableOutputStream
 * implementations. Creates a new #GSource that expects a callback of
 * type #GPollableSourceFunc. The new source does not actually do
 * anything on its own; use g_source_add_child_source() to add other
 * sources to it to cause it to trigger.
 *
 * Returns: (transfer full): the new #GSource.
 * Since: 2.28
 */


/**
 * g_pollable_source_new_full:
 * @pollable_stream: (type GObject): the stream associated with the new source
 * @child_source: (allow-none): optional child source to attach
 * @cancellable: (allow-none): optional #GCancellable to attach
 *
 * Utility method for #GPollableInputStream and #GPollableOutputStream
 * implementations. Creates a new #GSource, as with
 * g_pollable_source_new(), but also attaching @child_source (with a
 * dummy callback), and @cancellable, if they are non-%NULL.
 *
 * Returns: (transfer full): the new #GSource.
 * Since: 2.34
 */


/**
 * g_pollable_stream_read:
 * @stream: a #GInputStream
 * @buffer: a buffer to read data into
 * @count: the number of bytes to read
 * @blocking: whether to do blocking I/O
 * @cancellable: (allow-none): optional #GCancellable object, %NULL to ignore.
 * @error: location to store the error occurring, or %NULL to ignore
 *
 * Tries to read from @stream, as with g_input_stream_read() (if
 * @blocking is %TRUE) or g_pollable_input_stream_read_nonblocking()
 * (if @blocking is %FALSE). This can be used to more easily share
 * code between blocking and non-blocking implementations of a method.
 *
 * If @blocking is %FALSE, then @stream must be a
 * #GPollableInputStream for which g_pollable_input_stream_can_poll()
 * returns %TRUE, or else the behavior is undefined. If @blocking is
 * %TRUE, then @stream does not need to be a #GPollableInputStream.
 *
 * Returns: the number of bytes read, or -1 on error.
 * Since: 2.34
 */


/**
 * g_pollable_stream_write:
 * @stream: a #GOutputStream.
 * @buffer: (array length=count) (element-type guint8): the buffer containing the data to write.
 * @count: the number of bytes to write
 * @blocking: whether to do blocking I/O
 * @cancellable: (allow-none): optional #GCancellable object, %NULL to ignore.
 * @error: location to store the error occurring, or %NULL to ignore
 *
 * Tries to write to @stream, as with g_output_stream_write() (if
 * @blocking is %TRUE) or g_pollable_output_stream_write_nonblocking()
 * (if @blocking is %FALSE). This can be used to more easily share
 * code between blocking and non-blocking implementations of a method.
 *
 * If @blocking is %FALSE, then @stream must be a
 * #GPollableOutputStream for which
 * g_pollable_output_stream_can_poll() returns %TRUE or else the
 * behavior is undefined. If @blocking is %TRUE, then @stream does not
 * need to be a #GPollableOutputStream.
 *
 * Returns: the number of bytes written, or -1 on error.
 * Since: 2.34
 */


/**
 * g_pollable_stream_write_all:
 * @stream: a #GOutputStream.
 * @buffer: (array length=count) (element-type guint8): the buffer containing the data to write.
 * @count: the number of bytes to write
 * @blocking: whether to do blocking I/O
 * @bytes_written: (out): location to store the number of bytes that was written to the stream
 * @cancellable: (allow-none): optional #GCancellable object, %NULL to ignore.
 * @error: location to store the error occurring, or %NULL to ignore
 *
 * Tries to write @count bytes to @stream, as with
 * g_output_stream_write_all(), but using g_pollable_stream_write()
 * rather than g_output_stream_write().
 *
 * On a successful write of @count bytes, %TRUE is returned, and
 * @bytes_written is set to @count.
 *
 * If there is an error during the operation (including
 * %G_IO_ERROR_WOULD_BLOCK in the non-blocking case), %FALSE is
 * returned and @error is set to indicate the error status,
 * @bytes_written is updated to contain the number of bytes written
 * into the stream before the error occurred.
 *
 * As with g_pollable_stream_write(), if @blocking is %FALSE, then
 * @stream must be a #GPollableOutputStream for which
 * g_pollable_output_stream_can_poll() returns %TRUE or else the
 * behavior is undefined. If @blocking is %TRUE, then @stream does not
 * need to be a #GPollableOutputStream.
 *
 * Returns: %TRUE on success, %FALSE if there was an error
 * Since: 2.34
 */


/**
 * g_proxy_address_get_destination_hostname:
 * @proxy: a #GProxyAddress
 *
 * Gets @proxy's destination hostname; that is, the name of the host
 * that will be connected to via the proxy, not the name of the proxy
 * itself.
 *
 * Returns: the @proxy's destination hostname
 * Since: 2.26
 */


/**
 * g_proxy_address_get_destination_port:
 * @proxy: a #GProxyAddress
 *
 * Gets @proxy's destination port; that is, the port on the
 * destination host that will be connected to via the proxy, not the
 * port number of the proxy itself.
 *
 * Returns: the @proxy's destination port
 * Since: 2.26
 */


/**
 * g_proxy_address_get_destination_protocol:
 * @proxy: a #GProxyAddress
 *
 * Gets the protocol that is being spoken to the destination
 * server; eg, "http" or "ftp".
 *
 * Returns: the @proxy's destination protocol
 * Since: 2.34
 */


/**
 * g_proxy_address_get_password:
 * @proxy: a #GProxyAddress
 *
 * Gets @proxy's password.
 *
 * Returns: the @proxy's password
 * Since: 2.26
 */


/**
 * g_proxy_address_get_protocol:
 * @proxy: a #GProxyAddress
 *
 * Gets @proxy's protocol. eg, "socks" or "http"
 *
 * Returns: the @proxy's protocol
 * Since: 2.26
 */


/**
 * g_proxy_address_get_uri:
 * @proxy: a #GProxyAddress
 *
 * Gets the proxy URI that @proxy was constructed from.
 *
 * Returns: the @proxy's URI, or %NULL if unknown
 * Since: 2.34
 */


/**
 * g_proxy_address_get_username:
 * @proxy: a #GProxyAddress
 *
 * Gets @proxy's username.
 *
 * Returns: the @proxy's username
 * Since: 2.26
 */


/**
 * g_proxy_address_new:
 * @inetaddr: The proxy server #GInetAddress.
 * @port: The proxy server port.
 * @protocol: The proxy protocol to support, in lower case (e.g. socks, http).
 * @dest_hostname: The destination hostname the the proxy should tunnel to.
 * @dest_port: The destination port to tunnel to.
 * @username: (allow-none): The username to authenticate to the proxy server (or %NULL).
 * @password: (allow-none): The password to authenticate to the proxy server (or %NULL).
 *
 * Creates a new #GProxyAddress for @inetaddr with @protocol that should
 * tunnel through @dest_hostname and @dest_port.
 *
 * (Note that this method doesn't set the #GProxyAddress:uri or
 * #GProxyAddress:destination-protocol fields; use g_object_new()
 * directly if you want to set those.)
 *
 * Returns: a new #GProxyAddress
 * Since: 2.26
 */


/**
 * g_proxy_connect:
 * @proxy: a #GProxy
 * @connection: a #GIOStream
 * @proxy_address: a #GProxyAddress
 * @cancellable: (allow-none): a #GCancellable
 * @error: return #GError
 *
 * Given @connection to communicate with a proxy (eg, a
 * #GSocketConnection that is connected to the proxy server), this
 * does the necessary handshake to connect to @proxy_address, and if
 * required, wraps the #GIOStream to handle proxy payload.
 *
 * Returns: (transfer full): a #GIOStream that will replace @connection. This might be the same as @connection, in which case a reference will be added.
 * Since: 2.26
 */


/**
 * g_proxy_connect_async:
 * @proxy: a #GProxy
 * @connection: a #GIOStream
 * @proxy_address: a #GProxyAddress
 * @cancellable: (allow-none): a #GCancellable
 * @callback: (scope async): a #GAsyncReadyCallback
 * @user_data: (closure): callback data
 *
 * Asynchronous version of g_proxy_connect().
 *
 * Since: 2.26
 */


/**
 * g_proxy_connect_finish:
 * @proxy: a #GProxy
 * @result: a #GAsyncResult
 * @error: return #GError
 *
 * See g_proxy_connect().
 *
 * Returns: (transfer full): a #GIOStream.
 * Since: 2.26
 */


/**
 * g_proxy_get_default_for_protocol:
 * @protocol: the proxy protocol name (e.g. http, socks, etc)
 *
 * Lookup "gio-proxy" extension point for a proxy implementation that supports
 * specified protocol.
 *
 * Returns: (transfer full): return a #GProxy or NULL if protocol is not supported.
 * Since: 2.26
 */


/**
 * g_proxy_resolver_get_default:
 *
 * Gets the default #GProxyResolver for the system.
 *
 * Returns: (transfer none): the default #GProxyResolver.
 * Since: 2.26
 */


/**
 * g_proxy_resolver_is_supported:
 * @resolver: a #GProxyResolver
 *
 * Checks if @resolver can be used on this system. (This is used
 * internally; g_proxy_resolver_get_default() will only return a proxy
 * resolver that returns %TRUE for this method.)
 *
 * Returns: %TRUE if @resolver is supported.
 * Since: 2.26
 */


/**
 * g_proxy_resolver_lookup:
 * @resolver: a #GProxyResolver
 * @uri: a URI representing the destination to connect to
 * @cancellable: (allow-none): a #GCancellable, or %NULL
 * @error: return location for a #GError, or %NULL
 *
 * Looks into the system proxy configuration to determine what proxy,
 * if any, to use to connect to @uri. The returned proxy URIs are of the
 * form <literal>&lt;protocol&gt;://[user[:password]@]host:port</literal>
 * or <literal>direct://</literal>, where &lt;protocol&gt; could be
 * http, rtsp, socks or other proxying protocol.
 *
 * If you don't know what network protocol is being used on the
 * socket, you should use <literal>none</literal> as the URI protocol.
 * In this case, the resolver might still return a generic proxy type
 * (such as SOCKS), but would not return protocol-specific proxy types
 * (such as http).
 *
 * <literal>direct://</literal> is used when no proxy is needed.
 * Direct connection should not be attempted unless it is part of the
 * returned array of proxies.
 *
 * Returns: (transfer full) (array zero-terminated=1): A NULL-terminated array of proxy URIs. Must be freed with g_strfreev().
 * Since: 2.26
 */


/**
 * g_proxy_resolver_lookup_async:
 * @resolver: a #GProxyResolver
 * @uri: a URI representing the destination to connect to
 * @cancellable: (allow-none): a #GCancellable, or %NULL
 * @callback: (scope async): callback to call after resolution completes
 * @user_data: (closure): data for @callback
 *
 * Asynchronous lookup of proxy. See g_proxy_resolver_lookup() for more
 * details.
 *
 * Since: 2.26
 */


/**
 * g_proxy_resolver_lookup_finish:
 * @resolver: a #GProxyResolver
 * @result: the result passed to your #GAsyncReadyCallback
 * @error: return location for a #GError, or %NULL
 *
 * Call this function to obtain the array of proxy URIs when
 * g_proxy_resolver_lookup_async() is complete. See
 * g_proxy_resolver_lookup() for more details.
 *
 * Returns: (transfer full) (array zero-terminated=1): A NULL-terminated array of proxy URIs. Must be freed with g_strfreev().
 * Since: 2.26
 */


/**
 * g_proxy_supports_hostname:
 * @proxy: a #GProxy
 *
 * Some proxy protocols expect to be passed a hostname, which they
 * will resolve to an IP address themselves. Others, like SOCKS4, do
 * not allow this. This function will return %FALSE if @proxy is
 * implementing such a protocol. When %FALSE is returned, the caller
 * should resolve the destination hostname first, and then pass a
 * #GProxyAddress containing the stringified IP address to
 * g_proxy_connect() or g_proxy_connect_async().
 *
 * Returns: %TRUE if hostname resolution is supported.
 * Since: 2.26
 */


/**
 * g_remote_action_group_activate_action_full:
 * @remote: a #GDBusActionGroup
 * @action_name: the name of the action to activate
 * @parameter: (allow-none): the optional parameter to the activation
 * @platform_data: the platform data to send
 *
 * Activates the remote action.
 *
 * This is the same as g_action_group_activate_action() except that it
 * allows for provision of "platform data" to be sent along with the
 * activation request.  This typically contains details such as the user
 * interaction timestamp or startup notification information.
 *
 * @platform_data must be non-%NULL and must have the type
 * %G_VARIANT_TYPE_VARDICT.  If it is floating, it will be consumed.
 *
 * Since: 2.32
 */


/**
 * g_remote_action_group_change_action_state_full:
 * @remote: a #GRemoteActionGroup
 * @action_name: the name of the action to change the state of
 * @value: the new requested value for the state
 * @platform_data: the platform data to send
 *
 * Changes the state of a remote action.
 *
 * This is the same as g_action_group_change_action_state() except that
 * it allows for provision of "platform data" to be sent along with the
 * state change request.  This typically contains details such as the
 * user interaction timestamp or startup notification information.
 *
 * @platform_data must be non-%NULL and must have the type
 * %G_VARIANT_TYPE_VARDICT.  If it is floating, it will be consumed.
 *
 * Since: 2.32
 */


/**
 * g_resolver_error_quark:
 *
 * Gets the #GResolver Error Quark.
 *
 * Returns: a #GQuark.
 * Since: 2.22
 */


/**
 * g_resolver_free_addresses: (skip)
 * @addresses: a #GList of #GInetAddress
 *
 * Frees @addresses (which should be the return value from
 * g_resolver_lookup_by_name() or g_resolver_lookup_by_name_finish()).
 * (This is a convenience method; you can also simply free the results
 * by hand.)
 *
 * Since: 2.22
 */


/**
 * g_resolver_free_targets: (skip)
 * @targets: a #GList of #GSrvTarget
 *
 * Frees @targets (which should be the return value from
 * g_resolver_lookup_service() or g_resolver_lookup_service_finish()).
 * (This is a convenience method; you can also simply free the
 * results by hand.)
 *
 * Since: 2.22
 */


/**
 * g_resolver_get_default:
 *
 * Gets the default #GResolver. You should unref it when you are done
 * with it. #GResolver may use its reference count as a hint about how
 * many threads it should allocate for concurrent DNS resolutions.
 *
 * Returns: (transfer full): the default #GResolver.
 * Since: 2.22
 */


/**
 * g_resolver_lookup_by_address:
 * @resolver: a #GResolver
 * @address: the address to reverse-resolve
 * @cancellable: (allow-none): a #GCancellable, or %NULL
 * @error: return location for a #GError, or %NULL
 *
 * Synchronously reverse-resolves @address to determine its
 * associated hostname.
 *
 * If the DNS resolution fails, @error (if non-%NULL) will be set to
 * a value from #GResolverError.
 *
 * If @cancellable is non-%NULL, it can be used to cancel the
 * operation, in which case @error (if non-%NULL) will be set to
 * %G_IO_ERROR_CANCELLED.
 *
 * Returns: a hostname (either ASCII-only, or in ASCII-encoded form), or %NULL on error.
 * Since: 2.22
 */


/**
 * g_resolver_lookup_by_address_async:
 * @resolver: a #GResolver
 * @address: the address to reverse-resolve
 * @cancellable: (allow-none): a #GCancellable, or %NULL
 * @callback: (scope async): callback to call after resolution completes
 * @user_data: (closure): data for @callback
 *
 * Begins asynchronously reverse-resolving @address to determine its
 * associated hostname, and eventually calls @callback, which must
 * call g_resolver_lookup_by_address_finish() to get the final result.
 *
 * Since: 2.22
 */


/**
 * g_resolver_lookup_by_address_finish:
 * @resolver: a #GResolver
 * @result: the result passed to your #GAsyncReadyCallback
 * @error: return location for a #GError, or %NULL
 *
 * Retrieves the result of a previous call to
 * g_resolver_lookup_by_address_async().
 *
 * If the DNS resolution failed, @error (if non-%NULL) will be set to
 * a value from #GResolverError. If the operation was cancelled,
 * @error will be set to %G_IO_ERROR_CANCELLED.
 *
 * Returns: a hostname (either ASCII-only, or in ASCII-encoded form), or %NULL on error.
 * Since: 2.22
 */


/**
 * g_resolver_lookup_by_name:
 * @resolver: a #GResolver
 * @hostname: the hostname to look up
 * @cancellable: (allow-none): a #GCancellable, or %NULL
 * @error: return location for a #GError, or %NULL
 *
 * Synchronously resolves @hostname to determine its associated IP
 * address(es). @hostname may be an ASCII-only or UTF-8 hostname, or
 * the textual form of an IP address (in which case this just becomes
 * a wrapper around g_inet_address_new_from_string()).
 *
 * On success, g_resolver_lookup_by_name() will return a #GList of
 * #GInetAddress, sorted in order of preference and guaranteed to not
 * contain duplicates. That is, if using the result to connect to
 * @hostname, you should attempt to connect to the first address
 * first, then the second if the first fails, etc. If you are using
 * the result to listen on a socket, it is appropriate to add each
 * result using e.g. g_socket_listener_add_address().
 *
 * If the DNS resolution fails, @error (if non-%NULL) will be set to a
 * value from #GResolverError.
 *
 * If @cancellable is non-%NULL, it can be used to cancel the
 * operation, in which case @error (if non-%NULL) will be set to
 * %G_IO_ERROR_CANCELLED.
 *
 * If you are planning to connect to a socket on the resolved IP
 * address, it may be easier to create a #GNetworkAddress and use its
 * #GSocketConnectable interface.
 *
 * Returns: (element-type GInetAddress) (transfer full): a #GList of #GInetAddress, or %NULL on error. You must unref each of the addresses and free the list when you are done with it. (You can use g_resolver_free_addresses() to do this.)
 * Since: 2.22
 */


/**
 * g_resolver_lookup_by_name_async:
 * @resolver: a #GResolver
 * @hostname: the hostname to look up the address of
 * @cancellable: (allow-none): a #GCancellable, or %NULL
 * @callback: (scope async): callback to call after resolution completes
 * @user_data: (closure): data for @callback
 *
 * Begins asynchronously resolving @hostname to determine its
 * associated IP address(es), and eventually calls @callback, which
 * must call g_resolver_lookup_by_name_finish() to get the result.
 * See g_resolver_lookup_by_name() for more details.
 *
 * Since: 2.22
 */


/**
 * g_resolver_lookup_by_name_finish:
 * @resolver: a #GResolver
 * @result: the result passed to your #GAsyncReadyCallback
 * @error: return location for a #GError, or %NULL
 *
 * Retrieves the result of a call to
 * g_resolver_lookup_by_name_async().
 *
 * If the DNS resolution failed, @error (if non-%NULL) will be set to
 * a value from #GResolverError. If the operation was cancelled,
 * @error will be set to %G_IO_ERROR_CANCELLED.
 *
 * Returns: (element-type GInetAddress) (transfer full): a #GList of #GInetAddress, or %NULL on error. See g_resolver_lookup_by_name() for more details.
 * Since: 2.22
 */


/**
 * g_resolver_lookup_records:
 * @resolver: a #GResolver
 * @rrname: the DNS name to lookup the record for
 * @record_type: the type of DNS record to lookup
 * @cancellable: (allow-none): a #GCancellable, or %NULL
 * @error: return location for a #GError, or %NULL
 *
 * Synchronously performs a DNS record lookup for the given @rrname and returns
 * a list of records as #GVariant tuples. See #GResolverRecordType for
 * information on what the records contain for each @record_type.
 *
 * If the DNS resolution fails, @error (if non-%NULL) will be set to
 * a value from #GResolverError.
 *
 * If @cancellable is non-%NULL, it can be used to cancel the
 * operation, in which case @error (if non-%NULL) will be set to
 * %G_IO_ERROR_CANCELLED.
 *
 * Returns: (element-type GVariant) (transfer full): a #GList of #GVariant, or %NULL on error. You must free each of the records and the list when you are done with it. (You can use g_list_free_full() with g_variant_unref() to do this.)
 * Since: 2.34
 */


/**
 * g_resolver_lookup_records_async:
 * @resolver: a #GResolver
 * @rrname: the DNS name to lookup the record for
 * @record_type: the type of DNS record to lookup
 * @cancellable: (allow-none): a #GCancellable, or %NULL
 * @callback: (scope async): callback to call after resolution completes
 * @user_data: (closure): data for @callback
 *
 * Begins asynchronously performing a DNS lookup for the given
 * @rrname, and eventually calls @callback, which must call
 * g_resolver_lookup_records_finish() to get the final result. See
 * g_resolver_lookup_records() for more details.
 *
 * Since: 2.34
 */


/**
 * g_resolver_lookup_records_finish:
 * @resolver: a #GResolver
 * @result: the result passed to your #GAsyncReadyCallback
 * @error: return location for a #GError, or %NULL
 *
 * Retrieves the result of a previous call to
 * g_resolver_lookup_records_async(). Returns a list of records as #GVariant
 * tuples. See #GResolverRecordType for information on what the records contain.
 *
 * If the DNS resolution failed, @error (if non-%NULL) will be set to
 * a value from #GResolverError. If the operation was cancelled,
 * @error will be set to %G_IO_ERROR_CANCELLED.
 *
 * Returns: (element-type GVariant) (transfer full): a #GList of #GVariant, or %NULL on error. You must free each of the records and the list when you are done with it. (You can use g_list_free_full() with g_variant_unref() to do this.)
 * Since: 2.34
 */


/**
 * g_resolver_lookup_service:
 * @resolver: a #GResolver
 * @service: the service type to look up (eg, "ldap")
 * @protocol: the networking protocol to use for @service (eg, "tcp")
 * @domain: the DNS domain to look up the service in
 * @cancellable: (allow-none): a #GCancellable, or %NULL
 * @error: return location for a #GError, or %NULL
 *
 * Synchronously performs a DNS SRV lookup for the given @service and
 * @protocol in the given @domain and returns an array of #GSrvTarget.
 * @domain may be an ASCII-only or UTF-8 hostname. Note also that the
 * @service and @protocol arguments <emphasis>do not</emphasis>
 * include the leading underscore that appears in the actual DNS
 * entry.
 *
 * On success, g_resolver_lookup_service() will return a #GList of
 * #GSrvTarget, sorted in order of preference. (That is, you should
 * attempt to connect to the first target first, then the second if
 * the first fails, etc.)
 *
 * If the DNS resolution fails, @error (if non-%NULL) will be set to
 * a value from #GResolverError.
 *
 * If @cancellable is non-%NULL, it can be used to cancel the
 * operation, in which case @error (if non-%NULL) will be set to
 * %G_IO_ERROR_CANCELLED.
 *
 * If you are planning to connect to the service, it is usually easier
 * to create a #GNetworkService and use its #GSocketConnectable
 * interface.
 *
 * Returns: (element-type GSrvTarget) (transfer full): a #GList of #GSrvTarget, or %NULL on error. You must free each of the targets and the list when you are done with it. (You can use g_resolver_free_targets() to do this.)
 * Since: 2.22
 */


/**
 * g_resolver_lookup_service_async:
 * @resolver: a #GResolver
 * @service: the service type to look up (eg, "ldap")
 * @protocol: the networking protocol to use for @service (eg, "tcp")
 * @domain: the DNS domain to look up the service in
 * @cancellable: (allow-none): a #GCancellable, or %NULL
 * @callback: (scope async): callback to call after resolution completes
 * @user_data: (closure): data for @callback
 *
 * Begins asynchronously performing a DNS SRV lookup for the given
 * @service and @protocol in the given @domain, and eventually calls
 * @callback, which must call g_resolver_lookup_service_finish() to
 * get the final result. See g_resolver_lookup_service() for more
 * details.
 *
 * Since: 2.22
 */


/**
 * g_resolver_lookup_service_finish:
 * @resolver: a #GResolver
 * @result: the result passed to your #GAsyncReadyCallback
 * @error: return location for a #GError, or %NULL
 *
 * Retrieves the result of a previous call to
 * g_resolver_lookup_service_async().
 *
 * If the DNS resolution failed, @error (if non-%NULL) will be set to
 * a value from #GResolverError. If the operation was cancelled,
 * @error will be set to %G_IO_ERROR_CANCELLED.
 *
 * Returns: (element-type GSrvTarget) (transfer full): a #GList of #GSrvTarget, or %NULL on error. See g_resolver_lookup_service() for more details.
 * Since: 2.22
 */


/**
 * g_resolver_set_default:
 * @resolver: the new default #GResolver
 *
 * Sets @resolver to be the application's default resolver (reffing
 * @resolver, and unreffing the previous default resolver, if any).
 * Future calls to g_resolver_get_default() will return this resolver.
 *
 * This can be used if an application wants to perform any sort of DNS
 * caching or "pinning"; it can implement its own #GResolver that
 * calls the original default resolver for DNS operations, and
 * implements its own cache policies on top of that, and then set
 * itself as the default resolver for all later code to use.
 *
 * Since: 2.22
 */


/**
 * g_resource_enumerate_children:
 * @resource: A #GResource
 * @path: A pathname inside the resource
 * @lookup_flags: A #GResourceLookupFlags
 * @error: return location for a #GError, or %NULL
 *
 * Returns all the names of children at the specified @path in the resource.
 * The return result is a %NULL terminated list of strings which should
 * be released with g_strfreev().
 *
 * @lookup_flags controls the behaviour of the lookup.
 *
 * Returns: (array zero-terminated=1) (transfer full): an array of constant strings
 * Since: 2.32
 */


/**
 * g_resource_error_quark:
 *
 * Gets the #GResource Error Quark.
 *
 * Returns: a #GQuark
 * Since: 2.32
 */


/**
 * g_resource_get_info:
 * @resource: A #GResource
 * @path: A pathname inside the resource
 * @lookup_flags: A #GResourceLookupFlags
 * @size: (out) (allow-none): a location to place the length of the contents of the file, or %NULL if the length is not needed
 * @flags: (out) (allow-none): a location to place the flags about the file, or %NULL if the length is not needed
 * @error: return location for a #GError, or %NULL
 *
 * Looks for a file at the specified @path in the resource and
 * if found returns information about it.
 *
 * @lookup_flags controls the behaviour of the lookup.
 *
 * Returns: %TRUE if the file was found. %FALSE if there were errors
 * Since: 2.32
 */


/**
 * g_resource_load:
 * @filename: (type filename): the path of a filename to load, in the GLib filename encoding
 * @error: return location for a #GError, or %NULL
 *
 * Loads a binary resource bundle and creates a #GResource representation of it, allowing
 * you to query it for data.
 *
 * If you want to use this resource in the global resource namespace you need
 * to register it with g_resources_register().
 *
 * Returns: (transfer full): a new #GResource, or %NULL on error
 * Since: 2.32
 */


/**
 * g_resource_lookup_data:
 * @resource: A #GResource
 * @path: A pathname inside the resource
 * @lookup_flags: A #GResourceLookupFlags
 * @error: return location for a #GError, or %NULL
 *
 * Looks for a file at the specified @path in the resource and
 * returns a #GBytes that lets you directly access the data in
 * memory.
 *
 * The data is always followed by a zero byte, so you
 * can safely use the data as a C string. However, that byte
 * is not included in the size of the GBytes.
 *
 * For uncompressed resource files this is a pointer directly into
 * the resource bundle, which is typically in some readonly data section
 * in the program binary. For compressed files we allocate memory on
 * the heap and automatically uncompress the data.
 *
 * @lookup_flags controls the behaviour of the lookup.
 *
 * Returns: (transfer full): #GBytes or %NULL on error. Free the returned object with g_bytes_unref()
 * Since: 2.32
 */


/**
 * g_resource_new_from_data:
 * @data: A #GBytes
 * @error: return location for a #GError, or %NULL
 *
 * Creates a GResource from a reference to the binary resource bundle.
 * This will keep a reference to @data while the resource lives, so
 * the data should not be modified or freed.
 *
 * If you want to use this resource in the global resource namespace you need
 * to register it with g_resources_register().
 *
 * Returns: (transfer full): a new #GResource, or %NULL on error
 * Since: 2.32
 */


/**
 * g_resource_open_stream:
 * @resource: A #GResource
 * @path: A pathname inside the resource
 * @lookup_flags: A #GResourceLookupFlags
 * @error: return location for a #GError, or %NULL
 *
 * Looks for a file at the specified @path in the resource and
 * returns a #GInputStream that lets you read the data.
 *
 * @lookup_flags controls the behaviour of the lookup.
 *
 * Returns: (transfer full): #GInputStream or %NULL on error. Free the returned object with g_object_unref()
 * Since: 2.32
 */


/**
 * g_resource_ref:
 * @resource: A #GResource
 *
 * Atomically increments the reference count of @array by one. This
 * function is MT-safe and may be called from any thread.
 *
 * Returns: The passed in #GResource
 * Since: 2.32
 */


/**
 * g_resource_unref:
 * @resource: A #GResource
 *
 * Atomically decrements the reference count of @resource by one. If the
 * reference count drops to 0, all memory allocated by the array is
 * released. This function is MT-safe and may be called from any
 * thread.
 *
 * Since: 2.32
 */


/**
 * g_resources_enumerate_children:
 * @path: A pathname inside the resource
 * @lookup_flags: A #GResourceLookupFlags
 * @error: return location for a #GError, or %NULL
 *
 * Returns all the names of children at the specified @path in the set of
 * globally registred resources.
 * The return result is a %NULL terminated list of strings which should
 * be released with g_strfreev().
 *
 * @lookup_flags controls the behaviour of the lookup.
 *
 * Returns: (array zero-terminated=1) (transfer full): an array of constant strings
 * Since: 2.32
 */


/**
 * g_resources_get_info:
 * @path: A pathname inside the resource
 * @lookup_flags: A #GResourceLookupFlags
 * @size: (out) (allow-none): a location to place the length of the contents of the file, or %NULL if the length is not needed
 * @flags: (out) (allow-none): a location to place the flags about the file, or %NULL if the length is not needed
 * @error: return location for a #GError, or %NULL
 *
 * Looks for a file at the specified @path in the set of
 * globally registred resources and if found returns information about it.
 *
 * @lookup_flags controls the behaviour of the lookup.
 *
 * Returns: %TRUE if the file was found. %FALSE if there were errors
 * Since: 2.32
 */


/**
 * g_resources_lookup_data:
 * @path: A pathname inside the resource
 * @lookup_flags: A #GResourceLookupFlags
 * @error: return location for a #GError, or %NULL
 *
 * Looks for a file at the specified @path in the set of
 * globally registred resources and returns a #GBytes that
 * lets you directly access the data in memory.
 *
 * The data is always followed by a zero byte, so you
 * can safely use the data as a C string. However, that byte
 * is not included in the size of the GBytes.
 *
 * For uncompressed resource files this is a pointer directly into
 * the resource bundle, which is typically in some readonly data section
 * in the program binary. For compressed files we allocate memory on
 * the heap and automatically uncompress the data.
 *
 * @lookup_flags controls the behaviour of the lookup.
 *
 * Returns: (transfer full): #GBytes or %NULL on error. Free the returned object with g_bytes_unref()
 * Since: 2.32
 */


/**
 * g_resources_open_stream:
 * @path: A pathname inside the resource
 * @lookup_flags: A #GResourceLookupFlags
 * @error: return location for a #GError, or %NULL
 *
 * Looks for a file at the specified @path in the set of
 * globally registred resources and returns a #GInputStream
 * that lets you read the data.
 *
 * @lookup_flags controls the behaviour of the lookup.
 *
 * Returns: (transfer full): #GInputStream or %NULL on error. Free the returned object with g_object_unref()
 * Since: 2.32
 */


/**
 * g_resources_register:
 * @resource: A #GResource
 *
 * Registers the resource with the process-global set of resources.
 * Once a resource is registered the files in it can be accessed
 * with the global resource lookup functions like g_resources_lookup_data().
 *
 * Since: 2.32
 */


/**
 * g_resources_unregister:
 * @resource: A #GResource
 *
 * Unregisters the resource from the process-global set of resources.
 *
 * Since: 2.32
 */


/**
 * g_seekable_can_seek:
 * @seekable: a #GSeekable.
 *
 * Tests if the stream supports the #GSeekableIface.
 *
 * Returns: %TRUE if @seekable can be seeked. %FALSE otherwise.
 */


/**
 * g_seekable_can_truncate:
 * @seekable: a #GSeekable.
 *
 * Tests if the stream can be truncated.
 *
 * Returns: %TRUE if the stream can be truncated, %FALSE otherwise.
 */


/**
 * g_seekable_seek:
 * @seekable: a #GSeekable.
 * @offset: a #goffset.
 * @type: a #GSeekType.
 * @cancellable: (allow-none): optional #GCancellable object, %NULL to ignore.
 * @error: a #GError location to store the error occurring, or %NULL to ignore.
 *
 * Seeks in the stream by the given @offset, modified by @type.
 *
 * If @cancellable is not %NULL, then the operation can be cancelled by
 * triggering the cancellable object from another thread. If the operation
 * was cancelled, the error %G_IO_ERROR_CANCELLED will be returned.
 *
 * Returns: %TRUE if successful. If an error has occurred, this function will return %FALSE and set @error appropriately if present.
 */


/**
 * g_seekable_tell:
 * @seekable: a #GSeekable.
 *
 * Tells the current position within the stream.
 *
 * Returns: the offset from the beginning of the buffer.
 */


/**
 * g_seekable_truncate:
 * @seekable: a #GSeekable.
 * @offset: a #goffset.
 * @cancellable: (allow-none): optional #GCancellable object, %NULL to ignore.
 * @error: a #GError location to store the error occurring, or %NULL to ignore.
 *
 * Truncates a stream with a given #offset.
 *
 * If @cancellable is not %NULL, then the operation can be cancelled by
 * triggering the cancellable object from another thread. If the operation
 * was cancelled, the error %G_IO_ERROR_CANCELLED will be returned. If an
 * operation was partially finished when the operation was cancelled the
 * partial result will be returned, without an error.
 *
 * Virtual: truncate_fn
 * Returns: %TRUE if successful. If an error has occurred, this function will return %FALSE and set @error appropriately if present.
 */


/**
 * g_settings_apply:
 * @settings: a #GSettings instance
 *
 * Applies any changes that have been made to the settings.  This
 * function does nothing unless @settings is in 'delay-apply' mode;
 * see g_settings_delay().  In the normal case settings are always
 * applied immediately.
 */


/**
 * g_settings_backend_changed:
 * @backend: a #GSettingsBackend implementation
 * @key: the name of the key
 * @origin_tag: the origin tag
 *
 * Signals that a single key has possibly changed.  Backend
 * implementations should call this if a key has possibly changed its
 * value.
 *
 * @key must be a valid key (ie starting with a slash, not containing
 * '//', and not ending with a slash).
 *
 * The implementation must call this function during any call to
 * g_settings_backend_write(), before the call returns (except in the
 * case that no keys are actually changed and it cares to detect this
 * fact).  It may not rely on the existence of a mainloop for
 * dispatching the signal later.
 *
 * The implementation may call this function at any other time it likes
 * in response to other events (such as changes occurring outside of the
 * program).  These calls may originate from a mainloop or may originate
 * in response to any other action (including from calls to
 * g_settings_backend_write()).
 *
 * In the case that this call is in response to a call to
 * g_settings_backend_write() then @origin_tag must be set to the same
 * value that was passed to that call.
 *
 * Since: 2.26
 */


/**
 * g_settings_backend_changed_tree:
 * @backend: a #GSettingsBackend implementation
 * @tree: a #GTree containing the changes
 * @origin_tag: the origin tag
 *
 * This call is a convenience wrapper.  It gets the list of changes from
 * @tree, computes the longest common prefix and calls
 * g_settings_backend_changed().
 *
 * Since: 2.26
 */


/**
 * g_settings_backend_flatten_tree:
 * @tree: a #GTree containing the changes
 * @path: (out): the location to save the path
 * @keys: (out) (transfer container) (array zero-terminated=1): the location to save the relative keys
 * @values: (out) (allow-none) (transfer container) (array zero-terminated=1): the location to save the values, or %NULL
 *
 * Calculate the longest common prefix of all keys in a tree and write
 * out an array of the key names relative to that prefix and,
 * optionally, the value to store at each of those keys.
 *
 * You must free the value returned in @path, @keys and @values using
 * g_free().  You should not attempt to free or unref the contents of
 * @keys or @values.
 *
 * Since: 2.26
 */


/**
 * g_settings_backend_get_default:
 *
 * Returns the default #GSettingsBackend. It is possible to override
 * the default by setting the <envar>GSETTINGS_BACKEND</envar>
 * environment variable to the name of a settings backend.
 *
 * The user gets a reference to the backend.
 *
 * Returns: (transfer full): the default #GSettingsBackend
 * Since: 2.28
 */


/**
 * g_settings_backend_keys_changed:
 * @backend: a #GSettingsBackend implementation
 * @path: the path containing the changes
 * @items: (array zero-terminated=1): the %NULL-terminated list of changed keys
 * @origin_tag: the origin tag
 *
 * Signals that a list of keys have possibly changed.  Backend
 * implementations should call this if keys have possibly changed their
 * values.
 *
 * @path must be a valid path (ie starting and ending with a slash and
 * not containing '//').  Each string in @items must form a valid key
 * name when @path is prefixed to it (ie: each item must not start or
 * end with '/' and must not contain '//').
 *
 * The meaning of this signal is that any of the key names resulting
 * from the contatenation of @path with each item in @items may have
 * changed.
 *
 * The same rules for when notifications must occur apply as per
 * g_settings_backend_changed().  These two calls can be used
 * interchangeably if exactly one item has changed (although in that
 * case g_settings_backend_changed() is definitely preferred).
 *
 * For efficiency reasons, the implementation should strive for @path to
 * be as long as possible (ie: the longest common prefix of all of the
 * keys that were changed) but this is not strictly required.
 *
 * Since: 2.26
 */


/**
 * g_settings_backend_path_changed:
 * @backend: a #GSettingsBackend implementation
 * @path: the path containing the changes
 * @origin_tag: the origin tag
 *
 * Signals that all keys below a given path may have possibly changed.
 * Backend implementations should call this if an entire path of keys
 * have possibly changed their values.
 *
 * @path must be a valid path (ie starting and ending with a slash and
 * not containing '//').
 *
 * The meaning of this signal is that any of the key which has a name
 * starting with @path may have changed.
 *
 * The same rules for when notifications must occur apply as per
 * g_settings_backend_changed().  This call might be an appropriate
 * reasponse to a 'reset' call but implementations are also free to
 * explicitly list the keys that were affected by that call if they can
 * easily do so.
 *
 * For efficiency reasons, the implementation should strive for @path to
 * be as long as possible (ie: the longest common prefix of all of the
 * keys that were changed) but this is not strictly required.  As an
 * example, if this function is called with the path of "/" then every
 * single key in the application will be notified of a possible change.
 *
 * Since: 2.26
 */


/**
 * g_settings_backend_path_writable_changed:
 * @backend: a #GSettingsBackend implementation
 * @path: the name of the path
 *
 * Signals that the writability of all keys below a given path may have
 * changed.
 *
 * Since GSettings performs no locking operations for itself, this call
 * will always be made in response to external events.
 *
 * Since: 2.26
 */


/**
 * g_settings_backend_writable_changed:
 * @backend: a #GSettingsBackend implementation
 * @key: the name of the key
 *
 * Signals that the writability of a single key has possibly changed.
 *
 * Since GSettings performs no locking operations for itself, this call
 * will always be made in response to external events.
 *
 * Since: 2.26
 */


/**
 * g_settings_bind:
 * @settings: a #GSettings object
 * @key: the key to bind
 * @object: (type GObject.Object): a #GObject
 * @property: the name of the property to bind
 * @flags: flags for the binding
 *
 * Create a binding between the @key in the @settings object
 * and the property @property of @object.
 *
 * The binding uses the default GIO mapping functions to map
 * between the settings and property values. These functions
 * handle booleans, numeric types and string types in a
 * straightforward way. Use g_settings_bind_with_mapping() if
 * you need a custom mapping, or map between types that are not
 * supported by the default mapping functions.
 *
 * Unless the @flags include %G_SETTINGS_BIND_NO_SENSITIVITY, this
 * function also establishes a binding between the writability of
 * @key and the "sensitive" property of @object (if @object has
 * a boolean property by that name). See g_settings_bind_writable()
 * for more details about writable bindings.
 *
 * Note that the lifecycle of the binding is tied to the object,
 * and that you can have only one binding per object property.
 * If you bind the same property twice on the same object, the second
 * binding overrides the first one.
 *
 * Since: 2.26
 */


/**
 * g_settings_bind_with_mapping: (skip)
 * @settings: a #GSettings object
 * @key: the key to bind
 * @object: (type GObject.Object): a #GObject
 * @property: the name of the property to bind
 * @flags: flags for the binding
 * @get_mapping: a function that gets called to convert values from @settings to @object, or %NULL to use the default GIO mapping
 * @set_mapping: a function that gets called to convert values from @object to @settings, or %NULL to use the default GIO mapping
 * @user_data: data that gets passed to @get_mapping and @set_mapping
 * @destroy: #GDestroyNotify function for @user_data
 *
 * Create a binding between the @key in the @settings object
 * and the property @property of @object.
 *
 * The binding uses the provided mapping functions to map between
 * settings and property values.
 *
 * Note that the lifecycle of the binding is tied to the object,
 * and that you can have only one binding per object property.
 * If you bind the same property twice on the same object, the second
 * binding overrides the first one.
 *
 * Since: 2.26
 */


/**
 * g_settings_bind_writable:
 * @settings: a #GSettings object
 * @key: the key to bind
 * @object: (type GObject.Object): a #GObject
 * @property: the name of a boolean property to bind
 * @inverted: whether to 'invert' the value
 *
 * Create a binding between the writability of @key in the
 * @settings object and the property @property of @object.
 * The property must be boolean; "sensitive" or "visible"
 * properties of widgets are the most likely candidates.
 *
 * Writable bindings are always uni-directional; changes of the
 * writability of the setting will be propagated to the object
 * property, not the other way.
 *
 * When the @inverted argument is %TRUE, the binding inverts the
 * value as it passes from the setting to the object, i.e. @property
 * will be set to %TRUE if the key is <emphasis>not</emphasis>
 * writable.
 *
 * Note that the lifecycle of the binding is tied to the object,
 * and that you can have only one binding per object property.
 * If you bind the same property twice on the same object, the second
 * binding overrides the first one.
 *
 * Since: 2.26
 */


/**
 * g_settings_create_action:
 * @settings: a #GSettings
 * @key: the name of a key in @settings
 *
 * Creates a #GAction corresponding to a given #GSettings key.
 *
 * The action has the same name as the key.
 *
 * The value of the key becomes the state of the action and the action
 * is enabled when the key is writable.  Changing the state of the
 * action results in the key being written to.  Changes to the value or
 * writability of the key cause appropriate change notifications to be
 * emitted for the action.
 *
 * For boolean-valued keys, action activations take no parameter and
 * result in the toggling of the value.  For all other types,
 * activations take the new value for the key (which must have the
 * correct type).
 *
 * Returns: (transfer full): a new #GAction
 * Since: 2.32
 */


/**
 * g_settings_delay:
 * @settings: a #GSettings object
 *
 * Changes the #GSettings object into 'delay-apply' mode. In this
 * mode, changes to @settings are not immediately propagated to the
 * backend, but kept locally until g_settings_apply() is called.
 *
 * Since: 2.26
 */


/**
 * g_settings_get:
 * @settings: a #GSettings object
 * @key: the key to get the value for
 * @format: a #GVariant format string
 * @...: arguments as per @format
 *
 * Gets the value that is stored at @key in @settings.
 *
 * A convenience function that combines g_settings_get_value() with
 * g_variant_get().
 *
 * It is a programmer error to give a @key that isn't contained in the
 * schema for @settings or for the #GVariantType of @format to mismatch
 * the type given in the schema.
 *
 * Since: 2.26
 */


/**
 * g_settings_get_boolean:
 * @settings: a #GSettings object
 * @key: the key to get the value for
 *
 * Gets the value that is stored at @key in @settings.
 *
 * A convenience variant of g_settings_get() for booleans.
 *
 * It is a programmer error to give a @key that isn't specified as
 * having a boolean type in the schema for @settings.
 *
 * Returns: a boolean
 * Since: 2.26
 */


/**
 * g_settings_get_child:
 * @settings: a #GSettings object
 * @name: the name of the 'child' schema
 *
 * Creates a 'child' settings object which has a base path of
 * <replaceable>base-path</replaceable>/@name, where
 * <replaceable>base-path</replaceable> is the base path of @settings.
 *
 * The schema for the child settings object must have been declared
 * in the schema of @settings using a <tag class="starttag">child</tag> element.
 *
 * Returns: (transfer full): a 'child' settings object
 * Since: 2.26
 */


/**
 * g_settings_get_double:
 * @settings: a #GSettings object
 * @key: the key to get the value for
 *
 * Gets the value that is stored at @key in @settings.
 *
 * A convenience variant of g_settings_get() for doubles.
 *
 * It is a programmer error to give a @key that isn't specified as
 * having a 'double' type in the schema for @settings.
 *
 * Returns: a double
 * Since: 2.26
 */


/**
 * g_settings_get_enum:
 * @settings: a #GSettings object
 * @key: the key to get the value for
 *
 * Gets the value that is stored in @settings for @key and converts it
 * to the enum value that it represents.
 *
 * In order to use this function the type of the value must be a string
 * and it must be marked in the schema file as an enumerated type.
 *
 * It is a programmer error to give a @key that isn't contained in the
 * schema for @settings or is not marked as an enumerated type.
 *
 * If the value stored in the configuration database is not a valid
 * value for the enumerated type then this function will return the
 * default value.
 *
 * Returns: the enum value
 * Since: 2.26
 */


/**
 * g_settings_get_flags:
 * @settings: a #GSettings object
 * @key: the key to get the value for
 *
 * Gets the value that is stored in @settings for @key and converts it
 * to the flags value that it represents.
 *
 * In order to use this function the type of the value must be an array
 * of strings and it must be marked in the schema file as an flags type.
 *
 * It is a programmer error to give a @key that isn't contained in the
 * schema for @settings or is not marked as a flags type.
 *
 * If the value stored in the configuration database is not a valid
 * value for the flags type then this function will return the default
 * value.
 *
 * Returns: the flags value
 * Since: 2.26
 */


/**
 * g_settings_get_has_unapplied:
 * @settings: a #GSettings object
 *
 * Returns whether the #GSettings object has any unapplied
 * changes.  This can only be the case if it is in 'delayed-apply' mode.
 *
 * Returns: %TRUE if @settings has unapplied changes
 * Since: 2.26
 */


/**
 * g_settings_get_int:
 * @settings: a #GSettings object
 * @key: the key to get the value for
 *
 * Gets the value that is stored at @key in @settings.
 *
 * A convenience variant of g_settings_get() for 32-bit integers.
 *
 * It is a programmer error to give a @key that isn't specified as
 * having a int32 type in the schema for @settings.
 *
 * Returns: an integer
 * Since: 2.26
 */


/**
 * g_settings_get_mapped:
 * @settings: a #GSettings object
 * @key: the key to get the value for
 * @mapping: (scope call): the function to map the value in the settings database to the value used by the application
 * @user_data: user data for @mapping
 *
 * Gets the value that is stored at @key in @settings, subject to
 * application-level validation/mapping.
 *
 * You should use this function when the application needs to perform
 * some processing on the value of the key (for example, parsing).  The
 * @mapping function performs that processing.  If the function
 * indicates that the processing was unsuccessful (due to a parse error,
 * for example) then the mapping is tried again with another value.
 *
 * This allows a robust 'fall back to defaults' behaviour to be
 * implemented somewhat automatically.
 *
 * The first value that is tried is the user's setting for the key.  If
 * the mapping function fails to map this value, other values may be
 * tried in an unspecified order (system or site defaults, translated
 * schema default values, untranslated schema default values, etc).
 *
 * If the mapping function fails for all possible values, one additional
 * attempt is made: the mapping function is called with a %NULL value.
 * If the mapping function still indicates failure at this point then
 * the application will be aborted.
 *
 * The result parameter for the @mapping function is pointed to a
 * #gpointer which is initially set to %NULL.  The same pointer is given
 * to each invocation of @mapping.  The final value of that #gpointer is
 * what is returned by this function.  %NULL is valid; it is returned
 * just as any other value would be.
 *
 * Returns: (transfer full): the result, which may be %NULL
 */


/**
 * g_settings_get_range:
 * @settings: a #GSettings
 * @key: the key to query the range of
 *
 * Queries the range of a key.
 *
 * This function will return a #GVariant that fully describes the range
 * of values that are valid for @key.
 *
 * The type of #GVariant returned is <literal>(sv)</literal>.  The
 * string describes the type of range restriction in effect.  The type
 * and meaning of the value contained in the variant depends on the
 * string.
 *
 * If the string is <literal>'type'</literal> then the variant contains
 * an empty array.  The element type of that empty array is the expected
 * type of value and all values of that type are valid.
 *
 * If the string is <literal>'enum'</literal> then the variant contains
 * an array enumerating the possible values.  Each item in the array is
 * a possible valid value and no other values are valid.
 *
 * If the string is <literal>'flags'</literal> then the variant contains
 * an array.  Each item in the array is a value that may appear zero or
 * one times in an array to be used as the value for this key.  For
 * example, if the variant contained the array <literal>['x',
 * 'y']</literal> then the valid values for the key would be
 * <literal>[]</literal>, <literal>['x']</literal>,
 * <literal>['y']</literal>, <literal>['x', 'y']</literal> and
 * <literal>['y', 'x']</literal>.
 *
 * Finally, if the string is <literal>'range'</literal> then the variant
 * contains a pair of like-typed values -- the minimum and maximum
 * permissible values for this key.
 *
 * This information should not be used by normal programs.  It is
 * considered to be a hint for introspection purposes.  Normal programs
 * should already know what is permitted by their own schema.  The
 * format may change in any way in the future -- but particularly, new
 * forms may be added to the possibilities described above.
 *
 * It is a programmer error to give a @key that isn't contained in the
 * schema for @settings.
 *
 * You should free the returned value with g_variant_unref() when it is
 * no longer needed.
 *
 * Returns: a #GVariant describing the range
 * Since: 2.28
 */


/**
 * g_settings_get_string:
 * @settings: a #GSettings object
 * @key: the key to get the value for
 *
 * Gets the value that is stored at @key in @settings.
 *
 * A convenience variant of g_settings_get() for strings.
 *
 * It is a programmer error to give a @key that isn't specified as
 * having a string type in the schema for @settings.
 *
 * Returns: a newly-allocated string
 * Since: 2.26
 */


/**
 * g_settings_get_strv:
 * @settings: a #GSettings object
 * @key: the key to get the value for
 *
 * A convenience variant of g_settings_get() for string arrays.
 *
 * It is a programmer error to give a @key that isn't specified as
 * having an array of strings type in the schema for @settings.
 *
 * Returns: (array zero-terminated=1) (transfer full): a newly-allocated, %NULL-terminated array of strings, the value that is stored at @key in @settings.
 * Since: 2.26
 */


/**
 * g_settings_get_uint:
 * @settings: a #GSettings object
 * @key: the key to get the value for
 *
 * Gets the value that is stored at @key in @settings.
 *
 * A convenience variant of g_settings_get() for 32-bit unsigned
 * integers.
 *
 * It is a programmer error to give a @key that isn't specified as
 * having a uint32 type in the schema for @settings.
 *
 * Returns: an unsigned integer
 * Since: 2.30
 */


/**
 * g_settings_get_value:
 * @settings: a #GSettings object
 * @key: the key to get the value for
 *
 * Gets the value that is stored in @settings for @key.
 *
 * It is a programmer error to give a @key that isn't contained in the
 * schema for @settings.
 *
 * Returns: a new #GVariant
 * Since: 2.26
 */


/**
 * g_settings_is_writable:
 * @settings: a #GSettings object
 * @name: the name of a key
 *
 * Finds out if a key can be written or not
 *
 * Returns: %TRUE if the key @name is writable
 * Since: 2.26
 */


/**
 * g_settings_list_children:
 * @settings: a #GSettings object
 *
 * Gets the list of children on @settings.
 *
 * The list is exactly the list of strings for which it is not an error
 * to call g_settings_get_child().
 *
 * For GSettings objects that are lists, this value can change at any
 * time and you should connect to the "children-changed" signal to watch
 * for those changes.  Note that there is a race condition here: you may
 * request a child after listing it only for it to have been destroyed
 * in the meantime.  For this reason, g_settings_get_child() may return
 * %NULL even for a child that was listed by this function.
 *
 * For GSettings objects that are not lists, you should probably not be
 * calling this function from "normal" code (since you should already
 * know what children are in your schema).  This function may still be
 * useful there for introspection reasons, however.
 *
 * You should free the return value with g_strfreev() when you are done
 * with it.
 *
 * Returns: (transfer full) (element-type utf8): a list of the children on @settings
 */


/**
 * g_settings_list_keys:
 * @settings: a #GSettings object
 *
 * Introspects the list of keys on @settings.
 *
 * You should probably not be calling this function from "normal" code
 * (since you should already know what keys are in your schema).  This
 * function is intended for introspection reasons.
 *
 * You should free the return value with g_strfreev() when you are done
 * with it.
 *
 * Returns: (transfer full) (element-type utf8): a list of the keys on @settings
 */


/**
 * g_settings_list_relocatable_schemas:
 *
 * Gets a list of the relocatable #GSettings schemas installed on the
 * system.  These are schemas that do not provide their own path.  It is
 * usual to instantiate these schemas directly, but if you want to you
 * can use g_settings_new_with_path() to specify the path.
 *
 * The output of this function, taken together with the output of
 * g_settings_list_schemas() represents the complete list of all
 * installed schemas.
 *
 * Returns: (element-type utf8) (transfer none): a list of relocatable #GSettings schemas that are available.  The list must not be modified or freed.
 * Since: 2.28
 */


/**
 * g_settings_list_schemas:
 *
 * Gets a list of the #GSettings schemas installed on the system.  The
 * returned list is exactly the list of schemas for which you may call
 * g_settings_new() without adverse effects.
 *
 * This function does not list the schemas that do not provide their own
 * paths (ie: schemas for which you must use
 * g_settings_new_with_path()).  See
 * g_settings_list_relocatable_schemas() for that.
 *
 * Returns: (element-type utf8) (transfer none): a list of #GSettings schemas that are available.  The list must not be modified or freed.
 * Since: 2.26
 */


/**
 * g_settings_new:
 * @schema_id: the id of the schema
 *
 * Creates a new #GSettings object with the schema specified by
 * @schema_id.
 *
 * Signals on the newly created #GSettings object will be dispatched
 * via the thread-default #GMainContext in effect at the time of the
 * call to g_settings_new().  The new #GSettings will hold a reference
 * on the context.  See g_main_context_push_thread_default().
 *
 * Returns: a new #GSettings object
 * Since: 2.26
 */


/**
 * g_settings_new_full:
 * @schema: a #GSettingsSchema
 * @backend: (allow-none): a #GSettingsBackend
 * @path: (allow-none): the path to use
 *
 * Creates a new #GSettings object with a given schema, backend and
 * path.
 *
 * It should be extremely rare that you ever want to use this function.
 * It is made available for advanced use-cases (such as plugin systems
 * that want to provide access to schemas loaded from custom locations,
 * etc).
 *
 * At the most basic level, a #GSettings object is a pure composition of
 * 4 things: a #GSettingsSchema, a #GSettingsBackend, a path within that
 * backend, and a #GMainContext to which signals are dispatched.
 *
 * This constructor therefore gives you full control over constructing
 * #GSettings instances.  The first 4 parameters are given directly as
 * @schema, @backend and @path, and the main context is taken from the
 * thread-default (as per g_settings_new()).
 *
 * If @backend is %NULL then the default backend is used.
 *
 * If @path is %NULL then the path from the schema is used.  It is an
 * error f @path is %NULL and the schema has no path of its own or if
 * @path is non-%NULL and not equal to the path that the schema does
 * have.
 *
 * Returns: a new #GSettings object
 * Since: 2.32
 */


/**
 * g_settings_new_with_backend:
 * @schema_id: the id of the schema
 * @backend: the #GSettingsBackend to use
 *
 * Creates a new #GSettings object with the schema specified by
 * @schema_id and a given #GSettingsBackend.
 *
 * Creating a #GSettings object with a different backend allows accessing
 * settings from a database other than the usual one. For example, it may make
 * sense to pass a backend corresponding to the "defaults" settings database on
 * the system to get a settings object that modifies the system default
 * settings instead of the settings for this user.
 *
 * Returns: a new #GSettings object
 * Since: 2.26
 */


/**
 * g_settings_new_with_backend_and_path:
 * @schema_id: the id of the schema
 * @backend: the #GSettingsBackend to use
 * @path: the path to use
 *
 * Creates a new #GSettings object with the schema specified by
 * @schema_id and a given #GSettingsBackend and path.
 *
 * This is a mix of g_settings_new_with_backend() and
 * g_settings_new_with_path().
 *
 * Returns: a new #GSettings object
 * Since: 2.26
 */


/**
 * g_settings_new_with_path:
 * @schema_id: the id of the schema
 * @path: the path to use
 *
 * Creates a new #GSettings object with the relocatable schema specified
 * by @schema_id and a given path.
 *
 * You only need to do this if you want to directly create a settings
 * object with a schema that doesn't have a specified path of its own.
 * That's quite rare.
 *
 * It is a programmer error to call this function for a schema that
 * has an explicitly specified path.
 *
 * Returns: a new #GSettings object
 * Since: 2.26
 */


/**
 * g_settings_range_check:
 * @settings: a #GSettings
 * @key: the key to check
 * @value: the value to check
 *
 * Checks if the given @value is of the correct type and within the
 * permitted range for @key.
 *
 * This API is not intended to be used by normal programs -- they should
 * already know what is permitted by their own schemas.  This API is
 * meant to be used by programs such as editors or commandline tools.
 *
 * It is a programmer error to give a @key that isn't contained in the
 * schema for @settings.
 *
 * Returns: %TRUE if @value is valid for @key
 * Since: 2.28
 */


/**
 * g_settings_reset:
 * @settings: a #GSettings object
 * @key: the name of a key
 *
 * Resets @key to its default value.
 *
 * This call resets the key, as much as possible, to its default value.
 * That might the value specified in the schema or the one set by the
 * administrator.
 */


/**
 * g_settings_revert:
 * @settings: a #GSettings instance
 *
 * Reverts all non-applied changes to the settings.  This function
 * does nothing unless @settings is in 'delay-apply' mode; see
 * g_settings_delay().  In the normal case settings are always applied
 * immediately.
 *
 * Change notifications will be emitted for affected keys.
 */


/**
 * g_settings_schema_get_id:
 * @schema: a #GSettingsSchema
 *
 * Get the ID of @schema.
 *
 * Returns: (transfer none): the ID
 */


/**
 * g_settings_schema_get_path:
 * @schema: a #GSettingsSchema
 *
 * Gets the path associated with @schema, or %NULL.
 *
 * Schemas may be single-instance or relocatable.  Single-instance
 * schemas correspond to exactly one set of keys in the backend
 * database: those located at the path returned by this function.
 *
 * Relocatable schemas can be referenced by other schemas and can
 * threfore describe multiple sets of keys at different locations.  For
 * relocatable schemas, this function will return %NULL.
 *
 * Returns: (transfer none): the path of the schema, or %NULL
 * Since: 2.32
 */


/**
 * g_settings_schema_ref:
 * @schema: a #GSettingsSchema
 *
 * Increase the reference count of @schema, returning a new reference.
 *
 * Returns: a new reference to @schema
 * Since: 2.32
 */


/**
 * g_settings_schema_source_get_default:
 *
 * Gets the default system schema source.
 *
 * This function is not required for normal uses of #GSettings but it
 * may be useful to authors of plugin management systems or to those who
 * want to introspect the content of schemas.
 *
 * If no schemas are installed, %NULL will be returned.
 *
 * The returned source may actually consist of multiple schema sources
 * from different directories, depending on which directories were given
 * in <envar>XDG_DATA_DIRS</envar> and
 * <envar>GSETTINGS_SCHEMA_DIR</envar>.  For this reason, all lookups
 * performed against the default source should probably be done
 * recursively.
 *
 * Returns: (transfer none): the default schema source
 * Since: 2.32
 */


/**
 * g_settings_schema_source_lookup:
 * @source: a #GSettingsSchemaSource
 * @schema_id: a schema ID
 * @recursive: %TRUE if the lookup should be recursive
 *
 * Looks up a schema with the identifier @schema_id in @source.
 *
 * This function is not required for normal uses of #GSettings but it
 * may be useful to authors of plugin management systems or to those who
 * want to introspect the content of schemas.
 *
 * If the schema isn't found directly in @source and @recursive is %TRUE
 * then the parent sources will also be checked.
 *
 * If the schema isn't found, %NULL is returned.
 *
 * Returns: (transfer full): a new #GSettingsSchema
 * Since: 2.32
 */


/**
 * g_settings_schema_source_new_from_directory:
 * @directory: the filename of a directory
 * @parent: (allow-none): a #GSettingsSchemaSource, or %NULL
 * @trusted: %TRUE, if the directory is trusted
 * @error: a pointer to a #GError pointer set to %NULL, or %NULL
 *
 * Attempts to create a new schema source corresponding to the contents
 * of the given directory.
 *
 * This function is not required for normal uses of #GSettings but it
 * may be useful to authors of plugin management systems.
 *
 * The directory should contain a file called
 * <filename>gschemas.compiled</filename> as produced by
 * <command>glib-compile-schemas</command>.
 *
 * If @trusted is %TRUE then <filename>gschemas.compiled</filename> is
 * trusted not to be corrupted.  This assumption has a performance
 * advantage, but can result in crashes or inconsistent behaviour in the
 * case of a corrupted file.  Generally, you should set @trusted to
 * %TRUE for files installed by the system and to %FALSE for files in
 * the home directory.
 *
 * If @parent is non-%NULL then there are two effects.
 *
 * First, if g_settings_schema_source_lookup() is called with the
 * @recursive flag set to %TRUE and the schema can not be found in the
 * source, the lookup will recurse to the parent.
 *
 * Second, any references to other schemas specified within this
 * source (ie: <literal>child</literal> or <literal>extents</literal>)
 * references may be resolved from the @parent.
 *
 * For this second reason, except in very unusual situations, the
 * @parent should probably be given as the default schema source, as
 * returned by g_settings_schema_source_get_default().
 *
 * Since: 2.32
 */


/**
 * g_settings_schema_source_ref:
 * @source: a #GSettingsSchemaSource
 *
 * Increase the reference count of @source, returning a new reference.
 *
 * Returns: a new reference to @source
 * Since: 2.32
 */


/**
 * g_settings_schema_source_unref:
 * @source: a #GSettingsSchemaSource
 *
 * Decrease the reference count of @source, possibly freeing it.
 *
 * Since: 2.32
 */


/**
 * g_settings_schema_unref:
 * @schema: a #GSettingsSchema
 *
 * Decrease the reference count of @schema, possibly freeing it.
 *
 * Since: 2.32
 */


/**
 * g_settings_set:
 * @settings: a #GSettings object
 * @key: the name of the key to set
 * @format: a #GVariant format string
 * @...: arguments as per @format
 *
 * Sets @key in @settings to @value.
 *
 * A convenience function that combines g_settings_set_value() with
 * g_variant_new().
 *
 * It is a programmer error to give a @key that isn't contained in the
 * schema for @settings or for the #GVariantType of @format to mismatch
 * the type given in the schema.
 *
 * Returns: %TRUE if setting the key succeeded, %FALSE if the key was not writable
 * Since: 2.26
 */


/**
 * g_settings_set_boolean:
 * @settings: a #GSettings object
 * @key: the name of the key to set
 * @value: the value to set it to
 *
 * Sets @key in @settings to @value.
 *
 * A convenience variant of g_settings_set() for booleans.
 *
 * It is a programmer error to give a @key that isn't specified as
 * having a boolean type in the schema for @settings.
 *
 * Returns: %TRUE if setting the key succeeded, %FALSE if the key was not writable
 * Since: 2.26
 */


/**
 * g_settings_set_double:
 * @settings: a #GSettings object
 * @key: the name of the key to set
 * @value: the value to set it to
 *
 * Sets @key in @settings to @value.
 *
 * A convenience variant of g_settings_set() for doubles.
 *
 * It is a programmer error to give a @key that isn't specified as
 * having a 'double' type in the schema for @settings.
 *
 * Returns: %TRUE if setting the key succeeded, %FALSE if the key was not writable
 * Since: 2.26
 */


/**
 * g_settings_set_enum:
 * @settings: a #GSettings object
 * @key: a key, within @settings
 * @value: an enumerated value
 *
 * Looks up the enumerated type nick for @value and writes it to @key,
 * within @settings.
 *
 * It is a programmer error to give a @key that isn't contained in the
 * schema for @settings or is not marked as an enumerated type, or for
 * @value not to be a valid value for the named type.
 *
 * After performing the write, accessing @key directly with
 * g_settings_get_string() will return the 'nick' associated with
 * @value.
 *
 * Returns: %TRUE, if the set succeeds
 */


/**
 * g_settings_set_flags:
 * @settings: a #GSettings object
 * @key: a key, within @settings
 * @value: a flags value
 *
 * Looks up the flags type nicks for the bits specified by @value, puts
 * them in an array of strings and writes the array to @key, within
 * @settings.
 *
 * It is a programmer error to give a @key that isn't contained in the
 * schema for @settings or is not marked as a flags type, or for @value
 * to contain any bits that are not value for the named type.
 *
 * After performing the write, accessing @key directly with
 * g_settings_get_strv() will return an array of 'nicks'; one for each
 * bit in @value.
 *
 * Returns: %TRUE, if the set succeeds
 */


/**
 * g_settings_set_int:
 * @settings: a #GSettings object
 * @key: the name of the key to set
 * @value: the value to set it to
 *
 * Sets @key in @settings to @value.
 *
 * A convenience variant of g_settings_set() for 32-bit integers.
 *
 * It is a programmer error to give a @key that isn't specified as
 * having a int32 type in the schema for @settings.
 *
 * Returns: %TRUE if setting the key succeeded, %FALSE if the key was not writable
 * Since: 2.26
 */


/**
 * g_settings_set_string:
 * @settings: a #GSettings object
 * @key: the name of the key to set
 * @value: the value to set it to
 *
 * Sets @key in @settings to @value.
 *
 * A convenience variant of g_settings_set() for strings.
 *
 * It is a programmer error to give a @key that isn't specified as
 * having a string type in the schema for @settings.
 *
 * Returns: %TRUE if setting the key succeeded, %FALSE if the key was not writable
 * Since: 2.26
 */


/**
 * g_settings_set_strv:
 * @settings: a #GSettings object
 * @key: the name of the key to set
 * @value: (allow-none) (array zero-terminated=1): the value to set it to, or %NULL
 *
 * Sets @key in @settings to @value.
 *
 * A convenience variant of g_settings_set() for string arrays.  If
 * @value is %NULL, then @key is set to be the empty array.
 *
 * It is a programmer error to give a @key that isn't specified as
 * having an array of strings type in the schema for @settings.
 *
 * Returns: %TRUE if setting the key succeeded, %FALSE if the key was not writable
 * Since: 2.26
 */


/**
 * g_settings_set_uint:
 * @settings: a #GSettings object
 * @key: the name of the key to set
 * @value: the value to set it to
 *
 * Sets @key in @settings to @value.
 *
 * A convenience variant of g_settings_set() for 32-bit unsigned
 * integers.
 *
 * It is a programmer error to give a @key that isn't specified as
 * having a uint32 type in the schema for @settings.
 *
 * Returns: %TRUE if setting the key succeeded, %FALSE if the key was not writable
 * Since: 2.30
 */


/**
 * g_settings_set_value:
 * @settings: a #GSettings object
 * @key: the name of the key to set
 * @value: a #GVariant of the correct type
 *
 * Sets @key in @settings to @value.
 *
 * It is a programmer error to give a @key that isn't contained in the
 * schema for @settings or for @value to have the incorrect type, per
 * the schema.
 *
 * If @value is floating then this function consumes the reference.
 *
 * Returns: %TRUE if setting the key succeeded, %FALSE if the key was not writable
 * Since: 2.26
 */


/**
 * g_settings_sync:
 *
 * Ensures that all pending operations for the given are complete for
 * the default backend.
 *
 * Writes made to a #GSettings are handled asynchronously.  For this
 * reason, it is very unlikely that the changes have it to disk by the
 * time g_settings_set() returns.
 *
 * This call will block until all of the writes have made it to the
 * backend.  Since the mainloop is not running, no change notifications
 * will be dispatched during this call (but some may be queued by the
 * time the call is done).
 */


/**
 * g_settings_unbind:
 * @object: the object
 * @property: the property whose binding is removed
 *
 * Removes an existing binding for @property on @object.
 *
 * Note that bindings are automatically removed when the
 * object is finalized, so it is rarely necessary to call this
 * function.
 *
 * Since: 2.26
 */


/**
 * g_simple_action_group_add_entries:
 * @simple: a #GSimpleActionGroup
 * @entries: (array length=n_entries): a pointer to the first item in an array of #GActionEntry structs
 * @n_entries: the length of @entries, or -1
 * @user_data: the user data for signal connections
 *
 * A convenience function for creating multiple #GSimpleAction instances
 * and adding them to the action group.
 *
 * Since: 2.30
 */


/**
 * g_simple_action_group_insert:
 * @simple: a #GSimpleActionGroup
 * @action: a #GAction
 *
 * Adds an action to the action group.
 *
 * If the action group already contains an action with the same name as
 * @action then the old action is dropped from the group.
 *
 * The action group takes its own reference on @action.
 *
 * Since: 2.28
 */


/**
 * g_simple_action_group_lookup:
 * @simple: a #GSimpleActionGroup
 * @action_name: the name of an action
 *
 * Looks up the action with the name @action_name in the group.
 *
 * If no such action exists, returns %NULL.
 *
 * Returns: (transfer none): a #GAction, or %NULL
 * Since: 2.28
 */


/**
 * g_simple_action_group_new:
 *
 * Creates a new, empty, #GSimpleActionGroup.
 *
 * Returns: a new #GSimpleActionGroup
 * Since: 2.28
 */


/**
 * g_simple_action_group_remove:
 * @simple: a #GSimpleActionGroup
 * @action_name: the name of the action
 *
 * Removes the named action from the action group.
 *
 * If no action of this name is in the group then nothing happens.
 *
 * Since: 2.28
 */


/**
 * g_simple_action_new:
 * @name: the name of the action
 * @parameter_type: (allow-none): the type of parameter to the activate function
 *
 * Creates a new action.
 *
 * The created action is stateless.  See g_simple_action_new_stateful().
 *
 * Returns: a new #GSimpleAction
 * Since: 2.28
 */


/**
 * g_simple_action_new_stateful:
 * @name: the name of the action
 * @parameter_type: (allow-none): the type of the parameter to the activate function
 * @state: the initial state of the action
 *
 * Creates a new stateful action.
 *
 * @state is the initial state of the action.  All future state values
 * must have the same #GVariantType as the initial state.
 *
 * If the @state GVariant is floating, it is consumed.
 *
 * Returns: a new #GSimpleAction
 * Since: 2.28
 */


/**
 * g_simple_action_set_enabled:
 * @simple: a #GSimpleAction
 * @enabled: whether the action is enabled
 *
 * Sets the action as enabled or not.
 *
 * An action must be enabled in order to be activated or in order to
 * have its state changed from outside callers.
 *
 * This should only be called by the implementor of the action.  Users
 * of the action should not attempt to modify its enabled flag.
 *
 * Since: 2.28
 */


/**
 * g_simple_action_set_state:
 * @simple: a #GSimpleAction
 * @value: the new #GVariant for the state
 *
 * Sets the state of the action.
 *
 * This directly updates the 'state' property to the given value.
 *
 * This should only be called by the implementor of the action.  Users
 * of the action should not attempt to directly modify the 'state'
 * property.  Instead, they should call g_action_change_state() to
 * request the change.
 *
 * Since: 2.30
 */


/**
 * g_simple_async_report_error_in_idle: (skip)
 * @object: (allow-none): a #GObject, or %NULL.
 * @callback: a #GAsyncReadyCallback.
 * @user_data: user data passed to @callback.
 * @domain: a #GQuark containing the error domain (usually #G_IO_ERROR).
 * @code: a specific error code.
 * @format: a formatted error reporting string.
 * @...: a list of variables to fill in @format.
 *
 * Reports an error in an asynchronous function in an idle function by
 * directly setting the contents of the #GAsyncResult with the given error
 * information.
 */


/**
 * g_simple_async_report_gerror_in_idle:
 * @object: (allow-none): a #GObject, or %NULL
 * @callback: (scope async): a #GAsyncReadyCallback.
 * @user_data: (closure): user data passed to @callback.
 * @error: the #GError to report
 *
 * Reports an error in an idle function. Similar to
 * g_simple_async_report_error_in_idle(), but takes a #GError rather
 * than building a new one.
 */


/**
 * g_simple_async_report_take_gerror_in_idle: (skip)
 * @object: (allow-none): a #GObject, or %NULL
 * @callback: a #GAsyncReadyCallback.
 * @user_data: user data passed to @callback.
 * @error: the #GError to report
 *
 * Reports an error in an idle function. Similar to
 * g_simple_async_report_gerror_in_idle(), but takes over the caller's
 * ownership of @error, so the caller does not have to free it any more.
 *
 * Since: 2.28
 */


/**
 * g_simple_async_result_complete:
 * @simple: a #GSimpleAsyncResult.
 *
 * Completes an asynchronous I/O job immediately. Must be called in
 * the thread where the asynchronous result was to be delivered, as it
 * invokes the callback directly. If you are in a different thread use
 * g_simple_async_result_complete_in_idle().
 *
 * Calling this function takes a reference to @simple for as long as
 * is needed to complete the call.
 */


/**
 * g_simple_async_result_complete_in_idle:
 * @simple: a #GSimpleAsyncResult.
 *
 * Completes an asynchronous function in an idle handler in the <link
 * linkend="g-main-context-push-thread-default">thread-default main
 * loop</link> of the thread that @simple was initially created in
 * (and re-pushes that context around the invocation of the callback).
 *
 * Calling this function takes a reference to @simple for as long as
 * is needed to complete the call.
 */


/**
 * g_simple_async_result_get_op_res_gboolean:
 * @simple: a #GSimpleAsyncResult.
 *
 * Gets the operation result boolean from within the asynchronous result.
 *
 * Returns: %TRUE if the operation's result was %TRUE, %FALSE if the operation's result was %FALSE.
 */


/**
 * g_simple_async_result_get_op_res_gpointer: (skip)
 * @simple: a #GSimpleAsyncResult.
 *
 * Gets a pointer result as returned by the asynchronous function.
 *
 * Returns: a pointer from the result.
 */


/**
 * g_simple_async_result_get_op_res_gssize:
 * @simple: a #GSimpleAsyncResult.
 *
 * Gets a gssize from the asynchronous result.
 *
 * Returns: a gssize returned from the asynchronous function.
 */


/**
 * g_simple_async_result_get_source_tag: (skip)
 * @simple: a #GSimpleAsyncResult.
 *
 * Gets the source tag for the #GSimpleAsyncResult.
 *
 * Returns: a #gpointer to the source object for the #GSimpleAsyncResult.
 */


/**
 * g_simple_async_result_is_valid:
 * @result: the #GAsyncResult passed to the _finish function.
 * @source: the #GObject passed to the _finish function.
 * @source_tag: the asynchronous function.
 *
 * Ensures that the data passed to the _finish function of an async
 * operation is consistent.  Three checks are performed.
 *
 * First, @result is checked to ensure that it is really a
 * #GSimpleAsyncResult.  Second, @source is checked to ensure that it
 * matches the source object of @result.  Third, @source_tag is
 * checked to ensure that it is either %NULL (as it is when the result was
 * created by g_simple_async_report_error_in_idle() or
 * g_simple_async_report_gerror_in_idle()) or equal to the
 * @source_tag argument given to g_simple_async_result_new() (which, by
 * convention, is a pointer to the _async function corresponding to the
 * _finish function from which this function is called).
 *
 * Returns: #TRUE if all checks passed or #FALSE if any failed.
 * Since: 2.20
 */


/**
 * g_simple_async_result_new:
 * @source_object: (allow-none): a #GObject, or %NULL.
 * @callback: (scope async): a #GAsyncReadyCallback.
 * @user_data: (closure): user data passed to @callback.
 * @source_tag: the asynchronous function.
 *
 * Creates a #GSimpleAsyncResult.
 *
 * The common convention is to create the #GSimpleAsyncResult in the
 * function that starts the asynchronous operation and use that same
 * function as the @source_tag.
 *
 * If your operation supports cancellation with #GCancellable (which it
 * probably should) then you should provide the user's cancellable to
 * g_simple_async_result_set_check_cancellable() immediately after
 * this function returns.
 *
 * Returns: a #GSimpleAsyncResult.
 */


/**
 * g_simple_async_result_new_error:
 * @source_object: (allow-none): a #GObject, or %NULL.
 * @callback: (scope async): a #GAsyncReadyCallback.
 * @user_data: (closure): user data passed to @callback.
 * @domain: a #GQuark.
 * @code: an error code.
 * @format: a string with format characters.
 * @...: a list of values to insert into @format.
 *
 * Creates a new #GSimpleAsyncResult with a set error.
 *
 * Returns: a #GSimpleAsyncResult.
 */


/**
 * g_simple_async_result_new_from_error:
 * @source_object: (allow-none): a #GObject, or %NULL.
 * @callback: (scope async): a #GAsyncReadyCallback.
 * @user_data: (closure): user data passed to @callback.
 * @error: a #GError
 *
 * Creates a #GSimpleAsyncResult from an error condition.
 *
 * Returns: a #GSimpleAsyncResult.
 */


/**
 * g_simple_async_result_new_take_error: (skip)
 * @source_object: (allow-none): a #GObject, or %NULL
 * @callback: (scope async): a #GAsyncReadyCallback
 * @user_data: (closure): user data passed to @callback
 * @error: a #GError
 *
 * Creates a #GSimpleAsyncResult from an error condition, and takes over the
 * caller's ownership of @error, so the caller does not need to free it anymore.
 *
 * Returns: a #GSimpleAsyncResult
 * Since: 2.28
 */


/**
 * g_simple_async_result_propagate_error:
 * @simple: a #GSimpleAsyncResult.
 * @dest: (out): a location to propagate the error to.
 *
 * Propagates an error from within the simple asynchronous result to
 * a given destination.
 *
 * If the #GCancellable given to a prior call to
 * g_simple_async_result_set_check_cancellable() is cancelled then this
 * function will return %TRUE with @dest set appropriately.
 *
 * Returns: %TRUE if the error was propagated to @dest. %FALSE otherwise.
 */


/**
 * g_simple_async_result_run_in_thread: (skip)
 * @simple: a #GSimpleAsyncResult.
 * @func: a #GSimpleAsyncThreadFunc.
 * @io_priority: the io priority of the request.
 * @cancellable: (allow-none): optional #GCancellable object, %NULL to ignore.
 *
 * Runs the asynchronous job in a separate thread and then calls
 * g_simple_async_result_complete_in_idle() on @simple to return
 * the result to the appropriate main loop.
 *
 * Calling this function takes a reference to @simple for as long as
 * is needed to run the job and report its completion.
 */


/**
 * g_simple_async_result_set_check_cancellable:
 * @simple: a #GSimpleAsyncResult
 * @check_cancellable: (allow-none): a #GCancellable to check, or %NULL to unset
 *
 * Sets a #GCancellable to check before dispatching results.
 *
 * This function has one very specific purpose: the provided cancellable
 * is checked at the time of g_simple_async_result_propagate_error() If
 * it is cancelled, these functions will return an "Operation was
 * cancelled" error (%G_IO_ERROR_CANCELLED).
 *
 * Implementors of cancellable asynchronous functions should use this in
 * order to provide a guarantee to their callers that cancelling an
 * async operation will reliably result in an error being returned for
 * that operation (even if a positive result for the operation has
 * already been sent as an idle to the main context to be dispatched).
 *
 * The checking described above is done regardless of any call to the
 * unrelated g_simple_async_result_set_handle_cancellation() function.
 *
 * Since: 2.32
 */


/**
 * g_simple_async_result_set_error: (skip)
 * @simple: a #GSimpleAsyncResult.
 * @domain: a #GQuark (usually #G_IO_ERROR).
 * @code: an error code.
 * @format: a formatted error reporting string.
 * @...: a list of variables to fill in @format.
 *
 * Sets an error within the asynchronous result without a #GError.
 */


/**
 * g_simple_async_result_set_error_va: (skip)
 * @simple: a #GSimpleAsyncResult.
 * @domain: a #GQuark (usually #G_IO_ERROR).
 * @code: an error code.
 * @format: a formatted error reporting string.
 * @args: va_list of arguments.
 *
 * Sets an error within the asynchronous result without a #GError.
 * Unless writing a binding, see g_simple_async_result_set_error().
 */


/**
 * g_simple_async_result_set_from_error:
 * @simple: a #GSimpleAsyncResult.
 * @error: #GError.
 *
 * Sets the result from a #GError.
 */


/**
 * g_simple_async_result_set_handle_cancellation:
 * @simple: a #GSimpleAsyncResult.
 * @handle_cancellation: a #gboolean.
 *
 * Sets whether to handle cancellation within the asynchronous operation.
 *
 * This function has nothing to do with
 * g_simple_async_result_set_check_cancellable().  It only refers to the
 * #GCancellable passed to g_simple_async_result_run_in_thread().
 */


/**
 * g_simple_async_result_set_op_res_gboolean:
 * @simple: a #GSimpleAsyncResult.
 * @op_res: a #gboolean.
 *
 * Sets the operation result to a boolean within the asynchronous result.
 */


/**
 * g_simple_async_result_set_op_res_gpointer: (skip)
 * @simple: a #GSimpleAsyncResult.
 * @op_res: a pointer result from an asynchronous function.
 * @destroy_op_res: a #GDestroyNotify function.
 *
 * Sets the operation result within the asynchronous result to a pointer.
 */


/**
 * g_simple_async_result_set_op_res_gssize:
 * @simple: a #GSimpleAsyncResult.
 * @op_res: a #gssize.
 *
 * Sets the operation result within the asynchronous result to
 * the given @op_res.
 */


/**
 * g_simple_async_result_take_error: (skip)
 * @simple: a #GSimpleAsyncResult
 * @error: a #GError
 *
 * Sets the result from @error, and takes over the caller's ownership
 * of @error, so the caller does not need to free it any more.
 *
 * Since: 2.28
 */


/**
 * g_simple_permission_new:
 * @allowed: %TRUE if the action is allowed
 *
 * Creates a new #GPermission instance that represents an action that is
 * either always or never allowed.
 *
 * Returns: the #GSimplePermission, as a #GPermission
 * Since: 2.26
 */


/**
 * g_socket_accept:
 * @socket: a #GSocket.
 * @cancellable: (allow-none): a %GCancellable or %NULL
 * @error: #GError for error reporting, or %NULL to ignore.
 *
 * Accept incoming connections on a connection-based socket. This removes
 * the first outstanding connection request from the listening socket and
 * creates a #GSocket object for it.
 *
 * The @socket must be bound to a local address with g_socket_bind() and
 * must be listening for incoming connections (g_socket_listen()).
 *
 * If there are no outstanding connections then the operation will block
 * or return %G_IO_ERROR_WOULD_BLOCK if non-blocking I/O is enabled.
 * To be notified of an incoming connection, wait for the %G_IO_IN condition.
 *
 * Returns: (transfer full): a new #GSocket, or %NULL on error. Free the returned object with g_object_unref().
 * Since: 2.22
 */


/**
 * g_socket_address_enumerator_next:
 * @enumerator: a #GSocketAddressEnumerator
 * @cancellable: (allow-none): optional #GCancellable object, %NULL to ignore.
 * @error: a #GError.
 *
 * Retrieves the next #GSocketAddress from @enumerator. Note that this
 * may block for some amount of time. (Eg, a #GNetworkAddress may need
 * to do a DNS lookup before it can return an address.) Use
 * g_socket_address_enumerator_next_async() if you need to avoid
 * blocking.
 *
 * If @enumerator is expected to yield addresses, but for some reason
 * is unable to (eg, because of a DNS error), then the first call to
 * g_socket_address_enumerator_next() will return an appropriate error
 * in *@error. However, if the first call to
 * g_socket_address_enumerator_next() succeeds, then any further
 * internal errors (other than @cancellable being triggered) will be
 * ignored.
 *
 * Returns: (transfer full): a #GSocketAddress (owned by the caller), or %NULL on error (in which case *@error will be set) or if there are no more addresses.
 */


/**
 * g_socket_address_enumerator_next_async:
 * @enumerator: a #GSocketAddressEnumerator
 * @cancellable: (allow-none): optional #GCancellable object, %NULL to ignore.
 * @callback: (scope async): a #GAsyncReadyCallback to call when the request is satisfied
 * @user_data: (closure): the data to pass to callback function
 *
 * Asynchronously retrieves the next #GSocketAddress from @enumerator
 * and then calls @callback, which must call
 * g_socket_address_enumerator_next_finish() to get the result.
 */


/**
 * g_socket_address_enumerator_next_finish:
 * @enumerator: a #GSocketAddressEnumerator
 * @result: a #GAsyncResult
 * @error: a #GError
 *
 * Retrieves the result of a completed call to
 * g_socket_address_enumerator_next_async(). See
 * g_socket_address_enumerator_next() for more information about
 * error handling.
 *
 * Returns: (transfer full): a #GSocketAddress (owned by the caller), or %NULL on error (in which case *@error will be set) or if there are no more addresses.
 */


/**
 * g_socket_address_get_family:
 * @address: a #GSocketAddress
 *
 * Gets the socket family type of @address.
 *
 * Returns: the socket family type of @address.
 * Since: 2.22
 */


/**
 * g_socket_address_get_native_size:
 * @address: a #GSocketAddress
 *
 * Gets the size of @address's native <type>struct sockaddr</type>.
 * You can use this to allocate memory to pass to
 * g_socket_address_to_native().
 *
 * Returns: the size of the native <type>struct sockaddr</type> that @address represents
 * Since: 2.22
 */


/**
 * g_socket_address_new_from_native:
 * @native: a pointer to a <type>struct sockaddr</type>
 * @len: the size of the memory location pointed to by @native
 *
 * Creates a #GSocketAddress subclass corresponding to the native
 * <type>struct sockaddr</type> @native.
 *
 * Returns: a new #GSocketAddress if @native could successfully be converted, otherwise %NULL.
 * Since: 2.22
 */


/**
 * g_socket_address_to_native:
 * @address: a #GSocketAddress
 * @dest: a pointer to a memory location that will contain the native <type>struct sockaddr</type>.
 * @destlen: the size of @dest. Must be at least as large as g_socket_address_get_native_size().
 * @error: #GError for error reporting, or %NULL to ignore.
 *
 * Converts a #GSocketAddress to a native <type>struct
 * sockaddr</type>, which can be passed to low-level functions like
 * connect() or bind().
 *
 * If not enough space is available, a %G_IO_ERROR_NO_SPACE error is
 * returned. If the address type is not known on the system
 * then a %G_IO_ERROR_NOT_SUPPORTED error is returned.
 *
 * Returns: %TRUE if @dest was filled in, %FALSE on error
 * Since: 2.22
 */


/**
 * g_socket_bind:
 * @socket: a #GSocket.
 * @address: a #GSocketAddress specifying the local address.
 * @allow_reuse: whether to allow reusing this address
 * @error: #GError for error reporting, or %NULL to ignore.
 *
 * When a socket is created it is attached to an address family, but it
 * doesn't have an address in this family. g_socket_bind() assigns the
 * address (sometimes called name) of the socket.
 *
 * It is generally required to bind to a local address before you can
 * receive connections. (See g_socket_listen() and g_socket_accept() ).
 * In certain situations, you may also want to bind a socket that will be
 * used to initiate connections, though this is not normally required.
 *
 * @allow_reuse should be %TRUE for server sockets (sockets that you will
 * eventually call g_socket_accept() on), and %FALSE for client sockets.
 * (Specifically, if it is %TRUE, then g_socket_bind() will set the
 * %SO_REUSEADDR flag on the socket, allowing it to bind @address even if
 * that address was previously used by another socket that has not yet been
 * fully cleaned-up by the kernel. Failing to set this flag on a server
 * socket may cause the bind call to return %G_IO_ERROR_ADDRESS_IN_USE if
 * the server program is stopped and then immediately restarted.)
 *
 * Returns: %TRUE on success, %FALSE on error.
 * Since: 2.22
 */


/**
 * g_socket_check_connect_result:
 * @socket: a #GSocket
 * @error: #GError for error reporting, or %NULL to ignore.
 *
 * Checks and resets the pending connect error for the socket.
 * This is used to check for errors when g_socket_connect() is
 * used in non-blocking mode.
 *
 * Returns: %TRUE if no error, %FALSE otherwise, setting @error to the error
 * Since: 2.22
 */


/**
 * g_socket_client_add_application_proxy:
 * @client: a #GSocketClient
 * @protocol: The proxy protocol
 *
 * Enable proxy protocols to be handled by the application. When the
 * indicated proxy protocol is returned by the #GProxyResolver,
 * #GSocketClient will consider this protocol as supported but will
 * not try to find a #GProxy instance to handle handshaking. The
 * application must check for this case by calling
 * g_socket_connection_get_remote_address() on the returned
 * #GSocketConnection, and seeing if it's a #GProxyAddress of the
 * appropriate type, to determine whether or not it needs to handle
 * the proxy handshaking itself.
 *
 * This should be used for proxy protocols that are dialects of
 * another protocol such as HTTP proxy. It also allows cohabitation of
 * proxy protocols that are reused between protocols. A good example
 * is HTTP. It can be used to proxy HTTP, FTP and Gopher and can also
 * be use as generic socket proxy through the HTTP CONNECT method.
 *
 * When the proxy is detected as being an application proxy, TLS handshake
 * will be skipped. This is required to let the application do the proxy
 * specific handshake.
 */


/**
 * g_socket_client_connect:
 * @client: a #GSocketClient.
 * @connectable: a #GSocketConnectable specifying the remote address.
 * @cancellable: (allow-none): optional #GCancellable object, %NULL to ignore.
 * @error: #GError for error reporting, or %NULL to ignore.
 *
 * Tries to resolve the @connectable and make a network connection to it.
 *
 * Upon a successful connection, a new #GSocketConnection is constructed
 * and returned.  The caller owns this new object and must drop their
 * reference to it when finished with it.
 *
 * The type of the #GSocketConnection object returned depends on the type of
 * the underlying socket that is used. For instance, for a TCP/IP connection
 * it will be a #GTcpConnection.
 *
 * The socket created will be the same family as the address that the
 * @connectable resolves to, unless family is set with g_socket_client_set_family()
 * or indirectly via g_socket_client_set_local_address(). The socket type
 * defaults to %G_SOCKET_TYPE_STREAM but can be set with
 * g_socket_client_set_socket_type().
 *
 * If a local address is specified with g_socket_client_set_local_address() the
 * socket will be bound to this address before connecting.
 *
 * Returns: (transfer full): a #GSocketConnection on success, %NULL on error.
 * Since: 2.22
 */


/**
 * g_socket_client_connect_async:
 * @client: a #GSocketClient
 * @connectable: a #GSocketConnectable specifying the remote address.
 * @cancellable: (allow-none): a #GCancellable, or %NULL
 * @callback: (scope async): a #GAsyncReadyCallback
 * @user_data: (closure): user data for the callback
 *
 * This is the asynchronous version of g_socket_client_connect().
 *
 * When the operation is finished @callback will be
 * called. You can then call g_socket_client_connect_finish() to get
 * the result of the operation.
 *
 * Since: 2.22
 */


/**
 * g_socket_client_connect_finish:
 * @client: a #GSocketClient.
 * @result: a #GAsyncResult.
 * @error: a #GError location to store the error occurring, or %NULL to ignore.
 *
 * Finishes an async connect operation. See g_socket_client_connect_async()
 *
 * Returns: (transfer full): a #GSocketConnection on success, %NULL on error.
 * Since: 2.22
 */


/**
 * g_socket_client_connect_to_host:
 * @client: a #GSocketClient
 * @host_and_port: the name and optionally port of the host to connect to
 * @default_port: the default port to connect to
 * @cancellable: (allow-none): a #GCancellable, or %NULL
 * @error: a pointer to a #GError, or %NULL
 *
 * This is a helper function for g_socket_client_connect().
 *
 * Attempts to create a TCP connection to the named host.
 *
 * @host_and_port may be in any of a number of recognized formats; an IPv6
 * address, an IPv4 address, or a domain name (in which case a DNS
 * lookup is performed).  Quoting with [] is supported for all address
 * types.  A port override may be specified in the usual way with a
 * colon.  Ports may be given as decimal numbers or symbolic names (in
 * which case an /etc/services lookup is performed).
 *
 * If no port override is given in @host_and_port then @default_port will be
 * used as the port number to connect to.
 *
 * In general, @host_and_port is expected to be provided by the user (allowing
 * them to give the hostname, and a port override if necessary) and
 * @default_port is expected to be provided by the application.
 *
 * In the case that an IP address is given, a single connection
 * attempt is made.  In the case that a name is given, multiple
 * connection attempts may be made, in turn and according to the
 * number of address records in DNS, until a connection succeeds.
 *
 * Upon a successful connection, a new #GSocketConnection is constructed
 * and returned.  The caller owns this new object and must drop their
 * reference to it when finished with it.
 *
 * In the event of any failure (DNS error, service not found, no hosts
 * connectable) %NULL is returned and @error (if non-%NULL) is set
 * accordingly.
 *
 * Returns: (transfer full): a #GSocketConnection on success, %NULL on error.
 * Since: 2.22
 */


/**
 * g_socket_client_connect_to_host_async:
 * @client: a #GSocketClient
 * @host_and_port: the name and optionally the port of the host to connect to
 * @default_port: the default port to connect to
 * @cancellable: (allow-none): a #GCancellable, or %NULL
 * @callback: (scope async): a #GAsyncReadyCallback
 * @user_data: (closure): user data for the callback
 *
 * This is the asynchronous version of g_socket_client_connect_to_host().
 *
 * When the operation is finished @callback will be
 * called. You can then call g_socket_client_connect_to_host_finish() to get
 * the result of the operation.
 *
 * Since: 2.22
 */


/**
 * g_socket_client_connect_to_host_finish:
 * @client: a #GSocketClient.
 * @result: a #GAsyncResult.
 * @error: a #GError location to store the error occurring, or %NULL to ignore.
 *
 * Finishes an async connect operation. See g_socket_client_connect_to_host_async()
 *
 * Returns: (transfer full): a #GSocketConnection on success, %NULL on error.
 * Since: 2.22
 */


/**
 * g_socket_client_connect_to_service:
 * @client: a #GSocketConnection
 * @domain: a domain name
 * @service: the name of the service to connect to
 * @cancellable: (allow-none): a #GCancellable, or %NULL
 * @error: a pointer to a #GError, or %NULL
 *
 * Attempts to create a TCP connection to a service.
 *
 * This call looks up the SRV record for @service at @domain for the
 * "tcp" protocol.  It then attempts to connect, in turn, to each of
 * the hosts providing the service until either a connection succeeds
 * or there are no hosts remaining.
 *
 * Upon a successful connection, a new #GSocketConnection is constructed
 * and returned.  The caller owns this new object and must drop their
 * reference to it when finished with it.
 *
 * In the event of any failure (DNS error, service not found, no hosts
 * connectable) %NULL is returned and @error (if non-%NULL) is set
 * accordingly.
 *
 * Returns: (transfer full): a #GSocketConnection if successful, or %NULL on error
 */


/**
 * g_socket_client_connect_to_service_async:
 * @client: a #GSocketClient
 * @domain: a domain name
 * @service: the name of the service to connect to
 * @cancellable: (allow-none): a #GCancellable, or %NULL
 * @callback: (scope async): a #GAsyncReadyCallback
 * @user_data: (closure): user data for the callback
 *
 * This is the asynchronous version of
 * g_socket_client_connect_to_service().
 *
 * Since: 2.22
 */


/**
 * g_socket_client_connect_to_service_finish:
 * @client: a #GSocketClient.
 * @result: a #GAsyncResult.
 * @error: a #GError location to store the error occurring, or %NULL to ignore.
 *
 * Finishes an async connect operation. See g_socket_client_connect_to_service_async()
 *
 * Returns: (transfer full): a #GSocketConnection on success, %NULL on error.
 * Since: 2.22
 */


/**
 * g_socket_client_connect_to_uri:
 * @client: a #GSocketClient
 * @uri: A network URI
 * @default_port: the default port to connect to
 * @cancellable: (allow-none): a #GCancellable, or %NULL
 * @error: a pointer to a #GError, or %NULL
 *
 * This is a helper function for g_socket_client_connect().
 *
 * Attempts to create a TCP connection with a network URI.
 *
 * @uri may be any valid URI containing an "authority" (hostname/port)
 * component. If a port is not specified in the URI, @default_port
 * will be used. TLS will be negotiated if #GSocketClient:tls is %TRUE.
 * (#GSocketClient does not know to automatically assume TLS for
 * certain URI schemes.)
 *
 * Using this rather than g_socket_client_connect() or
 * g_socket_client_connect_to_host() allows #GSocketClient to
 * determine when to use application-specific proxy protocols.
 *
 * Upon a successful connection, a new #GSocketConnection is constructed
 * and returned.  The caller owns this new object and must drop their
 * reference to it when finished with it.
 *
 * In the event of any failure (DNS error, service not found, no hosts
 * connectable) %NULL is returned and @error (if non-%NULL) is set
 * accordingly.
 *
 * Returns: (transfer full): a #GSocketConnection on success, %NULL on error.
 * Since: 2.26
 */


/**
 * g_socket_client_connect_to_uri_async:
 * @client: a #GSocketClient
 * @uri: a network uri
 * @default_port: the default port to connect to
 * @cancellable: (allow-none): a #GCancellable, or %NULL
 * @callback: (scope async): a #GAsyncReadyCallback
 * @user_data: (closure): user data for the callback
 *
 * This is the asynchronous version of g_socket_client_connect_to_uri().
 *
 * When the operation is finished @callback will be
 * called. You can then call g_socket_client_connect_to_uri_finish() to get
 * the result of the operation.
 *
 * Since: 2.26
 */


/**
 * g_socket_client_connect_to_uri_finish:
 * @client: a #GSocketClient.
 * @result: a #GAsyncResult.
 * @error: a #GError location to store the error occurring, or %NULL to ignore.
 *
 * Finishes an async connect operation. See g_socket_client_connect_to_uri_async()
 *
 * Returns: (transfer full): a #GSocketConnection on success, %NULL on error.
 * Since: 2.26
 */


/**
 * g_socket_client_get_enable_proxy:
 * @client: a #GSocketClient.
 *
 * Gets the proxy enable state; see g_socket_client_set_enable_proxy()
 *
 * Returns: whether proxying is enabled
 * Since: 2.26
 */


/**
 * g_socket_client_get_family:
 * @client: a #GSocketClient.
 *
 * Gets the socket family of the socket client.
 *
 * See g_socket_client_set_family() for details.
 *
 * Returns: a #GSocketFamily
 * Since: 2.22
 */


/**
 * g_socket_client_get_local_address:
 * @client: a #GSocketClient.
 *
 * Gets the local address of the socket client.
 *
 * See g_socket_client_set_local_address() for details.
 *
 * Returns: (transfer none): a #GSocketAddress or %NULL. Do not free.
 * Since: 2.22
 */


/**
 * g_socket_client_get_protocol:
 * @client: a #GSocketClient
 *
 * Gets the protocol name type of the socket client.
 *
 * See g_socket_client_set_protocol() for details.
 *
 * Returns: a #GSocketProtocol
 * Since: 2.22
 */


/**
 * g_socket_client_get_socket_type:
 * @client: a #GSocketClient.
 *
 * Gets the socket type of the socket client.
 *
 * See g_socket_client_set_socket_type() for details.
 *
 * Returns: a #GSocketFamily
 * Since: 2.22
 */


/**
 * g_socket_client_get_timeout:
 * @client: a #GSocketClient
 *
 * Gets the I/O timeout time for sockets created by @client.
 *
 * See g_socket_client_set_timeout() for details.
 *
 * Returns: the timeout in seconds
 * Since: 2.26
 */


/**
 * g_socket_client_get_tls:
 * @client: a #GSocketClient.
 *
 * Gets whether @client creates TLS connections. See
 * g_socket_client_set_tls() for details.
 *
 * Returns: whether @client uses TLS
 * Since: 2.28
 */


/**
 * g_socket_client_get_tls_validation_flags:
 * @client: a #GSocketClient.
 *
 * Gets the TLS validation flags used creating TLS connections via
 * @client.
 *
 * Returns: the TLS validation flags
 * Since: 2.28
 */


/**
 * g_socket_client_new:
 *
 * Creates a new #GSocketClient with the default options.
 *
 * Returns: a #GSocketClient. Free the returned object with g_object_unref().
 * Since: 2.22
 */


/**
 * g_socket_client_set_enable_proxy:
 * @client: a #GSocketClient.
 * @enable: whether to enable proxies
 *
 * Sets whether or not @client attempts to make connections via a
 * proxy server. When enabled (the default), #GSocketClient will use a
 * #GProxyResolver to determine if a proxy protocol such as SOCKS is
 * needed, and automatically do the necessary proxy negotiation.
 *
 * Since: 2.26
 */


/**
 * g_socket_client_set_family:
 * @client: a #GSocketClient.
 * @family: a #GSocketFamily
 *
 * Sets the socket family of the socket client.
 * If this is set to something other than %G_SOCKET_FAMILY_INVALID
 * then the sockets created by this object will be of the specified
 * family.
 *
 * This might be useful for instance if you want to force the local
 * connection to be an ipv4 socket, even though the address might
 * be an ipv6 mapped to ipv4 address.
 *
 * Since: 2.22
 */


/**
 * g_socket_client_set_local_address:
 * @client: a #GSocketClient.
 * @address: (allow-none): a #GSocketAddress, or %NULL
 *
 * Sets the local address of the socket client.
 * The sockets created by this object will bound to the
 * specified address (if not %NULL) before connecting.
 *
 * This is useful if you want to ensure that the local
 * side of the connection is on a specific port, or on
 * a specific interface.
 *
 * Since: 2.22
 */


/**
 * g_socket_client_set_protocol:
 * @client: a #GSocketClient.
 * @protocol: a #GSocketProtocol
 *
 * Sets the protocol of the socket client.
 * The sockets created by this object will use of the specified
 * protocol.
 *
 * If @protocol is %0 that means to use the default
 * protocol for the socket family and type.
 *
 * Since: 2.22
 */


/**
 * g_socket_client_set_socket_type:
 * @client: a #GSocketClient.
 * @type: a #GSocketType
 *
 * Sets the socket type of the socket client.
 * The sockets created by this object will be of the specified
 * type.
 *
 * It doesn't make sense to specify a type of %G_SOCKET_TYPE_DATAGRAM,
 * as GSocketClient is used for connection oriented services.
 *
 * Since: 2.22
 */


/**
 * g_socket_client_set_timeout:
 * @client: a #GSocketClient.
 * @timeout: the timeout
 *
 * Sets the I/O timeout for sockets created by @client. @timeout is a
 * time in seconds, or 0 for no timeout (the default).
 *
 * The timeout value affects the initial connection attempt as well,
 * so setting this may cause calls to g_socket_client_connect(), etc,
 * to fail with %G_IO_ERROR_TIMED_OUT.
 *
 * Since: 2.26
 */


/**
 * g_socket_client_set_tls:
 * @client: a #GSocketClient.
 * @tls: whether to use TLS
 *
 * Sets whether @client creates TLS (aka SSL) connections. If @tls is
 * %TRUE, @client will wrap its connections in a #GTlsClientConnection
 * and perform a TLS handshake when connecting.
 *
 * Note that since #GSocketClient must return a #GSocketConnection,
 * but #GTlsClientConnection is not a #GSocketConnection, this
 * actually wraps the resulting #GTlsClientConnection in a
 * #GTcpWrapperConnection when returning it. You can use
 * g_tcp_wrapper_connection_get_base_io_stream() on the return value
 * to extract the #GTlsClientConnection.
 *
 * If you need to modify the behavior of the TLS handshake (eg, by
 * setting a client-side certificate to use, or connecting to the
 * #GTlsConnection::accept-certificate signal), you can connect to
 * @client's #GSocketClient::event signal and wait for it to be
 * emitted with %G_SOCKET_CLIENT_TLS_HANDSHAKING, which will give you
 * a chance to see the #GTlsClientConnection before the handshake
 * starts.
 *
 * Since: 2.28
 */


/**
 * g_socket_client_set_tls_validation_flags:
 * @client: a #GSocketClient.
 * @flags: the validation flags
 *
 * Sets the TLS validation flags used when creating TLS connections
 * via @client. The default value is %G_TLS_CERTIFICATE_VALIDATE_ALL.
 *
 * Since: 2.28
 */


/**
 * g_socket_close:
 * @socket: a #GSocket
 * @error: #GError for error reporting, or %NULL to ignore.
 *
 * Closes the socket, shutting down any active connection.
 *
 * Closing a socket does not wait for all outstanding I/O operations
 * to finish, so the caller should not rely on them to be guaranteed
 * to complete even if the close returns with no error.
 *
 * Once the socket is closed, all other operations will return
 * %G_IO_ERROR_CLOSED. Closing a socket multiple times will not
 * return an error.
 *
 * Sockets will be automatically closed when the last reference
 * is dropped, but you might want to call this function to make sure
 * resources are released as early as possible.
 *
 * Beware that due to the way that TCP works, it is possible for
 * recently-sent data to be lost if either you close a socket while the
 * %G_IO_IN condition is set, or else if the remote connection tries to
 * send something to you after you close the socket but before it has
 * finished reading all of the data you sent. There is no easy generic
 * way to avoid this problem; the easiest fix is to design the network
 * protocol such that the client will never send data "out of turn".
 * Another solution is for the server to half-close the connection by
 * calling g_socket_shutdown() with only the @shutdown_write flag set,
 * and then wait for the client to notice this and close its side of the
 * connection, after which the server can safely call g_socket_close().
 * (This is what #GTcpConnection does if you call
 * g_tcp_connection_set_graceful_disconnect(). But of course, this
 * only works if the client will close its connection after the server
 * does.)
 *
 * Returns: %TRUE on success, %FALSE on error
 * Since: 2.22
 */


/**
 * g_socket_condition_check:
 * @socket: a #GSocket
 * @condition: a #GIOCondition mask to check
 *
 * Checks on the readiness of @socket to perform operations.
 * The operations specified in @condition are checked for and masked
 * against the currently-satisfied conditions on @socket. The result
 * is returned.
 *
 * Note that on Windows, it is possible for an operation to return
 * %G_IO_ERROR_WOULD_BLOCK even immediately after
 * g_socket_condition_check() has claimed that the socket is ready for
 * writing. Rather than calling g_socket_condition_check() and then
 * writing to the socket if it succeeds, it is generally better to
 * simply try writing to the socket right away, and try again later if
 * the initial attempt returns %G_IO_ERROR_WOULD_BLOCK.
 *
 * It is meaningless to specify %G_IO_ERR or %G_IO_HUP in condition;
 * these conditions will always be set in the output if they are true.
 *
 * This call never blocks.
 *
 * Returns: the @GIOCondition mask of the current state
 * Since: 2.22
 */


/**
 * g_socket_condition_timed_wait:
 * @socket: a #GSocket
 * @condition: a #GIOCondition mask to wait for
 * @timeout: the maximum time (in microseconds) to wait, or -1
 * @cancellable: (allow-none): a #GCancellable, or %NULL
 * @error: a #GError pointer, or %NULL
 *
 * Waits for up to @timeout microseconds for @condition to become true
 * on @socket. If the condition is met, %TRUE is returned.
 *
 * If @cancellable is cancelled before the condition is met, or if
 * @timeout (or the socket's #GSocket:timeout) is reached before the
 * condition is met, then %FALSE is returned and @error, if non-%NULL,
 * is set to the appropriate value (%G_IO_ERROR_CANCELLED or
 * %G_IO_ERROR_TIMED_OUT).
 *
 * If you don't want a timeout, use g_socket_condition_wait().
 * (Alternatively, you can pass -1 for @timeout.)
 *
 * Note that although @timeout is in microseconds for consistency with
 * other GLib APIs, this function actually only has millisecond
 * resolution, and the behavior is undefined if @timeout is not an
 * exact number of milliseconds.
 *
 * Returns: %TRUE if the condition was met, %FALSE otherwise
 * Since: 2.32
 */


/**
 * g_socket_condition_wait:
 * @socket: a #GSocket
 * @condition: a #GIOCondition mask to wait for
 * @cancellable: (allow-none): a #GCancellable, or %NULL
 * @error: a #GError pointer, or %NULL
 *
 * Waits for @condition to become true on @socket. When the condition
 * is met, %TRUE is returned.
 *
 * If @cancellable is cancelled before the condition is met, or if the
 * socket has a timeout set and it is reached before the condition is
 * met, then %FALSE is returned and @error, if non-%NULL, is set to
 * the appropriate value (%G_IO_ERROR_CANCELLED or
 * %G_IO_ERROR_TIMED_OUT).
 *
 * See also g_socket_condition_timed_wait().
 *
 * Returns: %TRUE if the condition was met, %FALSE otherwise
 * Since: 2.22
 */


/**
 * g_socket_connect:
 * @socket: a #GSocket.
 * @address: a #GSocketAddress specifying the remote address.
 * @cancellable: (allow-none): a %GCancellable or %NULL
 * @error: #GError for error reporting, or %NULL to ignore.
 *
 * Connect the socket to the specified remote address.
 *
 * For connection oriented socket this generally means we attempt to make
 * a connection to the @address. For a connection-less socket it sets
 * the default address for g_socket_send() and discards all incoming datagrams
 * from other sources.
 *
 * Generally connection oriented sockets can only connect once, but
 * connection-less sockets can connect multiple times to change the
 * default address.
 *
 * If the connect call needs to do network I/O it will block, unless
 * non-blocking I/O is enabled. Then %G_IO_ERROR_PENDING is returned
 * and the user can be notified of the connection finishing by waiting
 * for the G_IO_OUT condition. The result of the connection must then be
 * checked with g_socket_check_connect_result().
 *
 * Returns: %TRUE if connected, %FALSE on error.
 * Since: 2.22
 */


/**
 * g_socket_connectable_enumerate:
 * @connectable: a #GSocketConnectable
 *
 * Creates a #GSocketAddressEnumerator for @connectable.
 *
 * Returns: (transfer full): a new #GSocketAddressEnumerator.
 * Since: 2.22
 */


/**
 * g_socket_connectable_proxy_enumerate:
 * @connectable: a #GSocketConnectable
 *
 * Creates a #GSocketAddressEnumerator for @connectable that will
 * return #GProxyAddress<!-- -->es for addresses that you must connect
 * to via a proxy.
 *
 * If @connectable does not implement
 * g_socket_connectable_proxy_enumerate(), this will fall back to
 * calling g_socket_connectable_enumerate().
 *
 * Returns: (transfer full): a new #GSocketAddressEnumerator.
 * Since: 2.26
 */


/**
 * g_socket_connection_connect:
 * @connection: a #GSocketConnection
 * @address: a #GSocketAddress specifying the remote address.
 * @cancellable: (allow-none): a %GCancellable or %NULL
 * @error: #GError for error reporting, or %NULL to ignore.
 *
 * Connect @connection to the specified remote address.
 *
 * Returns: %TRUE if the connection succeeded, %FALSE on error
 * Since: 2.32
 */


/**
 * g_socket_connection_connect_async:
 * @connection: a #GSocketConnection
 * @address: a #GSocketAddress specifying the remote address.
 * @cancellable: (allow-none): a %GCancellable or %NULL
 * @callback: (scope async): a #GAsyncReadyCallback
 * @user_data: (closure): user data for the callback
 *
 * Asynchronously connect @connection to the specified remote address.
 *
 * This clears the #GSocket:blocking flag on @connection's underlying
 * socket if it is currently set.
 *
 * Use g_socket_connection_connect_finish() to retrieve the result.
 *
 * Since: 2.32
 */


/**
 * g_socket_connection_connect_finish:
 * @connection: a #GSocketConnection
 * @result: the #GAsyncResult
 * @error: #GError for error reporting, or %NULL to ignore.
 *
 * Gets the result of a g_socket_connection_connect_async() call.
 *
 * Returns: %TRUE if the connection succeeded, %FALSE on error
 * Since: 2.32
 */


/**
 * g_socket_connection_factory_create_connection:
 * @socket: a #GSocket
 *
 * Creates a #GSocketConnection subclass of the right type for
 * @socket.
 *
 * Returns: (transfer full): a #GSocketConnection
 * Since: 2.22
 */


/**
 * g_socket_connection_factory_lookup_type:
 * @family: a #GSocketFamily
 * @type: a #GSocketType
 * @protocol_id: a protocol id
 *
 * Looks up the #GType to be used when creating socket connections on
 * sockets with the specified @family, @type and @protocol_id.
 *
 * If no type is registered, the #GSocketConnection base type is returned.
 *
 * Returns: a #GType
 * Since: 2.22
 */


/**
 * g_socket_connection_factory_register_type:
 * @g_type: a #GType, inheriting from %G_TYPE_SOCKET_CONNECTION
 * @family: a #GSocketFamily
 * @type: a #GSocketType
 * @protocol: a protocol id
 *
 * Looks up the #GType to be used when creating socket connections on
 * sockets with the specified @family, @type and @protocol.
 *
 * If no type is registered, the #GSocketConnection base type is returned.
 *
 * Since: 2.22
 */


/**
 * g_socket_connection_get_local_address:
 * @connection: a #GSocketConnection
 * @error: #GError for error reporting, or %NULL to ignore.
 *
 * Try to get the local address of a socket connection.
 *
 * Returns: (transfer full): a #GSocketAddress or %NULL on error. Free the returned object with g_object_unref().
 * Since: 2.22
 */


/**
 * g_socket_connection_get_remote_address:
 * @connection: a #GSocketConnection
 * @error: #GError for error reporting, or %NULL to ignore.
 *
 * Try to get the remote address of a socket connection.
 *
 * Returns: (transfer full): a #GSocketAddress or %NULL on error. Free the returned object with g_object_unref().
 * Since: 2.22
 */


/**
 * g_socket_connection_get_socket:
 * @connection: a #GSocketConnection
 *
 * Gets the underlying #GSocket object of the connection.
 * This can be useful if you want to do something unusual on it
 * not supported by the #GSocketConnection APIs.
 *
 * Returns: (transfer none): a #GSocketAddress or %NULL on error.
 * Since: 2.22
 */


/**
 * g_socket_connection_is_connected:
 * @connection: a #GSocketConnection
 *
 * Checks if @connection is connected. This is equivalent to calling
 * g_socket_is_connected() on @connection's underlying #GSocket.
 *
 * Returns: whether @connection is connected
 * Since: 2.32
 */


/**
 * g_socket_control_message_deserialize:
 * @level: a socket level
 * @type: a socket control message type for the given @level
 * @size: the size of the data in bytes
 * @data: (array length=size) (element-type guint8): pointer to the message data
 *
 * Tries to deserialize a socket control message of a given
 * @level and @type. This will ask all known (to GType) subclasses
 * of #GSocketControlMessage if they can understand this kind
 * of message and if so deserialize it into a #GSocketControlMessage.
 *
 * If there is no implementation for this kind of control message, %NULL
 * will be returned.
 *
 * Returns: (transfer full): the deserialized message or %NULL
 * Since: 2.22
 */


/**
 * g_socket_control_message_get_level:
 * @message: a #GSocketControlMessage
 *
 * Returns the "level" (i.e. the originating protocol) of the control message.
 * This is often SOL_SOCKET.
 *
 * Returns: an integer describing the level
 * Since: 2.22
 */


/**
 * g_socket_control_message_get_msg_type:
 * @message: a #GSocketControlMessage
 *
 * Returns the protocol specific type of the control message.
 * For instance, for UNIX fd passing this would be SCM_RIGHTS.
 *
 * Returns: an integer describing the type of control message
 * Since: 2.22
 */


/**
 * g_socket_control_message_get_size:
 * @message: a #GSocketControlMessage
 *
 * Returns the space required for the control message, not including
 * headers or alignment.
 *
 * Returns: The number of bytes required.
 * Since: 2.22
 */


/**
 * g_socket_control_message_serialize:
 * @message: a #GSocketControlMessage
 * @data: A buffer to write data to
 *
 * Converts the data in the message to bytes placed in the
 * message.
 *
 * @data is guaranteed to have enough space to fit the size
 * returned by g_socket_control_message_get_size() on this
 * object.
 *
 * Since: 2.22
 */


/**
 * g_socket_create_source: (skip)
 * @socket: a #GSocket
 * @condition: a #GIOCondition mask to monitor
 * @cancellable: (allow-none): a %GCancellable or %NULL
 *
 * Creates a %GSource that can be attached to a %GMainContext to monitor
 * for the availibility of the specified @condition on the socket.
 *
 * The callback on the source is of the #GSocketSourceFunc type.
 *
 * It is meaningless to specify %G_IO_ERR or %G_IO_HUP in @condition;
 * these conditions will always be reported output if they are true.
 *
 * @cancellable if not %NULL can be used to cancel the source, which will
 * cause the source to trigger, reporting the current condition (which
 * is likely 0 unless cancellation happened at the same time as a
 * condition change). You can check for this in the callback using
 * g_cancellable_is_cancelled().
 *
 * If @socket has a timeout set, and it is reached before @condition
 * occurs, the source will then trigger anyway, reporting %G_IO_IN or
 * %G_IO_OUT depending on @condition. However, @socket will have been
 * marked as having had a timeout, and so the next #GSocket I/O method
 * you call will then fail with a %G_IO_ERROR_TIMED_OUT.
 *
 * Returns: (transfer full): a newly allocated %GSource, free with g_source_unref().
 * Since: 2.22
 */


/**
 * g_socket_get_available_bytes:
 * @socket: a #GSocket
 *
 * Get the amount of data pending in the OS input buffer.
 *
 * Returns: the number of bytes that can be read from the socket without blocking or -1 on error.
 * Since: 2.32
 */


/**
 * g_socket_get_blocking:
 * @socket: a #GSocket.
 *
 * Gets the blocking mode of the socket. For details on blocking I/O,
 * see g_socket_set_blocking().
 *
 * Returns: %TRUE if blocking I/O is used, %FALSE otherwise.
 * Since: 2.22
 */


/**
 * g_socket_get_broadcast:
 * @socket: a #GSocket.
 *
 * Gets the broadcast setting on @socket; if %TRUE,
 * it is possible to send packets to broadcast
 * addresses or receive from broadcast addresses.
 *
 * Returns: the broadcast setting on @socket
 * Since: 2.32
 */


/**
 * g_socket_get_credentials:
 * @socket: a #GSocket.
 * @error: #GError for error reporting, or %NULL to ignore.
 *
 * Returns the credentials of the foreign process connected to this
 * socket, if any (e.g. it is only supported for %G_SOCKET_FAMILY_UNIX
 * sockets).
 *
 * If this operation isn't supported on the OS, the method fails with
 * the %G_IO_ERROR_NOT_SUPPORTED error. On Linux this is implemented
 * by reading the %SO_PEERCRED option on the underlying socket.
 *
 * Other ways to obtain credentials from a foreign peer includes the
 * #GUnixCredentialsMessage type and
 * g_unix_connection_send_credentials() /
 * g_unix_connection_receive_credentials() functions.
 *
 * Returns: (transfer full): %NULL if @error is set, otherwise a #GCredentials object that must be freed with g_object_unref().
 * Since: 2.26
 */


/**
 * g_socket_get_family:
 * @socket: a #GSocket.
 *
 * Gets the socket family of the socket.
 *
 * Returns: a #GSocketFamily
 * Since: 2.22
 */


/**
 * g_socket_get_fd:
 * @socket: a #GSocket.
 *
 * Returns the underlying OS socket object. On unix this
 * is a socket file descriptor, and on windows this is
 * a Winsock2 SOCKET handle. This may be useful for
 * doing platform specific or otherwise unusual operations
 * on the socket.
 *
 * Returns: the file descriptor of the socket.
 * Since: 2.22
 */


/**
 * g_socket_get_keepalive:
 * @socket: a #GSocket.
 *
 * Gets the keepalive mode of the socket. For details on this,
 * see g_socket_set_keepalive().
 *
 * Returns: %TRUE if keepalive is active, %FALSE otherwise.
 * Since: 2.22
 */


/**
 * g_socket_get_listen_backlog:
 * @socket: a #GSocket.
 *
 * Gets the listen backlog setting of the socket. For details on this,
 * see g_socket_set_listen_backlog().
 *
 * Returns: the maximum number of pending connections.
 * Since: 2.22
 */


/**
 * g_socket_get_local_address:
 * @socket: a #GSocket.
 * @error: #GError for error reporting, or %NULL to ignore.
 *
 * Try to get the local address of a bound socket. This is only
 * useful if the socket has been bound to a local address,
 * either explicitly or implicitly when connecting.
 *
 * Returns: (transfer full): a #GSocketAddress or %NULL on error. Free the returned object with g_object_unref().
 * Since: 2.22
 */


/**
 * g_socket_get_multicast_loopback:
 * @socket: a #GSocket.
 *
 * Gets the multicast loopback setting on @socket; if %TRUE (the
 * default), outgoing multicast packets will be looped back to
 * multicast listeners on the same host.
 *
 * Returns: the multicast loopback setting on @socket
 * Since: 2.32
 */


/**
 * g_socket_get_multicast_ttl:
 * @socket: a #GSocket.
 *
 * Gets the multicast time-to-live setting on @socket; see
 * g_socket_set_multicast_ttl() for more details.
 *
 * Returns: the multicast time-to-live setting on @socket
 * Since: 2.32
 */


/**
 * g_socket_get_protocol:
 * @socket: a #GSocket.
 *
 * Gets the socket protocol id the socket was created with.
 * In case the protocol is unknown, -1 is returned.
 *
 * Returns: a protocol id, or -1 if unknown
 * Since: 2.22
 */


/**
 * g_socket_get_remote_address:
 * @socket: a #GSocket.
 * @error: #GError for error reporting, or %NULL to ignore.
 *
 * Try to get the remove address of a connected socket. This is only
 * useful for connection oriented sockets that have been connected.
 *
 * Returns: (transfer full): a #GSocketAddress or %NULL on error. Free the returned object with g_object_unref().
 * Since: 2.22
 */


/**
 * g_socket_get_socket_type:
 * @socket: a #GSocket.
 *
 * Gets the socket type of the socket.
 *
 * Returns: a #GSocketType
 * Since: 2.22
 */


/**
 * g_socket_get_timeout:
 * @socket: a #GSocket.
 *
 * Gets the timeout setting of the socket. For details on this, see
 * g_socket_set_timeout().
 *
 * Returns: the timeout in seconds
 * Since: 2.26
 */


/**
 * g_socket_get_ttl:
 * @socket: a #GSocket.
 *
 * Gets the unicast time-to-live setting on @socket; see
 * g_socket_set_ttl() for more details.
 *
 * Returns: the time-to-live setting on @socket
 * Since: 2.32
 */


/**
 * g_socket_is_closed:
 * @socket: a #GSocket
 *
 * Checks whether a socket is closed.
 *
 * Returns: %TRUE if socket is closed, %FALSE otherwise
 * Since: 2.22
 */


/**
 * g_socket_is_connected:
 * @socket: a #GSocket.
 *
 * Check whether the socket is connected. This is only useful for
 * connection-oriented sockets.
 *
 * Returns: %TRUE if socket is connected, %FALSE otherwise.
 * Since: 2.22
 */


/**
 * g_socket_join_multicast_group:
 * @socket: a #GSocket.
 * @group: a #GInetAddress specifying the group address to join.
 * @iface: (allow-none): Name of the interface to use, or %NULL
 * @source_specific: %TRUE if source-specific multicast should be used
 * @error: #GError for error reporting, or %NULL to ignore.
 *
 * Registers @socket to receive multicast messages sent to @group.
 * @socket must be a %G_SOCKET_TYPE_DATAGRAM socket, and must have
 * been bound to an appropriate interface and port with
 * g_socket_bind().
 *
 * If @iface is %NULL, the system will automatically pick an interface
 * to bind to based on @group.
 *
 * If @source_specific is %TRUE, source-specific multicast as defined
 * in RFC 4604 is used. Note that on older platforms this may fail
 * with a %G_IO_ERROR_NOT_SUPPORTED error.
 *
 * Returns: %TRUE on success, %FALSE on error.
 * Since: 2.32
 */


/**
 * g_socket_leave_multicast_group:
 * @socket: a #GSocket.
 * @group: a #GInetAddress specifying the group address to leave.
 * @iface: (allow-none): Interface used
 * @source_specific: %TRUE if source-specific multicast was used
 * @error: #GError for error reporting, or %NULL to ignore.
 *
 * Removes @socket from the multicast group defined by @group, @iface,
 * and @source_specific (which must all have the same values they had
 * when you joined the group).
 *
 * @socket remains bound to its address and port, and can still receive
 * unicast messages after calling this.
 *
 * Returns: %TRUE on success, %FALSE on error.
 * Since: 2.32
 */


/**
 * g_socket_listen:
 * @socket: a #GSocket.
 * @error: #GError for error reporting, or %NULL to ignore.
 *
 * Marks the socket as a server socket, i.e. a socket that is used
 * to accept incoming requests using g_socket_accept().
 *
 * Before calling this the socket must be bound to a local address using
 * g_socket_bind().
 *
 * To set the maximum amount of outstanding clients, use
 * g_socket_set_listen_backlog().
 *
 * Returns: %TRUE on success, %FALSE on error.
 * Since: 2.22
 */


/**
 * g_socket_listener_accept:
 * @listener: a #GSocketListener
 * @source_object: (out) (transfer none) (allow-none): location where #GObject pointer will be stored, or %NULL
 * @cancellable: (allow-none): optional #GCancellable object, %NULL to ignore.
 * @error: #GError for error reporting, or %NULL to ignore.
 *
 * Blocks waiting for a client to connect to any of the sockets added
 * to the listener. Returns a #GSocketConnection for the socket that was
 * accepted.
 *
 * If @source_object is not %NULL it will be filled out with the source
 * object specified when the corresponding socket or address was added
 * to the listener.
 *
 * If @cancellable is not %NULL, then the operation can be cancelled by
 * triggering the cancellable object from another thread. If the operation
 * was cancelled, the error %G_IO_ERROR_CANCELLED will be returned.
 *
 * Returns: (transfer full): a #GSocketConnection on success, %NULL on error.
 * Since: 2.22
 */


/**
 * g_socket_listener_accept_async:
 * @listener: a #GSocketListener
 * @cancellable: (allow-none): a #GCancellable, or %NULL
 * @callback: (scope async): a #GAsyncReadyCallback
 * @user_data: (closure): user data for the callback
 *
 * This is the asynchronous version of g_socket_listener_accept().
 *
 * When the operation is finished @callback will be
 * called. You can then call g_socket_listener_accept_socket()
 * to get the result of the operation.
 *
 * Since: 2.22
 */


/**
 * g_socket_listener_accept_finish:
 * @listener: a #GSocketListener
 * @result: a #GAsyncResult.
 * @source_object: (out) (transfer none) (allow-none): Optional #GObject identifying this source
 * @error: a #GError location to store the error occurring, or %NULL to ignore.
 *
 * Finishes an async accept operation. See g_socket_listener_accept_async()
 *
 * Returns: (transfer full): a #GSocketConnection on success, %NULL on error.
 * Since: 2.22
 */


/**
 * g_socket_listener_accept_socket:
 * @listener: a #GSocketListener
 * @source_object: (out) (transfer none) (allow-none): location where #GObject pointer will be stored, or %NULL.
 * @cancellable: (allow-none): optional #GCancellable object, %NULL to ignore.
 * @error: #GError for error reporting, or %NULL to ignore.
 *
 * Blocks waiting for a client to connect to any of the sockets added
 * to the listener. Returns the #GSocket that was accepted.
 *
 * If you want to accept the high-level #GSocketConnection, not a #GSocket,
 * which is often the case, then you should use g_socket_listener_accept()
 * instead.
 *
 * If @source_object is not %NULL it will be filled out with the source
 * object specified when the corresponding socket or address was added
 * to the listener.
 *
 * If @cancellable is not %NULL, then the operation can be cancelled by
 * triggering the cancellable object from another thread. If the operation
 * was cancelled, the error %G_IO_ERROR_CANCELLED will be returned.
 *
 * Returns: (transfer full): a #GSocket on success, %NULL on error.
 * Since: 2.22
 */


/**
 * g_socket_listener_accept_socket_async:
 * @listener: a #GSocketListener
 * @cancellable: (allow-none): a #GCancellable, or %NULL
 * @callback: (scope async): a #GAsyncReadyCallback
 * @user_data: (closure): user data for the callback
 *
 * This is the asynchronous version of g_socket_listener_accept_socket().
 *
 * When the operation is finished @callback will be
 * called. You can then call g_socket_listener_accept_socket_finish()
 * to get the result of the operation.
 *
 * Since: 2.22
 */


/**
 * g_socket_listener_accept_socket_finish:
 * @listener: a #GSocketListener
 * @result: a #GAsyncResult.
 * @source_object: (out) (transfer none) (allow-none): Optional #GObject identifying this source
 * @error: a #GError location to store the error occurring, or %NULL to ignore.
 *
 * Finishes an async accept operation. See g_socket_listener_accept_socket_async()
 *
 * Returns: (transfer full): a #GSocket on success, %NULL on error.
 * Since: 2.22
 */


/**
 * g_socket_listener_add_address:
 * @listener: a #GSocketListener
 * @address: a #GSocketAddress
 * @type: a #GSocketType
 * @protocol: a #GSocketProtocol
 * @source_object: (allow-none): Optional #GObject identifying this source
 * @effective_address: (out) (allow-none): location to store the address that was bound to, or %NULL.
 * @error: #GError for error reporting, or %NULL to ignore.
 *
 * Creates a socket of type @type and protocol @protocol, binds
 * it to @address and adds it to the set of sockets we're accepting
 * sockets from.
 *
 * Note that adding an IPv6 address, depending on the platform,
 * may or may not result in a listener that also accepts IPv4
 * connections.  For more deterministic behavior, see
 * g_socket_listener_add_inet_port().
 *
 * @source_object will be passed out in the various calls
 * to accept to identify this particular source, which is
 * useful if you're listening on multiple addresses and do
 * different things depending on what address is connected to.
 *
 * If successful and @effective_address is non-%NULL then it will
 * be set to the address that the binding actually occurred at.  This
 * is helpful for determining the port number that was used for when
 * requesting a binding to port 0 (ie: "any port").  This address, if
 * requested, belongs to the caller and must be freed.
 *
 * Returns: %TRUE on success, %FALSE on error.
 * Since: 2.22
 */


/**
 * g_socket_listener_add_any_inet_port:
 * @listener: a #GSocketListener
 * @source_object: (allow-none): Optional #GObject identifying this source
 * @error: a #GError location to store the error occurring, or %NULL to ignore.
 *
 * Listens for TCP connections on any available port number for both
 * IPv6 and IPv4 (if each is available).
 *
 * This is useful if you need to have a socket for incoming connections
 * but don't care about the specific port number.
 *
 * @source_object will be passed out in the various calls
 * to accept to identify this particular source, which is
 * useful if you're listening on multiple addresses and do
 * different things depending on what address is connected to.
 *
 * Returns: the port number, or 0 in case of failure.
 * Since: 2.24
 */


/**
 * g_socket_listener_add_inet_port:
 * @listener: a #GSocketListener
 * @port: an IP port number (non-zero)
 * @source_object: (allow-none): Optional #GObject identifying this source
 * @error: #GError for error reporting, or %NULL to ignore.
 *
 * Helper function for g_socket_listener_add_address() that
 * creates a TCP/IP socket listening on IPv4 and IPv6 (if
 * supported) on the specified port on all interfaces.
 *
 * @source_object will be passed out in the various calls
 * to accept to identify this particular source, which is
 * useful if you're listening on multiple addresses and do
 * different things depending on what address is connected to.
 *
 * Returns: %TRUE on success, %FALSE on error.
 * Since: 2.22
 */


/**
 * g_socket_listener_add_socket:
 * @listener: a #GSocketListener
 * @socket: a listening #GSocket
 * @source_object: (allow-none): Optional #GObject identifying this source
 * @error: #GError for error reporting, or %NULL to ignore.
 *
 * Adds @socket to the set of sockets that we try to accept
 * new clients from. The socket must be bound to a local
 * address and listened to.
 *
 * @source_object will be passed out in the various calls
 * to accept to identify this particular source, which is
 * useful if you're listening on multiple addresses and do
 * different things depending on what address is connected to.
 *
 * Returns: %TRUE on success, %FALSE on error.
 * Since: 2.22
 */


/**
 * g_socket_listener_close:
 * @listener: a #GSocketListener
 *
 * Closes all the sockets in the listener.
 *
 * Since: 2.22
 */


/**
 * g_socket_listener_new:
 *
 * Creates a new #GSocketListener with no sockets to listen for.
 * New listeners can be added with e.g. g_socket_listener_add_address()
 * or g_socket_listener_add_inet_port().
 *
 * Returns: a new #GSocketListener.
 * Since: 2.22
 */


/**
 * g_socket_listener_set_backlog:
 * @listener: a #GSocketListener
 * @listen_backlog: an integer
 *
 * Sets the listen backlog on the sockets in the listener.
 *
 * See g_socket_set_listen_backlog() for details
 *
 * Since: 2.22
 */


/**
 * g_socket_new:
 * @family: the socket family to use, e.g. %G_SOCKET_FAMILY_IPV4.
 * @type: the socket type to use.
 * @protocol: the id of the protocol to use, or 0 for default.
 * @error: #GError for error reporting, or %NULL to ignore.
 *
 * Creates a new #GSocket with the defined family, type and protocol.
 * If @protocol is 0 (%G_SOCKET_PROTOCOL_DEFAULT) the default protocol type
 * for the family and type is used.
 *
 * The @protocol is a family and type specific int that specifies what
 * kind of protocol to use. #GSocketProtocol lists several common ones.
 * Many families only support one protocol, and use 0 for this, others
 * support several and using 0 means to use the default protocol for
 * the family and type.
 *
 * The protocol id is passed directly to the operating
 * system, so you can use protocols not listed in #GSocketProtocol if you
 * know the protocol number used for it.
 *
 * Returns: a #GSocket or %NULL on error. Free the returned object with g_object_unref().
 * Since: 2.22
 */


/**
 * g_socket_new_from_fd:
 * @fd: a native socket file descriptor.
 * @error: #GError for error reporting, or %NULL to ignore.
 *
 * Creates a new #GSocket from a native file descriptor
 * or winsock SOCKET handle.
 *
 * This reads all the settings from the file descriptor so that
 * all properties should work. Note that the file descriptor
 * will be set to non-blocking mode, independent on the blocking
 * mode of the #GSocket.
 *
 * Returns: a #GSocket or %NULL on error. Free the returned object with g_object_unref().
 * Since: 2.22
 */


/**
 * g_socket_receive:
 * @socket: a #GSocket
 * @buffer: a buffer to read data into (which should be at least @size bytes long).
 * @size: the number of bytes you want to read from the socket
 * @cancellable: (allow-none): a %GCancellable or %NULL
 * @error: #GError for error reporting, or %NULL to ignore.
 *
 * Receive data (up to @size bytes) from a socket. This is mainly used by
 * connection-oriented sockets; it is identical to g_socket_receive_from()
 * with @address set to %NULL.
 *
 * For %G_SOCKET_TYPE_DATAGRAM and %G_SOCKET_TYPE_SEQPACKET sockets,
 * g_socket_receive() will always read either 0 or 1 complete messages from
 * the socket. If the received message is too large to fit in @buffer, then
 * the data beyond @size bytes will be discarded, without any explicit
 * indication that this has occurred.
 *
 * For %G_SOCKET_TYPE_STREAM sockets, g_socket_receive() can return any
 * number of bytes, up to @size. If more than @size bytes have been
 * received, the additional data will be returned in future calls to
 * g_socket_receive().
 *
 * If the socket is in blocking mode the call will block until there
 * is some data to receive, the connection is closed, or there is an
 * error. If there is no data available and the socket is in
 * non-blocking mode, a %G_IO_ERROR_WOULD_BLOCK error will be
 * returned. To be notified when data is available, wait for the
 * %G_IO_IN condition.
 *
 * On error -1 is returned and @error is set accordingly.
 *
 * Returns: Number of bytes read, or 0 if the connection was closed by the peer, or -1 on error
 * Since: 2.22
 */


/**
 * g_socket_receive_from:
 * @socket: a #GSocket
 * @address: (out) (allow-none): a pointer to a #GSocketAddress pointer, or %NULL
 * @buffer: (array length=size) (element-type guint8): a buffer to read data into (which should be at least @size bytes long).
 * @size: the number of bytes you want to read from the socket
 * @cancellable: (allow-none): a %GCancellable or %NULL
 * @error: #GError for error reporting, or %NULL to ignore.
 *
 * Receive data (up to @size bytes) from a socket.
 *
 * If @address is non-%NULL then @address will be set equal to the
 * source address of the received packet.
 * @address is owned by the caller.
 *
 * See g_socket_receive() for additional information.
 *
 * Returns: Number of bytes read, or 0 if the connection was closed by the peer, or -1 on error
 * Since: 2.22
 */


/**
 * g_socket_receive_message:
 * @socket: a #GSocket
 * @address: (out) (allow-none): a pointer to a #GSocketAddress pointer, or %NULL
 * @vectors: (array length=num_vectors): an array of #GInputVector structs
 * @num_vectors: the number of elements in @vectors, or -1
 * @messages: (array length=num_messages) (allow-none): a pointer which may be filled with an array of #GSocketControlMessages, or %NULL
 * @num_messages: a pointer which will be filled with the number of elements in @messages, or %NULL
 * @flags: a pointer to an int containing #GSocketMsgFlags flags
 * @cancellable: (allow-none): a %GCancellable or %NULL
 * @error: a #GError pointer, or %NULL
 *
 * Receive data from a socket.  This is the most complicated and
 * fully-featured version of this call. For easier use, see
 * g_socket_receive() and g_socket_receive_from().
 *
 * If @address is non-%NULL then @address will be set equal to the
 * source address of the received packet.
 * @address is owned by the caller.
 *
 * @vector must point to an array of #GInputVector structs and
 * @num_vectors must be the length of this array.  These structs
 * describe the buffers that received data will be scattered into.
 * If @num_vectors is -1, then @vectors is assumed to be terminated
 * by a #GInputVector with a %NULL buffer pointer.
 *
 * As a special case, if @num_vectors is 0 (in which case, @vectors
 * may of course be %NULL), then a single byte is received and
 * discarded. This is to facilitate the common practice of sending a
 * single '\0' byte for the purposes of transferring ancillary data.
 *
 * @messages, if non-%NULL, will be set to point to a newly-allocated
 * array of #GSocketControlMessage instances or %NULL if no such
 * messages was received. These correspond to the control messages
 * received from the kernel, one #GSocketControlMessage per message
 * from the kernel. This array is %NULL-terminated and must be freed
 * by the caller using g_free() after calling g_object_unref() on each
 * element. If @messages is %NULL, any control messages received will
 * be discarded.
 *
 * @num_messages, if non-%NULL, will be set to the number of control
 * messages received.
 *
 * If both @messages and @num_messages are non-%NULL, then
 * @num_messages gives the number of #GSocketControlMessage instances
 * in @messages (ie: not including the %NULL terminator).
 *
 * @flags is an in/out parameter. The commonly available arguments
 * for this are available in the #GSocketMsgFlags enum, but the
 * values there are the same as the system values, and the flags
 * are passed in as-is, so you can pass in system-specific flags too
 * (and g_socket_receive_message() may pass system-specific flags out).
 *
 * As with g_socket_receive(), data may be discarded if @socket is
 * %G_SOCKET_TYPE_DATAGRAM or %G_SOCKET_TYPE_SEQPACKET and you do not
 * provide enough buffer space to read a complete message. You can pass
 * %G_SOCKET_MSG_PEEK in @flags to peek at the current message without
 * removing it from the receive queue, but there is no portable way to find
 * out the length of the message other than by reading it into a
 * sufficiently-large buffer.
 *
 * If the socket is in blocking mode the call will block until there
 * is some data to receive, the connection is closed, or there is an
 * error. If there is no data available and the socket is in
 * non-blocking mode, a %G_IO_ERROR_WOULD_BLOCK error will be
 * returned. To be notified when data is available, wait for the
 * %G_IO_IN condition.
 *
 * On error -1 is returned and @error is set accordingly.
 *
 * Returns: Number of bytes read, or 0 if the connection was closed by the peer, or -1 on error
 * Since: 2.22
 */


/**
 * g_socket_receive_with_blocking:
 * @socket: a #GSocket
 * @buffer: a buffer to read data into (which should be at least @size bytes long).
 * @size: the number of bytes you want to read from the socket
 * @blocking: whether to do blocking or non-blocking I/O
 * @cancellable: (allow-none): a %GCancellable or %NULL
 * @error: #GError for error reporting, or %NULL to ignore.
 *
 * This behaves exactly the same as g_socket_receive(), except that
 * the choice of blocking or non-blocking behavior is determined by
 * the @blocking argument rather than by @socket's properties.
 *
 * Returns: Number of bytes read, or 0 if the connection was closed by the peer, or -1 on error
 * Since: 2.26
 */


/**
 * g_socket_send:
 * @socket: a #GSocket
 * @buffer: (array length=size) (element-type guint8): the buffer containing the data to send.
 * @size: the number of bytes to send
 * @cancellable: (allow-none): a %GCancellable or %NULL
 * @error: #GError for error reporting, or %NULL to ignore.
 *
 * Tries to send @size bytes from @buffer on the socket. This is
 * mainly used by connection-oriented sockets; it is identical to
 * g_socket_send_to() with @address set to %NULL.
 *
 * If the socket is in blocking mode the call will block until there is
 * space for the data in the socket queue. If there is no space available
 * and the socket is in non-blocking mode a %G_IO_ERROR_WOULD_BLOCK error
 * will be returned. To be notified when space is available, wait for the
 * %G_IO_OUT condition. Note though that you may still receive
 * %G_IO_ERROR_WOULD_BLOCK from g_socket_send() even if you were previously
 * notified of a %G_IO_OUT condition. (On Windows in particular, this is
 * very common due to the way the underlying APIs work.)
 *
 * On error -1 is returned and @error is set accordingly.
 *
 * Returns: Number of bytes written (which may be less than @size), or -1 on error
 * Since: 2.22
 */


/**
 * g_socket_send_message:
 * @socket: a #GSocket
 * @address: (allow-none): a #GSocketAddress, or %NULL
 * @vectors: (array length=num_vectors): an array of #GOutputVector structs
 * @num_vectors: the number of elements in @vectors, or -1
 * @messages: (array length=num_messages) (allow-none): a pointer to an array of #GSocketControlMessages, or %NULL.
 * @num_messages: number of elements in @messages, or -1.
 * @flags: an int containing #GSocketMsgFlags flags
 * @cancellable: (allow-none): a %GCancellable or %NULL
 * @error: #GError for error reporting, or %NULL to ignore.
 *
 * Send data to @address on @socket.  This is the most complicated and
 * fully-featured version of this call. For easier use, see
 * g_socket_send() and g_socket_send_to().
 *
 * If @address is %NULL then the message is sent to the default receiver
 * (set by g_socket_connect()).
 *
 * @vectors must point to an array of #GOutputVector structs and
 * @num_vectors must be the length of this array. (If @num_vectors is -1,
 * then @vectors is assumed to be terminated by a #GOutputVector with a
 * %NULL buffer pointer.) The #GOutputVector structs describe the buffers
 * that the sent data will be gathered from. Using multiple
 * #GOutputVector<!-- -->s is more memory-efficient than manually copying
 * data from multiple sources into a single buffer, and more
 * network-efficient than making multiple calls to g_socket_send().
 *
 * @messages, if non-%NULL, is taken to point to an array of @num_messages
 * #GSocketControlMessage instances. These correspond to the control
 * messages to be sent on the socket.
 * If @num_messages is -1 then @messages is treated as a %NULL-terminated
 * array.
 *
 * @flags modify how the message is sent. The commonly available arguments
 * for this are available in the #GSocketMsgFlags enum, but the
 * values there are the same as the system values, and the flags
 * are passed in as-is, so you can pass in system-specific flags too.
 *
 * If the socket is in blocking mode the call will block until there is
 * space for the data in the socket queue. If there is no space available
 * and the socket is in non-blocking mode a %G_IO_ERROR_WOULD_BLOCK error
 * will be returned. To be notified when space is available, wait for the
 * %G_IO_OUT condition. Note though that you may still receive
 * %G_IO_ERROR_WOULD_BLOCK from g_socket_send() even if you were previously
 * notified of a %G_IO_OUT condition. (On Windows in particular, this is
 * very common due to the way the underlying APIs work.)
 *
 * On error -1 is returned and @error is set accordingly.
 *
 * Returns: Number of bytes written (which may be less than @size), or -1 on error
 * Since: 2.22
 */


/**
 * g_socket_send_to:
 * @socket: a #GSocket
 * @address: (allow-none): a #GSocketAddress, or %NULL
 * @buffer: (array length=size) (element-type guint8): the buffer containing the data to send.
 * @size: the number of bytes to send
 * @cancellable: (allow-none): a %GCancellable or %NULL
 * @error: #GError for error reporting, or %NULL to ignore.
 *
 * Tries to send @size bytes from @buffer to @address. If @address is
 * %NULL then the message is sent to the default receiver (set by
 * g_socket_connect()).
 *
 * See g_socket_send() for additional information.
 *
 * Returns: Number of bytes written (which may be less than @size), or -1 on error
 * Since: 2.22
 */


/**
 * g_socket_send_with_blocking:
 * @socket: a #GSocket
 * @buffer: (array length=size) (element-type guint8): the buffer containing the data to send.
 * @size: the number of bytes to send
 * @blocking: whether to do blocking or non-blocking I/O
 * @cancellable: (allow-none): a %GCancellable or %NULL
 * @error: #GError for error reporting, or %NULL to ignore.
 *
 * This behaves exactly the same as g_socket_send(), except that
 * the choice of blocking or non-blocking behavior is determined by
 * the @blocking argument rather than by @socket's properties.
 *
 * Returns: Number of bytes written (which may be less than @size), or -1 on error
 * Since: 2.26
 */


/**
 * g_socket_service_is_active:
 * @service: a #GSocketService
 *
 * Check whether the service is active or not. An active
 * service will accept new clients that connect, while
 * a non-active service will let connecting clients queue
 * up until the service is started.
 *
 * Returns: %TRUE if the service is active, %FALSE otherwise
 * Since: 2.22
 */


/**
 * g_socket_service_new:
 *
 * Creates a new #GSocketService with no sockets to listen for.
 * New listeners can be added with e.g. g_socket_listener_add_address()
 * or g_socket_listener_add_inet_port().
 *
 * Returns: a new #GSocketService.
 * Since: 2.22
 */


/**
 * g_socket_service_start:
 * @service: a #GSocketService
 *
 * Starts the service, i.e. start accepting connections
 * from the added sockets when the mainloop runs.
 *
 * This call is thread-safe, so it may be called from a thread
 * handling an incoming client request.
 *
 * Since: 2.22
 */


/**
 * g_socket_service_stop:
 * @service: a #GSocketService
 *
 * Stops the service, i.e. stops accepting connections
 * from the added sockets when the mainloop runs.
 *
 * This call is thread-safe, so it may be called from a thread
 * handling an incoming client request.
 *
 * Since: 2.22
 */


/**
 * g_socket_set_blocking:
 * @socket: a #GSocket.
 * @blocking: Whether to use blocking I/O or not.
 *
 * Sets the blocking mode of the socket. In blocking mode
 * all operations block until they succeed or there is an error. In
 * non-blocking mode all functions return results immediately or
 * with a %G_IO_ERROR_WOULD_BLOCK error.
 *
 * All sockets are created in blocking mode. However, note that the
 * platform level socket is always non-blocking, and blocking mode
 * is a GSocket level feature.
 *
 * Since: 2.22
 */


/**
 * g_socket_set_broadcast:
 * @socket: a #GSocket.
 * @broadcast: whether @socket should allow sending to and receiving from broadcast addresses
 *
 * Sets whether @socket should allow sending to and receiving from
 * broadcast addresses. This is %FALSE by default.
 *
 * Since: 2.32
 */


/**
 * g_socket_set_keepalive:
 * @socket: a #GSocket.
 * @keepalive: Value for the keepalive flag
 *
 * Sets or unsets the %SO_KEEPALIVE flag on the underlying socket. When
 * this flag is set on a socket, the system will attempt to verify that the
 * remote socket endpoint is still present if a sufficiently long period of
 * time passes with no data being exchanged. If the system is unable to
 * verify the presence of the remote endpoint, it will automatically close
 * the connection.
 *
 * This option is only functional on certain kinds of sockets. (Notably,
 * %G_SOCKET_PROTOCOL_TCP sockets.)
 *
 * The exact time between pings is system- and protocol-dependent, but will
 * normally be at least two hours. Most commonly, you would set this flag
 * on a server socket if you want to allow clients to remain idle for long
 * periods of time, but also want to ensure that connections are eventually
 * garbage-collected if clients crash or become unreachable.
 *
 * Since: 2.22
 */


/**
 * g_socket_set_listen_backlog:
 * @socket: a #GSocket.
 * @backlog: the maximum number of pending connections.
 *
 * Sets the maximum number of outstanding connections allowed
 * when listening on this socket. If more clients than this are
 * connecting to the socket and the application is not handling them
 * on time then the new connections will be refused.
 *
 * Note that this must be called before g_socket_listen() and has no
 * effect if called after that.
 *
 * Since: 2.22
 */


/**
 * g_socket_set_multicast_loopback:
 * @socket: a #GSocket.
 * @loopback: whether @socket should receive messages sent to its multicast groups from the local host
 *
 * Sets whether outgoing multicast packets will be received by sockets
 * listening on that multicast address on the same host. This is %TRUE
 * by default.
 *
 * Since: 2.32
 */


/**
 * g_socket_set_multicast_ttl:
 * @socket: a #GSocket.
 * @ttl: the time-to-live value for all multicast datagrams on @socket
 *
 * Sets the time-to-live for outgoing multicast datagrams on @socket.
 * By default, this is 1, meaning that multicast packets will not leave
 * the local network.
 *
 * Since: 2.32
 */


/**
 * g_socket_set_timeout:
 * @socket: a #GSocket.
 * @timeout: the timeout for @socket, in seconds, or 0 for none
 *
 * Sets the time in seconds after which I/O operations on @socket will
 * time out if they have not yet completed.
 *
 * On a blocking socket, this means that any blocking #GSocket
 * operation will time out after @timeout seconds of inactivity,
 * returning %G_IO_ERROR_TIMED_OUT.
 *
 * On a non-blocking socket, calls to g_socket_condition_wait() will
 * also fail with %G_IO_ERROR_TIMED_OUT after the given time. Sources
 * created with g_socket_create_source() will trigger after
 * @timeout seconds of inactivity, with the requested condition
 * set, at which point calling g_socket_receive(), g_socket_send(),
 * g_socket_check_connect_result(), etc, will fail with
 * %G_IO_ERROR_TIMED_OUT.
 *
 * If @timeout is 0 (the default), operations will never time out
 * on their own.
 *
 * Note that if an I/O operation is interrupted by a signal, this may
 * cause the timeout to be reset.
 *
 * Since: 2.26
 */


/**
 * g_socket_set_ttl:
 * @socket: a #GSocket.
 * @ttl: the time-to-live value for all unicast packets on @socket
 *
 * Sets the time-to-live for outgoing unicast packets on @socket.
 * By default the platform-specific default value is used.
 *
 * Since: 2.32
 */


/**
 * g_socket_shutdown:
 * @socket: a #GSocket
 * @shutdown_read: whether to shut down the read side
 * @shutdown_write: whether to shut down the write side
 * @error: #GError for error reporting, or %NULL to ignore.
 *
 * Shut down part of a full-duplex connection.
 *
 * If @shutdown_read is %TRUE then the receiving side of the connection
 * is shut down, and further reading is disallowed.
 *
 * If @shutdown_write is %TRUE then the sending side of the connection
 * is shut down, and further writing is disallowed.
 *
 * It is allowed for both @shutdown_read and @shutdown_write to be %TRUE.
 *
 * One example where this is used is graceful disconnect for TCP connections
 * where you close the sending side, then wait for the other side to close
 * the connection, thus ensuring that the other side saw all sent data.
 *
 * Returns: %TRUE on success, %FALSE on error
 * Since: 2.22
 */


/**
 * g_socket_speaks_ipv4:
 * @socket: a #GSocket
 *
 * Checks if a socket is capable of speaking IPv4.
 *
 * IPv4 sockets are capable of speaking IPv4.  On some operating systems
 * and under some combinations of circumstances IPv6 sockets are also
 * capable of speaking IPv4.  See RFC 3493 section 3.7 for more
 * information.
 *
 * No other types of sockets are currently considered as being capable
 * of speaking IPv4.
 *
 * Returns: %TRUE if this socket can be used with IPv4.
 * Since: 2.22
 */


/**
 * g_srv_target_copy:
 * @target: a #GSrvTarget
 *
 * Copies @target
 *
 * Returns: a copy of @target
 * Since: 2.22
 */


/**
 * g_srv_target_free:
 * @target: a #GSrvTarget
 *
 * Frees @target
 *
 * Since: 2.22
 */


/**
 * g_srv_target_get_hostname:
 * @target: a #GSrvTarget
 *
 * Gets @target's hostname (in ASCII form; if you are going to present
 * this to the user, you should use g_hostname_is_ascii_encoded() to
 * check if it contains encoded Unicode segments, and use
 * g_hostname_to_unicode() to convert it if it does.)
 *
 * Returns: @target's hostname
 * Since: 2.22
 */


/**
 * g_srv_target_get_port:
 * @target: a #GSrvTarget
 *
 * Gets @target's port
 *
 * Returns: @target's port
 * Since: 2.22
 */


/**
 * g_srv_target_get_priority:
 * @target: a #GSrvTarget
 *
 * Gets @target's priority. You should not need to look at this;
 * #GResolver already sorts the targets according to the algorithm in
 * RFC 2782.
 *
 * Returns: @target's priority
 * Since: 2.22
 */


/**
 * g_srv_target_get_weight:
 * @target: a #GSrvTarget
 *
 * Gets @target's weight. You should not need to look at this;
 * #GResolver already sorts the targets according to the algorithm in
 * RFC 2782.
 *
 * Returns: @target's weight
 * Since: 2.22
 */


/**
 * g_srv_target_list_sort: (skip)
 * @targets: a #GList of #GSrvTarget
 *
 * Sorts @targets in place according to the algorithm in RFC 2782.
 *
 * Returns: (transfer full): the head of the sorted list.
 * Since: 2.22
 */


/**
 * g_srv_target_new:
 * @hostname: the host that the service is running on
 * @port: the port that the service is running on
 * @priority: the target's priority
 * @weight: the target's weight
 *
 * Creates a new #GSrvTarget with the given parameters.
 *
 * You should not need to use this; normally #GSrvTarget<!-- -->s are
 * created by #GResolver.
 *
 * Returns: a new #GSrvTarget.
 * Since: 2.22
 */


/**
 * g_static_resource_fini:
 * @static_resource: pointer to a static #GStaticResource
 *
 * Finalized a GResource initialized by g_static_resource_init().
 *
 * This is normally used by code generated by
 * <link linkend="glib-compile-resources">glib-compile-resources</link>
 * and is not typically used by other code.
 *
 * Since: 2.32
 */


/**
 * g_static_resource_get_resource:
 * @static_resource: pointer to a static #GStaticResource
 *
 * Gets the GResource that was registred by a call to g_static_resource_init().
 *
 * This is normally used by code generated by
 * <link linkend="glib-compile-resources">glib-compile-resources</link>
 * and is not typically used by other code.
 *
 * Returns: (transfer none): a #GResource
 * Since: 2.32
 */


/**
 * g_static_resource_init:
 * @static_resource: pointer to a static #GStaticResource
 *
 * Initializes a GResource from static data using a
 * GStaticResource.
 *
 * This is normally used by code generated by
 * <link linkend="glib-compile-resources">glib-compile-resources</link>
 * and is not typically used by other code.
 *
 * Since: 2.32
 */


/**
 * g_tcp_connection_get_graceful_disconnect:
 * @connection: a #GTcpConnection
 *
 * Checks if graceful disconnects are used. See
 * g_tcp_connection_set_graceful_disconnect().
 *
 * Returns: %TRUE if graceful disconnect is used on close, %FALSE otherwise
 * Since: 2.22
 */


/**
 * g_tcp_connection_set_graceful_disconnect:
 * @connection: a #GTcpConnection
 * @graceful_disconnect: Whether to do graceful disconnects or not
 *
 * This enabled graceful disconnects on close. A graceful disconnect
 * means that we signal the receiving end that the connection is terminated
 * and wait for it to close the connection before closing the connection.
 *
 * A graceful disconnect means that we can be sure that we successfully sent
 * all the outstanding data to the other end, or get an error reported.
 * However, it also means we have to wait for all the data to reach the
 * other side and for it to acknowledge this by closing the socket, which may
 * take a while. For this reason it is disabled by default.
 *
 * Since: 2.22
 */


/**
 * g_tcp_wrapper_connection_get_base_io_stream:
 * @conn: a #GTcpWrapperConnection
 *
 * Get's @conn's base #GIOStream
 *
 * Returns: (transfer none): @conn's base #GIOStream
 */


/**
 * g_tcp_wrapper_connection_new:
 * @base_io_stream: the #GIOStream to wrap
 * @socket: the #GSocket associated with @base_io_stream
 *
 * Wraps @base_io_stream and @socket together as a #GSocketConnection.
 *
 * Returns: the new #GSocketConnection.
 * Since: 2.28
 */


/**
 * g_test_dbus_add_service_dir:
 * @self: a #GTestDBus
 * @path: path to a directory containing .service files
 *
 * Add a path where dbus-daemon will lookup for .services files. This can't be
 * called after g_test_dbus_up().
 */


/**
 * g_test_dbus_down:
 * @self: a #GTestDBus
 *
 * Stop the session bus started by g_test_dbus_up().
 *
 * This will wait for the singleton returned by g_bus_get() or g_bus_get_sync()
 * is destroyed. This is done to ensure that the next unit test won't get a
 * leaked singleton from this test.
 */


/**
 * g_test_dbus_get_bus_address:
 * @self: a #GTestDBus
 *
 * Get the address on which dbus-daemon is running. if g_test_dbus_up() has not
 * been called yet, %NULL is returned. This can be used with
 * g_dbus_connection_new_for_address()
 *
 * Returns: the address of the bus, or %NULL.
 */


/**
 * g_test_dbus_get_flags:
 * @self: a #GTestDBus
 *
 *
 *
 * Returns: the value of #GTestDBus:flags property
 */


/**
 * g_test_dbus_new:
 * @flags: a #GTestDBusFlags
 *
 * Create a new #GTestDBus object.
 *
 * Returns: (transfer full): a new #GTestDBus.
 */


/**
 * g_test_dbus_stop:
 * @self: a #GTestDBus
 *
 * Stop the session bus started by g_test_dbus_up().
 *
 * Unlike g_test_dbus_down(), this won't verify the #GDBusConnection
 * singleton returned by g_bus_get() or g_bus_get_sync() is destroyed. Unit
 * tests wanting to verify behaviour after the session bus has been stopped
 * can use this function but should still call g_test_dbus_down() when done.
 */


/**
 * g_test_dbus_unset:
 *
 * Unset DISPLAY and DBUS_SESSION_BUS_ADDRESS env variables to ensure the test
 * won't use user's session bus.
 *
 * This is useful for unit tests that want to verify behaviour when no session
 * bus is running. It is not necessary to call this if unit test already calls
 * g_test_dbus_up() before acquiring the session bus.
 */


/**
 * g_test_dbus_up:
 * @self: a #GTestDBus
 *
 * Start a dbus-daemon instance and set DBUS_SESSION_BUS_ADDRESS. After this
 * call, it is safe for unit tests to start sending messages on the session bug.
 *
 * If this function is called from setup callback of g_test_add(),
 * g_test_dbus_down() must be called in its teardown callback.
 *
 * If this function is called from unit test's main(), then g_test_dbus_down()
 * must be called after g_test_run().
 */


/**
 * g_themed_icon_append_name:
 * @icon: a #GThemedIcon
 * @iconname: name of icon to append to list of icons from within @icon.
 *
 * Append a name to the list of icons from within @icon.
 *
 * <note><para>
 * Note that doing so invalidates the hash computed by prior calls
 * to g_icon_hash().
 * </para></note>
 */


/**
 * g_themed_icon_get_names:
 * @icon: a #GThemedIcon.
 *
 * Gets the names of icons from within @icon.
 *
 * Returns: (transfer none): a list of icon names.
 */


/**
 * g_themed_icon_new:
 * @iconname: a string containing an icon name.
 *
 * Creates a new themed icon for @iconname.
 *
 * Returns: (transfer full) (type GThemedIcon): a new #GThemedIcon.
 */


/**
 * g_themed_icon_new_from_names:
 * @iconnames: (array length=len): an array of strings containing icon names.
 * @len: the length of the @iconnames array, or -1 if @iconnames is %NULL-terminated
 *
 * Creates a new themed icon for @iconnames.
 *
 * Returns: (transfer full) (type GThemedIcon): a new #GThemedIcon
 */


/**
 * g_themed_icon_new_with_default_fallbacks:
 * @iconname: a string containing an icon name
 *
 * Creates a new themed icon for @iconname, and all the names
 * that can be created by shortening @iconname at '-' characters.
 *
 * In the following example, @icon1 and @icon2 are equivalent:
 * |[
 * const char *names[] = {
 *   "gnome-dev-cdrom-audio",
 *   "gnome-dev-cdrom",
 *   "gnome-dev",
 *   "gnome"
 * };
 *
 * icon1 = g_themed_icon_new_from_names (names, 4);
 * icon2 = g_themed_icon_new_with_default_fallbacks ("gnome-dev-cdrom-audio");
 * ]|
 *
 * Returns: (transfer full) (type GThemedIcon): a new #GThemedIcon.
 */


/**
 * g_themed_icon_prepend_name:
 * @icon: a #GThemedIcon
 * @iconname: name of icon to prepend to list of icons from within @icon.
 *
 * Prepend a name to the list of icons from within @icon.
 *
 * <note><para>
 * Note that doing so invalidates the hash computed by prior calls
 * to g_icon_hash().
 * </para></note>
 *
 * Since: 2.18
 */


/**
 * g_threaded_socket_service_new:
 * @max_threads: the maximal number of threads to execute concurrently handling incoming clients, -1 means no limit
 *
 * Creates a new #GThreadedSocketService with no listeners. Listeners
 * must be added with one of the #GSocketListener "add" methods.
 *
 * Returns: a new #GSocketService.
 * Since: 2.22
 */


/**
 * g_tls_backend_get_certificate_type:
 * @backend: the #GTlsBackend
 *
 * Gets the #GType of @backend's #GTlsCertificate implementation.
 *
 * Returns: the #GType of @backend's #GTlsCertificate implementation.
 * Since: 2.28
 */


/**
 * g_tls_backend_get_client_connection_type:
 * @backend: the #GTlsBackend
 *
 * Gets the #GType of @backend's #GTlsClientConnection implementation.
 *
 * Returns: the #GType of @backend's #GTlsClientConnection implementation.
 * Since: 2.28
 */


/**
 * g_tls_backend_get_default:
 *
 * Gets the default #GTlsBackend for the system.
 *
 * Returns: (transfer none): a #GTlsBackend
 * Since: 2.28
 */


/**
 * g_tls_backend_get_default_database:
 * @backend: the #GTlsBackend
 *
 * Gets the default #GTlsDatabase used to verify TLS connections.
 *
 * Returns: (transfer full): the default database, which should be unreffed when done.
 * Since: 2.30
 */


/**
 * g_tls_backend_get_file_database_type:
 * @backend: the #GTlsBackend
 *
 * Gets the #GType of @backend's #GTlsFileDatabase implementation.
 *
 * Returns: the #GType of backend's #GTlsFileDatabase implementation.
 * Since: 2.30
 */


/**
 * g_tls_backend_get_server_connection_type:
 * @backend: the #GTlsBackend
 *
 * Gets the #GType of @backend's #GTlsServerConnection implementation.
 *
 * Returns: the #GType of @backend's #GTlsServerConnection implementation.
 * Since: 2.28
 */


/**
 * g_tls_backend_supports_tls:
 * @backend: the #GTlsBackend
 *
 * Checks if TLS is supported; if this returns %FALSE for the default
 * #GTlsBackend, it means no "real" TLS backend is available.
 *
 * Returns: whether or not TLS is supported
 * Since: 2.28
 */


/**
 * g_tls_certificate_get_issuer:
 * @cert: a #GTlsCertificate
 *
 * Gets the #GTlsCertificate representing @cert's issuer, if known
 *
 * Returns: (transfer none): The certificate of @cert's issuer, or %NULL if @cert is self-signed or signed with an unknown certificate.
 * Since: 2.28
 */


/**
 * g_tls_certificate_list_new_from_file:
 * @file: file containing PEM-encoded certificates to import
 * @error: #GError for error reporting, or %NULL to ignore.
 *
 * Creates one or more #GTlsCertificate<!-- -->s from the PEM-encoded
 * data in @file. If @file cannot be read or parsed, the function will
 * return %NULL and set @error. If @file does not contain any
 * PEM-encoded certificates, this will return an empty list and not
 * set @error.
 *
 * Returns: (element-type Gio.TlsCertificate) (transfer full): a #GList containing #GTlsCertificate objects. You must free the list and its contents when you are done with it.
 * Since: 2.28
 */


/**
 * g_tls_certificate_new_from_file:
 * @file: file containing a PEM-encoded certificate to import
 * @error: #GError for error reporting, or %NULL to ignore.
 *
 * Creates a #GTlsCertificate from the PEM-encoded data in @file. If
 * @file cannot be read or parsed, the function will return %NULL and
 * set @error. Otherwise, this behaves like
 * g_tls_certificate_new_from_pem().
 *
 * Returns: the new certificate, or %NULL on error
 * Since: 2.28
 */


/**
 * g_tls_certificate_new_from_files:
 * @cert_file: file containing a PEM-encoded certificate to import
 * @key_file: file containing a PEM-encoded private key to import
 * @error: #GError for error reporting, or %NULL to ignore.
 *
 * Creates a #GTlsCertificate from the PEM-encoded data in @cert_file
 * and @key_file. If either file cannot be read or parsed, the
 * function will return %NULL and set @error. Otherwise, this behaves
 * like g_tls_certificate_new_from_pem().
 *
 * Returns: the new certificate, or %NULL on error
 * Since: 2.28
 */


/**
 * g_tls_certificate_new_from_pem:
 * @data: PEM-encoded certificate data
 * @length: the length of @data, or -1 if it's 0-terminated.
 * @error: #GError for error reporting, or %NULL to ignore.
 *
 * Creates a new #GTlsCertificate from the PEM-encoded data in @data.
 * If @data includes both a certificate and a private key, then the
 * returned certificate will include the private key data as well. (See
 * the #GTlsCertificate:private-key-pem property for information about
 * supported formats.)
 *
 * If @data includes multiple certificates, only the first one will be
 * parsed.
 *
 * Returns: the new certificate, or %NULL if @data is invalid
 * Since: 2.28
 */


/**
 * g_tls_certificate_verify:
 * @cert: a #GTlsCertificate
 * @identity: (allow-none): the expected peer identity
 * @trusted_ca: (allow-none): the certificate of a trusted authority
 *
 * This verifies @cert and returns a set of #GTlsCertificateFlags
 * indicating any problems found with it. This can be used to verify a
 * certificate outside the context of making a connection, or to
 * check a certificate against a CA that is not part of the system
 * CA database.
 *
 * If @identity is not %NULL, @cert's name(s) will be compared against
 * it, and %G_TLS_CERTIFICATE_BAD_IDENTITY will be set in the return
 * value if it does not match. If @identity is %NULL, that bit will
 * never be set in the return value.
 *
 * If @trusted_ca is not %NULL, then @cert (or one of the certificates
 * in its chain) must be signed by it, or else
 * %G_TLS_CERTIFICATE_UNKNOWN_CA will be set in the return value. If
 * @trusted_ca is %NULL, that bit will never be set in the return
 * value.
 *
 * (All other #GTlsCertificateFlags values will always be set or unset
 * as appropriate.)
 *
 * Returns: the appropriate #GTlsCertificateFlags
 * Since: 2.28
 */


/**
 * g_tls_client_connection_get_accepted_cas:
 * @conn: the #GTlsClientConnection
 *
 * Gets the list of distinguished names of the Certificate Authorities
 * that the server will accept certificates from. This will be set
 * during the TLS handshake if the server requests a certificate.
 * Otherwise, it will be %NULL.
 *
 * Each item in the list is a #GByteArray which contains the complete
 * subject DN of the certificate authority.
 *
 * Returns: (element-type GByteArray) (transfer full): the list of CA DNs. You should unref each element with g_byte_array_unref() and then the free the list with g_list_free().
 * Since: 2.28
 */


/**
 * g_tls_client_connection_get_server_identity:
 * @conn: the #GTlsClientConnection
 *
 * Gets @conn's expected server identity
 *
 * Returns: (transfer none): a #GSocketConnectable describing the expected server identity, or %NULL if the expected identity is not known.
 * Since: 2.28
 */


/**
 * g_tls_client_connection_get_use_ssl3:
 * @conn: the #GTlsClientConnection
 *
 * Gets whether @conn will use SSL 3.0 rather than the
 * highest-supported version of TLS; see
 * g_tls_client_connection_set_use_ssl3().
 *
 * Returns: whether @conn will use SSL 3.0
 * Since: 2.28
 */


/**
 * g_tls_client_connection_get_validation_flags:
 * @conn: the #GTlsClientConnection
 *
 * Gets @conn's validation flags
 *
 * Returns: the validation flags
 * Since: 2.28
 */


/**
 * g_tls_client_connection_new:
 * @base_io_stream: the #GIOStream to wrap
 * @server_identity: (allow-none): the expected identity of the server
 * @error: #GError for error reporting, or %NULL to ignore.
 *
 * Creates a new #GTlsClientConnection wrapping @base_io_stream (which
 * must have pollable input and output streams) which is assumed to
 * communicate with the server identified by @server_identity.
 *
 * Returns: (transfer full) (type GTlsClientConnection): the new #GTlsClientConnection, or %NULL on error
 * Since: 2.28
 */


/**
 * g_tls_client_connection_set_server_identity:
 * @conn: the #GTlsClientConnection
 * @identity: a #GSocketConnectable describing the expected server identity
 *
 * Sets @conn's expected server identity, which is used both to tell
 * servers on virtual hosts which certificate to present, and also
 * to let @conn know what name to look for in the certificate when
 * performing %G_TLS_CERTIFICATE_BAD_IDENTITY validation, if enabled.
 *
 * Since: 2.28
 */


/**
 * g_tls_client_connection_set_use_ssl3:
 * @conn: the #GTlsClientConnection
 * @use_ssl3: whether to use SSL 3.0
 *
 * If @use_ssl3 is %TRUE, this forces @conn to use SSL 3.0 rather than
 * trying to properly negotiate the right version of TLS or SSL to use.
 * This can be used when talking to servers that do not implement the
 * fallbacks correctly and which will therefore fail to handshake with
 * a "modern" TLS handshake attempt.
 *
 * Since: 2.28
 */


/**
 * g_tls_client_connection_set_validation_flags:
 * @conn: the #GTlsClientConnection
 * @flags: the #GTlsCertificateFlags to use
 *
 * Sets @conn's validation flags, to override the default set of
 * checks performed when validating a server certificate. By default,
 * %G_TLS_CERTIFICATE_VALIDATE_ALL is used.
 *
 * Since: 2.28
 */


/**
 * g_tls_connection_emit_accept_certificate:
 * @conn: a #GTlsConnection
 * @peer_cert: the peer's #GTlsCertificate
 * @errors: the problems with @peer_cert
 *
 * Used by #GTlsConnection implementations to emit the
 * #GTlsConnection::accept-certificate signal.
 *
 * Returns: %TRUE if one of the signal handlers has returned %TRUE to accept @peer_cert
 * Since: 2.28
 */


/**
 * g_tls_connection_get_certificate:
 * @conn: a #GTlsConnection
 *
 * Gets @conn's certificate, as set by
 * g_tls_connection_set_certificate().
 *
 * Returns: (transfer none): @conn's certificate, or %NULL
 * Since: 2.28
 */


/**
 * g_tls_connection_get_database:
 * @conn: a #GTlsConnection
 *
 * Gets the certificate database that @conn uses to verify
 * peer certificates. See g_tls_connection_set_database().
 *
 * Returns: (transfer none): the certificate database that @conn uses or %NULL
 * Since: 2.30
 */


/**
 * g_tls_connection_get_interaction:
 * @conn: a connection
 *
 * Get the object that will be used to interact with the user. It will be used
 * for things like prompting the user for passwords. If %NULL is returned, then
 * no user interaction will occur for this connection.
 *
 * Returns: (transfer none): The interaction object.
 * Since: 2.30
 */


/**
 * g_tls_connection_get_peer_certificate:
 * @conn: a #GTlsConnection
 *
 * Gets @conn's peer's certificate after the handshake has completed.
 * (It is not set during the emission of
 * #GTlsConnection::accept-certificate.)
 *
 * Returns: (transfer none): @conn's peer's certificate, or %NULL
 * Since: 2.28
 */


/**
 * g_tls_connection_get_peer_certificate_errors:
 * @conn: a #GTlsConnection
 *
 * Gets the errors associated with validating @conn's peer's
 * certificate, after the handshake has completed. (It is not set
 * during the emission of #GTlsConnection::accept-certificate.)
 *
 * Returns: @conn's peer's certificate errors
 * Since: 2.28
 */


/**
 * g_tls_connection_get_rehandshake_mode:
 * @conn: a #GTlsConnection
 *
 * Gets @conn rehandshaking mode. See
 * g_tls_connection_set_rehandshake_mode() for details.
 *
 * Returns: @conn's rehandshaking mode
 * Since: 2.28
 */


/**
 * g_tls_connection_get_require_close_notify:
 * @conn: a #GTlsConnection
 *
 * Tests whether or not @conn expects a proper TLS close notification
 * when the connection is closed. See
 * g_tls_connection_set_require_close_notify() for details.
 *
 * Returns: %TRUE if @conn requires a proper TLS close notification.
 * Since: 2.28
 */


/**
 * g_tls_connection_get_use_system_certdb:
 * @conn: a #GTlsConnection
 *
 * Gets whether @conn uses the system certificate database to verify
 * peer certificates. See g_tls_connection_set_use_system_certdb().
 *
 * Returns: whether @conn uses the system certificate database
 * Deprecated: 2.30: Use g_tls_connection_get_database() instead
 */


/**
 * g_tls_connection_handshake:
 * @conn: a #GTlsConnection
 * @cancellable: (allow-none): a #GCancellable, or %NULL
 * @error: a #GError, or %NULL
 *
 * Attempts a TLS handshake on @conn.
 *
 * On the client side, it is never necessary to call this method;
 * although the connection needs to perform a handshake after
 * connecting (or after sending a "STARTTLS"-type command) and may
 * need to rehandshake later if the server requests it,
 * #GTlsConnection will handle this for you automatically when you try
 * to send or receive data on the connection. However, you can call
 * g_tls_connection_handshake() manually if you want to know for sure
 * whether the initial handshake succeeded or failed (as opposed to
 * just immediately trying to write to @conn's output stream, in which
 * case if it fails, it may not be possible to tell if it failed
 * before or after completing the handshake).
 *
 * Likewise, on the server side, although a handshake is necessary at
 * the beginning of the communication, you do not need to call this
 * function explicitly unless you want clearer error reporting.
 * However, you may call g_tls_connection_handshake() later on to
 * renegotiate parameters (encryption methods, etc) with the client.
 *
 * #GTlsConnection::accept_certificate may be emitted during the
 * handshake.
 *
 * Returns: success or failure
 * Since: 2.28
 */


/**
 * g_tls_connection_handshake_async:
 * @conn: a #GTlsConnection
 * @io_priority: the <link linkend="io-priority">I/O priority</link> of the request.
 * @cancellable: (allow-none): a #GCancellable, or %NULL
 * @callback: callback to call when the handshake is complete
 * @user_data: the data to pass to the callback function
 *
 * Asynchronously performs a TLS handshake on @conn. See
 * g_tls_connection_handshake() for more information.
 *
 * Since: 2.28
 */


/**
 * g_tls_connection_handshake_finish:
 * @conn: a #GTlsConnection
 * @result: a #GAsyncResult.
 * @error: a #GError pointer, or %NULL
 *
 * Finish an asynchronous TLS handshake operation. See
 * g_tls_connection_handshake() for more information.
 *
 * Returns: %TRUE on success, %FALSE on failure, in which case @error will be set.
 * Since: 2.28
 */


/**
 * g_tls_connection_set_certificate:
 * @conn: a #GTlsConnection
 * @certificate: the certificate to use for @conn
 *
 * This sets the certificate that @conn will present to its peer
 * during the TLS handshake. For a #GTlsServerConnection, it is
 * mandatory to set this, and that will normally be done at construct
 * time.
 *
 * For a #GTlsClientConnection, this is optional. If a handshake fails
 * with %G_TLS_ERROR_CERTIFICATE_REQUIRED, that means that the server
 * requires a certificate, and if you try connecting again, you should
 * call this method first. You can call
 * g_tls_client_connection_get_accepted_cas() on the failed connection
 * to get a list of Certificate Authorities that the server will
 * accept certificates from.
 *
 * (It is also possible that a server will allow the connection with
 * or without a certificate; in that case, if you don't provide a
 * certificate, you can tell that the server requested one by the fact
 * that g_tls_client_connection_get_accepted_cas() will return
 * non-%NULL.)
 *
 * Since: 2.28
 */


/**
 * g_tls_connection_set_database:
 * @conn: a #GTlsConnection
 * @database: a #GTlsDatabase
 *
 * Sets the certificate database that is used to verify peer certificates.
 * This is set to the default database by default. See
 * g_tls_backend_get_default_database(). If set to %NULL, then
 * peer certificate validation will always set the
 * %G_TLS_CERTIFICATE_UNKNOWN_CA error (meaning
 * #GTlsConnection::accept-certificate will always be emitted on
 * client-side connections, unless that bit is not set in
 * #GTlsClientConnection:validation-flags).
 *
 * Since: 2.30
 */


/**
 * g_tls_connection_set_interaction:
 * @conn: a connection
 * @interaction: (allow-none): an interaction object, or %NULL
 *
 * Set the object that will be used to interact with the user. It will be used
 * for things like prompting the user for passwords.
 *
 * The @interaction argument will normally be a derived subclass of
 * #GTlsInteraction. %NULL can also be provided if no user interaction
 * should occur for this connection.
 *
 * Since: 2.30
 */


/**
 * g_tls_connection_set_rehandshake_mode:
 * @conn: a #GTlsConnection
 * @mode: the rehandshaking mode
 *
 * Sets how @conn behaves with respect to rehandshaking requests.
 *
 * %G_TLS_REHANDSHAKE_NEVER means that it will never agree to
 * rehandshake after the initial handshake is complete. (For a client,
 * this means it will refuse rehandshake requests from the server, and
 * for a server, this means it will close the connection with an error
 * if the client attempts to rehandshake.)
 *
 * %G_TLS_REHANDSHAKE_SAFELY means that the connection will allow a
 * rehandshake only if the other end of the connection supports the
 * TLS <literal>renegotiation_info</literal> extension. This is the
 * default behavior, but means that rehandshaking will not work
 * against older implementations that do not support that extension.
 *
 * %G_TLS_REHANDSHAKE_UNSAFELY means that the connection will allow
 * rehandshaking even without the
 * <literal>renegotiation_info</literal> extension. On the server side
 * in particular, this is not recommended, since it leaves the server
 * open to certain attacks. However, this mode is necessary if you
 * need to allow renegotiation with older client software.
 *
 * Since: 2.28
 */


/**
 * g_tls_connection_set_require_close_notify:
 * @conn: a #GTlsConnection
 * @require_close_notify: whether or not to require close notification
 *
 * Sets whether or not @conn expects a proper TLS close notification
 * before the connection is closed. If this is %TRUE (the default),
 * then @conn will expect to receive a TLS close notification from its
 * peer before the connection is closed, and will return a
 * %G_TLS_ERROR_EOF error if the connection is closed without proper
 * notification (since this may indicate a network error, or
 * man-in-the-middle attack).
 *
 * In some protocols, the application will know whether or not the
 * connection was closed cleanly based on application-level data
 * (because the application-level data includes a length field, or is
 * somehow self-delimiting); in this case, the close notify is
 * redundant and sometimes omitted. (TLS 1.1 explicitly allows this;
 * in TLS 1.0 it is technically an error, but often done anyway.) You
 * can use g_tls_connection_set_require_close_notify() to tell @conn
 * to allow an "unannounced" connection close, in which case the close
 * will show up as a 0-length read, as in a non-TLS
 * #GSocketConnection, and it is up to the application to check that
 * the data has been fully received.
 *
 * Note that this only affects the behavior when the peer closes the
 * connection; when the application calls g_io_stream_close() itself
 * on @conn, this will send a close notification regardless of the
 * setting of this property. If you explicitly want to do an unclean
 * close, you can close @conn's #GTlsConnection:base-io-stream rather
 * than closing @conn itself.
 *
 * Since: 2.28
 */


/**
 * g_tls_connection_set_use_system_certdb:
 * @conn: a #GTlsConnection
 * @use_system_certdb: whether to use the system certificate database
 *
 * Sets whether @conn uses the system certificate database to verify
 * peer certificates. This is %TRUE by default. If set to %FALSE, then
 * peer certificate validation will always set the
 * %G_TLS_CERTIFICATE_UNKNOWN_CA error (meaning
 * #GTlsConnection::accept-certificate will always be emitted on
 * client-side connections, unless that bit is not set in
 * #GTlsClientConnection:validation-flags).
 *
 * Deprecated: 2.30: Use g_tls_connection_set_database() instead
 */


/**
 * g_tls_database_create_certificate_handle:
 * @self: a #GTlsDatabase
 * @certificate: certificate for which to create a handle.
 *
 * Create a handle string for the certificate. The database will only be able
 * to create a handle for certificates that originate from the database. In
 * cases where the database cannot create a handle for a certificate, %NULL
 * will be returned.
 *
 * This handle should be stable across various instances of the application,
 * and between applications. If a certificate is modified in the database,
 * then it is not guaranteed that this handle will continue to point to it.
 *
 * Returns: (allow-none): a newly allocated string containing the handle.
 * Since: 2.30
 */


/**
 * g_tls_database_lookup_certificate_for_handle:
 * @self: a #GTlsDatabase
 * @handle: a certificate handle
 * @interaction: (allow-none): used to interact with the user if necessary
 * @flags: Flags which affect the lookup.
 * @cancellable: (allow-none): a #GCancellable, or %NULL
 * @error: (allow-none): a #GError, or %NULL
 *
 * Lookup a certificate by its handle.
 *
 * The handle should have been created by calling
 * g_tls_database_create_certificate_handle() on a #GTlsDatabase object of
 * the same TLS backend. The handle is designed to remain valid across
 * instantiations of the database.
 *
 * If the handle is no longer valid, or does not point to a certificate in
 * this database, then %NULL will be returned.
 *
 * This function can block, use g_tls_database_lookup_certificate_for_handle_async() to perform
 * the lookup operation asynchronously.
 *
 * Returns: (transfer full) (allow-none): a newly allocated #GTlsCertificate, or %NULL. Use g_object_unref() to release the certificate.
 * Since: 2.30
 */


/**
 * g_tls_database_lookup_certificate_for_handle_async:
 * @self: a #GTlsDatabase
 * @handle: a certificate handle
 * @interaction: (allow-none): used to interact with the user if necessary
 * @flags: Flags which affect the lookup.
 * @cancellable: (allow-none): a #GCancellable, or %NULL
 * @callback: callback to call when the operation completes
 * @user_data: the data to pass to the callback function
 *
 * Asynchronously lookup a certificate by its handle in the database. See
 * g_tls_database_lookup_certificate_for_handle() for more information.
 *
 * Since: 2.30
 */


/**
 * g_tls_database_lookup_certificate_for_handle_finish:
 * @self: a #GTlsDatabase
 * @result: a #GAsyncResult.
 * @error: a #GError pointer, or %NULL
 *
 * Finish an asynchronous lookup of a certificate by its handle. See
 * g_tls_database_lookup_certificate_handle() for more information.
 *
 * If the handle is no longer valid, or does not point to a certificate in
 * this database, then %NULL will be returned.
 *
 * Returns: (transfer full): a newly allocated #GTlsCertificate object. Use g_object_unref() to release the certificate.
 * Since: 2.30
 */


/**
 * g_tls_database_lookup_certificate_issuer:
 * @self: a #GTlsDatabase
 * @certificate: a #GTlsCertificate
 * @interaction: (allow-none): used to interact with the user if necessary
 * @flags: flags which affect the lookup operation
 * @cancellable: (allow-none): a #GCancellable, or %NULL
 * @error: (allow-none): a #GError, or %NULL
 *
 * Lookup the issuer of @certificate in the database.
 *
 * The %issuer property
 * of @certificate is not modified, and the two certificates are not hooked
 * into a chain.
 *
 * This function can block, use g_tls_database_lookup_certificate_issuer_async() to perform
 * the lookup operation asynchronously.
 *
 * Returns: (transfer full): a newly allocated issuer #GTlsCertificate, or %NULL. Use g_object_unref() to release the certificate.
 * Since: 2.30
 */


/**
 * g_tls_database_lookup_certificate_issuer_async:
 * @self: a #GTlsDatabase
 * @certificate: a #GTlsCertificate
 * @interaction: (allow-none): used to interact with the user if necessary
 * @flags: flags which affect the lookup operation
 * @cancellable: (allow-none): a #GCancellable, or %NULL
 * @callback: callback to call when the operation completes
 * @user_data: the data to pass to the callback function
 *
 * Asynchronously lookup the issuer of @certificate in the database. See
 * g_tls_database_lookup_certificate_issuer() for more information.
 *
 * Since: 2.30
 */


/**
 * g_tls_database_lookup_certificate_issuer_finish:
 * @self: a #GTlsDatabase
 * @result: a #GAsyncResult.
 * @error: a #GError pointer, or %NULL
 *
 * Finish an asynchronous lookup issuer operation. See
 * g_tls_database_lookup_certificate_issuer() for more information.
 *
 * Returns: (transfer full): a newly allocated issuer #GTlsCertificate, or %NULL. Use g_object_unref() to release the certificate.
 * Since: 2.30
 */


/**
 * g_tls_database_lookup_certificates_issued_by:
 * @self: a #GTlsDatabase
 * @issuer_raw_dn: a #GByteArray which holds the DER encoded issuer DN.
 * @interaction: (allow-none): used to interact with the user if necessary
 * @flags: Flags which affect the lookup operation.
 * @cancellable: (allow-none): a #GCancellable, or %NULL
 * @error: (allow-none): a #GError, or %NULL
 *
 * Lookup certificates issued by this issuer in the database.
 *
 * This function can block, use g_tls_database_lookup_certificates_issued_by_async() to perform
 * the lookup operation asynchronously.
 *
 * Returns: (transfer full) (element-type GTlsCertificate): a newly allocated list of #GTlsCertificate objects. Use g_object_unref() on each certificate, and g_list_free() on the release the list.
 * Since: 2.30
 */


/**
 * g_tls_database_lookup_certificates_issued_by_async:
 * @self: a #GTlsDatabase
 * @issuer_raw_dn: a #GByteArray which holds the DER encoded issuer DN.
 * @interaction: (allow-none): used to interact with the user if necessary
 * @flags: Flags which affect the lookup operation.
 * @cancellable: (allow-none): a #GCancellable, or %NULL
 * @callback: callback to call when the operation completes
 * @user_data: the data to pass to the callback function
 *
 * Asynchronously lookup certificates issued by this issuer in the database. See
 * g_tls_database_lookup_certificates_issued_by() for more information.
 *
 * The database may choose to hold a reference to the issuer byte array for the duration
 * of of this asynchronous operation. The byte array should not be modified during
 * this time.
 *
 * Since: 2.30
 */


/**
 * g_tls_database_lookup_certificates_issued_by_finish:
 * @self: a #GTlsDatabase
 * @result: a #GAsyncResult.
 * @error: a #GError pointer, or %NULL
 *
 * Finish an asynchronous lookup of certificates. See
 * g_tls_database_lookup_certificates_issued_by() for more information.
 *
 * Returns: (transfer full): a newly allocated list of #GTlsCertificate objects. Use g_object_unref() on each certificate, and g_list_free() on the release the list.
 * Since: 2.30
 */


/**
 * g_tls_database_verify_chain:
 * @self: a #GTlsDatabase
 * @chain: a #GTlsCertificate chain
 * @purpose: the purpose that this certificate chain will be used for.
 * @identity: (allow-none): the expected peer identity
 * @interaction: (allow-none): used to interact with the user if necessary
 * @flags: additional verify flags
 * @cancellable: (allow-none): a #GCancellable, or %NULL
 * @error: (allow-none): a #GError, or %NULL
 *
 * Verify's a certificate chain after looking up and adding any missing
 * certificates to the chain.
 *
 * @chain is a chain of #GTlsCertificate objects each pointing to the next
 * certificate in the chain by its %issuer property. The chain may initially
 * consist of one or more certificates. After the verification process is
 * complete, @chain may be modified by adding missing certificates, or removing
 * extra certificates. If a certificate anchor was found, then it is added to
 * the @chain.
 *
 * @purpose describes the purpose (or usage) for which the certificate
 * is being used. Typically @purpose will be set to #G_TLS_DATABASE_PURPOSE_AUTHENTICATE_SERVER
 * which means that the certificate is being used to authenticate a server
 * (and we are acting as the client).
 *
 * The @identity is used to check for pinned certificates (trust exceptions)
 * in the database. These will override the normal verification process on a
 * host by host basis.
 *
 * Currently there are no @flags, and %G_TLS_DATABASE_VERIFY_NONE should be
 * used.
 *
 * This function can block, use g_tls_database_verify_chain_async() to perform
 * the verification operation asynchronously.
 *
 * Returns: the appropriate #GTlsCertificateFlags which represents the result of verification.
 * Since: 2.30
 */


/**
 * g_tls_database_verify_chain_async:
 * @self: a #GTlsDatabase
 * @chain: a #GTlsCertificate chain
 * @purpose: the purpose that this certificate chain will be used for.
 * @identity: (allow-none): the expected peer identity
 * @interaction: (allow-none): used to interact with the user if necessary
 * @flags: additional verify flags
 * @cancellable: (allow-none): a #GCancellable, or %NULL
 * @callback: callback to call when the operation completes
 * @user_data: the data to pass to the callback function
 *
 * Asynchronously verify's a certificate chain after looking up and adding
 * any missing certificates to the chain. See g_tls_database_verify_chain()
 * for more information.
 *
 * Since: 2.30
 */


/**
 * g_tls_database_verify_chain_finish:
 * @self: a #GTlsDatabase
 * @result: a #GAsyncResult.
 * @error: a #GError pointer, or %NULL
 *
 * Finish an asynchronous verify chain operation. See
 * g_tls_database_verify_chain() for more information. *
 *
 * Returns: the appropriate #GTlsCertificateFlags which represents the result of verification.
 * Since: 2.30
 */


/**
 * g_tls_error_quark:
 *
 * Gets the TLS error quark.
 *
 * Returns: a #GQuark.
 * Since: 2.28
 */


/**
 * g_tls_file_database_new:
 * @anchors: filename of anchor certificate authorities.
 * @error: #GError for error reporting, or %NULL to ignore.
 *
 * Creates a new #GTlsFileDatabase which uses anchor certificate authorities
 * in @anchors to verify certificate chains.
 *
 * The certificates in @anchors must be PEM encoded.
 *
 * Returns: (transfer full) (type GTlsFileDatabase): the new #GTlsFileDatabase, or %NULL on error
 * Since: 2.30
 */


/**
 * g_tls_interaction_ask_password:
 * @interaction: a #GTlsInteraction object
 * @password: a #GTlsPassword object
 * @cancellable: an optional #GCancellable cancellation object
 * @error: an optional location to place an error on failure
 *
 * Run synchronous interaction to ask the user for a password. In general,
 * g_tls_interaction_invoke_ask_password() should be used instead of this
 * function.
 *
 * Derived subclasses usually implement a password prompt, although they may
 * also choose to provide a password from elsewhere. The @password value will
 * be filled in and then @callback will be called. Alternatively the user may
 * abort this password request, which will usually abort the TLS connection.
 *
 * If the interaction is cancelled by the cancellation object, or by the
 * user then %G_TLS_INTERACTION_FAILED will be returned with an error that
 * contains a %G_IO_ERROR_CANCELLED error code. Certain implementations may
 * not support immediate cancellation.
 *
 * Returns: The status of the ask password interaction.
 * Since: 2.30
 */


/**
 * g_tls_interaction_ask_password_async:
 * @interaction: a #GTlsInteraction object
 * @password: a #GTlsPassword object
 * @cancellable: an optional #GCancellable cancellation object
 * @callback: (allow-none): will be called when the interaction completes
 * @user_data: (allow-none): data to pass to the @callback
 *
 * Run asynchronous interaction to ask the user for a password. In general,
 * g_tls_interaction_invoke_ask_password() should be used instead of this
 * function.
 *
 * Derived subclasses usually implement a password prompt, although they may
 * also choose to provide a password from elsewhere. The @password value will
 * be filled in and then @callback will be called. Alternatively the user may
 * abort this password request, which will usually abort the TLS connection.
 *
 * If the interaction is cancelled by the cancellation object, or by the
 * user then %G_TLS_INTERACTION_FAILED will be returned with an error that
 * contains a %G_IO_ERROR_CANCELLED error code. Certain implementations may
 * not support immediate cancellation.
 *
 * Certain implementations may not support immediate cancellation.
 *
 * Since: 2.30
 */


/**
 * g_tls_interaction_ask_password_finish:
 * @interaction: a #GTlsInteraction object
 * @result: the result passed to the callback
 * @error: an optional location to place an error on failure
 *
 * Complete an ask password user interaction request. This should be once
 * the g_tls_interaction_ask_password_async() completion callback is called.
 *
 * If %G_TLS_INTERACTION_HANDLED is returned, then the #GTlsPassword passed
 * to g_tls_interaction_ask_password() will have its password filled in.
 *
 * If the interaction is cancelled by the cancellation object, or by the
 * user then %G_TLS_INTERACTION_FAILED will be returned with an error that
 * contains a %G_IO_ERROR_CANCELLED error code.
 *
 * Returns: The status of the ask password interaction.
 * Since: 2.30
 */


/**
 * g_tls_interaction_invoke_ask_password:
 * @interaction: a #GTlsInteraction object
 * @password: a #GTlsPassword object
 * @cancellable: an optional #GCancellable cancellation object
 * @error: an optional location to place an error on failure
 *
 * Invoke the interaction to ask the user for a password. It invokes this
 * interaction in the main loop, specifically the #GMainContext returned by
 * g_main_context_get_thread_default() when the interaction is created. This
 * is called by called by #GTlsConnection or #GTlsDatabase to ask the user
 * for a password.
 *
 * Derived subclasses usually implement a password prompt, although they may
 * also choose to provide a password from elsewhere. The @password value will
 * be filled in and then @callback will be called. Alternatively the user may
 * abort this password request, which will usually abort the TLS connection.
 *
 * The implementation can either be a synchronous (eg: modal dialog) or an
 * asynchronous one (eg: modeless dialog). This function will take care of
 * calling which ever one correctly.
 *
 * If the interaction is cancelled by the cancellation object, or by the
 * user then %G_TLS_INTERACTION_FAILED will be returned with an error that
 * contains a %G_IO_ERROR_CANCELLED error code. Certain implementations may
 * not support immediate cancellation.
 *
 * Returns: The status of the ask password interaction.
 * Since: 2.30
 */


/**
 * g_tls_password_get_description:
 * @password: a #GTlsPassword object
 *
 * Get a description string about what the password will be used for.
 *
 * Returns: The description of the password.
 * Since: 2.30
 */


/**
 * g_tls_password_get_flags:
 * @password: a #GTlsPassword object
 *
 * Get flags about the password.
 *
 * Returns: The flags about the password.
 * Since: 2.30
 */


/**
 * g_tls_password_get_value:
 * @password: a #GTlsPassword object
 * @length: (allow-none): location to place the length of the password.
 *
 * Get the password value. If @length is not %NULL then it will be
 * filled in with the length of the password value. (Note that the
 * password value is not nul-terminated, so you can only pass %NULL
 * for @length in contexts where you know the password will have a
 * certain fixed length.)
 *
 * Returns: The password value (owned by the password object).
 * Since: 2.30
 */


/**
 * g_tls_password_get_warning:
 * @password: a #GTlsPassword object
 *
 * Get a user readable translated warning. Usually this warning is a
 * representation of the password flags returned from
 * g_tls_password_get_flags().
 *
 * Returns: The warning.
 * Since: 2.30
 */


/**
 * g_tls_password_new:
 * @flags: the password flags
 * @description: description of what the password is for
 *
 * Create a new #GTlsPassword object.
 *
 * Returns: (transfer full): The newly allocated password object
 */


/**
 * g_tls_password_set_description:
 * @password: a #GTlsPassword object
 * @description: The description of the password
 *
 * Set a description string about what the password will be used for.
 *
 * Since: 2.30
 */


/**
 * g_tls_password_set_flags:
 * @password: a #GTlsPassword object
 * @flags: The flags about the password
 *
 * Set flags about the password.
 *
 * Since: 2.30
 */


/**
 * g_tls_password_set_value:
 * @password: a #GTlsPassword object
 * @value: the new password value
 * @length: the length of the password, or -1
 *
 * Set the value for this password. The @value will be copied by the password
 * object.
 *
 * Specify the @length, for a non-nul-terminated password. Pass -1 as
 * @length if using a nul-terminated password, and @length will be
 * calculated automatically. (Note that the terminating nul is not
 * considered part of the password in this case.)
 *
 * Since: 2.30
 */


/**
 * g_tls_password_set_value_full:
 * @password: a #GTlsPassword object
 * @value: the value for the password
 * @length: the length of the password, or -1
 * @destroy: (allow-none): a function to use to free the password.
 *
 * Provide the value for this password.
 *
 * The @value will be owned by the password object, and later freed using
 * the @destroy function callback.
 *
 * Specify the @length, for a non-nul-terminated password. Pass -1 as
 * @length if using a nul-terminated password, and @length will be
 * calculated automatically. (Note that the terminating nul is not
 * considered part of the password in this case.)
 *
 * Virtual: set_value
 * Since: 2.30
 */


/**
 * g_tls_password_set_warning:
 * @password: a #GTlsPassword object
 * @warning: The user readable warning
 *
 * Set a user readable translated warning. Usually this warning is a
 * representation of the password flags returned from
 * g_tls_password_get_flags().
 *
 * Since: 2.30
 */


/**
 * g_tls_server_connection_new:
 * @base_io_stream: the #GIOStream to wrap
 * @certificate: (allow-none): the default server certificate, or %NULL
 * @error: #GError for error reporting, or %NULL to ignore.
 *
 * Creates a new #GTlsServerConnection wrapping @base_io_stream (which
 * must have pollable input and output streams).
 *
 * Returns: (transfer full) (type GTlsServerConnection): the new #GTlsServerConnection, or %NULL on error
 * Since: 2.28
 */


/**
 * g_unix_connection_receive_credentials:
 * @connection: A #GUnixConnection.
 * @cancellable: (allow-none): A #GCancellable or %NULL.
 * @error: Return location for error or %NULL.
 *
 * Receives credentials from the sending end of the connection.  The
 * sending end has to call g_unix_connection_send_credentials() (or
 * similar) for this to work.
 *
 * As well as reading the credentials this also reads (and discards) a
 * single byte from the stream, as this is required for credentials
 * passing to work on some implementations.
 *
 * Other ways to exchange credentials with a foreign peer includes the
 * #GUnixCredentialsMessage type and g_socket_get_credentials() function.
 *
 * Returns: (transfer full): Received credentials on success (free with g_object_unref()), %NULL if @error is set.
 * Since: 2.26
 */


/**
 * g_unix_connection_receive_credentials_async:
 * @connection: A #GUnixConnection.
 * @cancellable: (allow-none): optional #GCancellable object, %NULL to ignore.
 * @callback: (scope async): a #GAsyncReadyCallback to call when the request is satisfied
 * @user_data: (closure): the data to pass to callback function
 *
 * Asynchronously receive credentials.
 *
 * For more details, see g_unix_connection_receive_credentials() which is
 * the synchronous version of this call.
 *
 * When the operation is finished, @callback will be called. You can then call
 * g_unix_connection_receive_credentials_finish() to get the result of the operation.
 *
 * Since: 2.32
 */


/**
 * g_unix_connection_receive_credentials_finish:
 * @connection: A #GUnixConnection.
 * @result: a #GAsyncResult.
 * @error: a #GError, or %NULL
 *
 * Finishes an asynchronous receive credentials operation started with
 * g_unix_connection_receive_credentials_async().
 *
 * Returns: (transfer full): a #GCredentials, or %NULL on error. Free the returned object with g_object_unref().
 * Since: 2.32
 */


/**
 * g_unix_connection_receive_fd:
 * @connection: a #GUnixConnection
 * @cancellable: (allow-none): optional #GCancellable object, %NULL to ignore
 * @error: (allow-none): #GError for error reporting, or %NULL to ignore
 *
 * Receives a file descriptor from the sending end of the connection.
 * The sending end has to call g_unix_connection_send_fd() for this
 * to work.
 *
 * As well as reading the fd this also reads a single byte from the
 * stream, as this is required for fd passing to work on some
 * implementations.
 *
 * Returns: a file descriptor on success, -1 on error.
 * Since: 2.22
 */


/**
 * g_unix_connection_send_credentials:
 * @connection: A #GUnixConnection.
 * @cancellable: (allow-none): A #GCancellable or %NULL.
 * @error: Return location for error or %NULL.
 *
 * Passes the credentials of the current user the receiving side
 * of the connection. The receiving end has to call
 * g_unix_connection_receive_credentials() (or similar) to accept the
 * credentials.
 *
 * As well as sending the credentials this also writes a single NUL
 * byte to the stream, as this is required for credentials passing to
 * work on some implementations.
 *
 * Other ways to exchange credentials with a foreign peer includes the
 * #GUnixCredentialsMessage type and g_socket_get_credentials() function.
 *
 * Returns: %TRUE on success, %FALSE if @error is set.
 * Since: 2.26
 */


/**
 * g_unix_connection_send_credentials_async:
 * @connection: A #GUnixConnection.
 * @cancellable: (allow-none): optional #GCancellable object, %NULL to ignore.
 * @callback: (scope async): a #GAsyncReadyCallback to call when the request is satisfied
 * @user_data: (closure): the data to pass to callback function
 *
 * Asynchronously send credentials.
 *
 * For more details, see g_unix_connection_send_credentials() which is
 * the synchronous version of this call.
 *
 * When the operation is finished, @callback will be called. You can then call
 * g_unix_connection_send_credentials_finish() to get the result of the operation.
 *
 * Since: 2.32
 */


/**
 * g_unix_connection_send_credentials_finish:
 * @connection: A #GUnixConnection.
 * @result: a #GAsyncResult.
 * @error: a #GError, or %NULL
 *
 * Finishes an asynchronous send credentials operation started with
 * g_unix_connection_send_credentials_async().
 *
 * Returns: %TRUE if the operation was successful, otherwise %FALSE.
 * Since: 2.32
 */


/**
 * g_unix_connection_send_fd:
 * @connection: a #GUnixConnection
 * @fd: a file descriptor
 * @cancellable: (allow-none): optional #GCancellable object, %NULL to ignore.
 * @error: (allow-none): #GError for error reporting, or %NULL to ignore.
 *
 * Passes a file descriptor to the receiving side of the
 * connection. The receiving end has to call g_unix_connection_receive_fd()
 * to accept the file descriptor.
 *
 * As well as sending the fd this also writes a single byte to the
 * stream, as this is required for fd passing to work on some
 * implementations.
 *
 * Returns: a %TRUE on success, %NULL on error.
 * Since: 2.22
 */


/**
 * g_unix_credentials_message_get_credentials:
 * @message: A #GUnixCredentialsMessage.
 *
 * Gets the credentials stored in @message.
 *
 * Returns: (transfer none): A #GCredentials instance. Do not free, it is owned by @message.
 * Since: 2.26
 */


/**
 * g_unix_credentials_message_is_supported:
 *
 * Checks if passing #GCredentials on a #GSocket is supported on this platform.
 *
 * Returns: %TRUE if supported, %FALSE otherwise
 * Since: 2.26
 */


/**
 * g_unix_credentials_message_new:
 *
 * Creates a new #GUnixCredentialsMessage with credentials matching the current processes.
 *
 * Returns: a new #GUnixCredentialsMessage
 * Since: 2.26
 */


/**
 * g_unix_credentials_message_new_with_credentials:
 * @credentials: A #GCredentials object.
 *
 * Creates a new #GUnixCredentialsMessage holding @credentials.
 *
 * Returns: a new #GUnixCredentialsMessage
 * Since: 2.26
 */


/**
 * g_unix_fd_list_append:
 * @list: a #GUnixFDList
 * @fd: a valid open file descriptor
 * @error: a #GError pointer
 *
 * Adds a file descriptor to @list.
 *
 * The file descriptor is duplicated using dup(). You keep your copy
 * of the descriptor and the copy contained in @list will be closed
 * when @list is finalized.
 *
 * A possible cause of failure is exceeding the per-process or
 * system-wide file descriptor limit.
 *
 * The index of the file descriptor in the list is returned.  If you use
 * this index with g_unix_fd_list_get() then you will receive back a
 * duplicated copy of the same file descriptor.
 *
 * Returns: the index of the appended fd in case of success, else -1 (and @error is set)
 * Since: 2.24
 */


/**
 * g_unix_fd_list_get:
 * @list: a #GUnixFDList
 * @index_: the index into the list
 * @error: a #GError pointer
 *
 * Gets a file descriptor out of @list.
 *
 * @index_ specifies the index of the file descriptor to get.  It is a
 * programmer error for @index_ to be out of range; see
 * g_unix_fd_list_get_length().
 *
 * The file descriptor is duplicated using dup() and set as
 * close-on-exec before being returned.  You must call close() on it
 * when you are done.
 *
 * A possible cause of failure is exceeding the per-process or
 * system-wide file descriptor limit.
 *
 * Returns: the file descriptor, or -1 in case of error
 * Since: 2.24
 */


/**
 * g_unix_fd_list_get_length:
 * @list: a #GUnixFDList
 *
 * Gets the length of @list (ie: the number of file descriptors
 * contained within).
 *
 * Returns: the length of @list
 * Since: 2.24
 */


/**
 * g_unix_fd_list_new:
 *
 * Creates a new #GUnixFDList containing no file descriptors.
 *
 * Returns: a new #GUnixFDList
 * Since: 2.24
 */


/**
 * g_unix_fd_list_new_from_array:
 * @fds: (array length=n_fds): the initial list of file descriptors
 * @n_fds: the length of #fds, or -1
 *
 * Creates a new #GUnixFDList containing the file descriptors given in
 * @fds.  The file descriptors become the property of the new list and
 * may no longer be used by the caller.  The array itself is owned by
 * the caller.
 *
 * Each file descriptor in the array should be set to close-on-exec.
 *
 * If @n_fds is -1 then @fds must be terminated with -1.
 *
 * Returns: a new #GUnixFDList
 * Since: 2.24
 */


/**
 * g_unix_fd_list_peek_fds:
 * @list: a #GUnixFDList
 * @length: (out) (allow-none): pointer to the length of the returned array, or %NULL
 *
 * Returns the array of file descriptors that is contained in this
 * object.
 *
 * After this call, the descriptors remain the property of @list.  The
 * caller must not close them and must not free the array.  The array is
 * valid only until @list is changed in any way.
 *
 * If @length is non-%NULL then it is set to the number of file
 * descriptors in the returned array. The returned array is also
 * terminated with -1.
 *
 * This function never returns %NULL. In case there are no file
 * descriptors contained in @list, an empty array is returned.
 *
 * Returns: (array length=length) (transfer none): an array of file descriptors
 * Since: 2.24
 */


/**
 * g_unix_fd_list_steal_fds:
 * @list: a #GUnixFDList
 * @length: (out) (allow-none): pointer to the length of the returned array, or %NULL
 *
 * Returns the array of file descriptors that is contained in this
 * object.
 *
 * After this call, the descriptors are no longer contained in
 * @list. Further calls will return an empty list (unless more
 * descriptors have been added).
 *
 * The return result of this function must be freed with g_free().
 * The caller is also responsible for closing all of the file
 * descriptors.  The file descriptors in the array are set to
 * close-on-exec.
 *
 * If @length is non-%NULL then it is set to the number of file
 * descriptors in the returned array. The returned array is also
 * terminated with -1.
 *
 * This function never returns %NULL. In case there are no file
 * descriptors contained in @list, an empty array is returned.
 *
 * Returns: (array length=length) (transfer full): an array of file descriptors
 * Since: 2.24
 */


/**
 * g_unix_fd_message_append_fd:
 * @message: a #GUnixFDMessage
 * @fd: a valid open file descriptor
 * @error: a #GError pointer
 *
 * Adds a file descriptor to @message.
 *
 * The file descriptor is duplicated using dup(). You keep your copy
 * of the descriptor and the copy contained in @message will be closed
 * when @message is finalized.
 *
 * A possible cause of failure is exceeding the per-process or
 * system-wide file descriptor limit.
 *
 * Returns: %TRUE in case of success, else %FALSE (and @error is set)
 * Since: 2.22
 */


/**
 * g_unix_fd_message_get_fd_list:
 * @message: a #GUnixFDMessage
 *
 * Gets the #GUnixFDList contained in @message.  This function does not
 * return a reference to the caller, but the returned list is valid for
 * the lifetime of @message.
 *
 * Returns: (transfer none): the #GUnixFDList from @message
 * Since: 2.24
 */


/**
 * g_unix_fd_message_new:
 *
 * Creates a new #GUnixFDMessage containing an empty file descriptor
 * list.
 *
 * Returns: a new #GUnixFDMessage
 * Since: 2.22
 */


/**
 * g_unix_fd_message_new_with_fd_list:
 * @fd_list: a #GUnixFDList
 *
 * Creates a new #GUnixFDMessage containing @list.
 *
 * Returns: a new #GUnixFDMessage
 * Since: 2.24
 */


/**
 * g_unix_fd_message_steal_fds:
 * @message: a #GUnixFDMessage
 * @length: (out) (allow-none): pointer to the length of the returned array, or %NULL
 *
 * Returns the array of file descriptors that is contained in this
 * object.
 *
 * After this call, the descriptors are no longer contained in
 * @message. Further calls will return an empty list (unless more
 * descriptors have been added).
 *
 * The return result of this function must be freed with g_free().
 * The caller is also responsible for closing all of the file
 * descriptors.
 *
 * If @length is non-%NULL then it is set to the number of file
 * descriptors in the returned array. The returned array is also
 * terminated with -1.
 *
 * This function never returns %NULL. In case there are no file
 * descriptors contained in @message, an empty array is returned.
 *
 * Returns: (array length=length) (transfer full): an array of file descriptors
 * Since: 2.22
 */


/**
 * g_unix_input_stream_get_close_fd:
 * @stream: a #GUnixInputStream
 *
 * Returns whether the file descriptor of @stream will be
 * closed when the stream is closed.
 *
 * Returns: %TRUE if the file descriptor is closed when done
 * Since: 2.20
 */


/**
 * g_unix_input_stream_get_fd:
 * @stream: a #GUnixInputStream
 *
 * Return the UNIX file descriptor that the stream reads from.
 *
 * Returns: The file descriptor of @stream
 * Since: 2.20
 */


/**
 * g_unix_input_stream_new:
 * @fd: a UNIX file descriptor
 * @close_fd: %TRUE to close the file descriptor when done
 *
 * Creates a new #GUnixInputStream for the given @fd.
 *
 * If @close_fd is %TRUE, the file descriptor will be closed
 * when the stream is closed.
 *
 * Returns: a new #GUnixInputStream
 */


/**
 * g_unix_input_stream_set_close_fd:
 * @stream: a #GUnixInputStream
 * @close_fd: %TRUE to close the file descriptor when done
 *
 * Sets whether the file descriptor of @stream shall be closed
 * when the stream is closed.
 *
 * Since: 2.20
 */


/**
 * g_unix_is_mount_path_system_internal:
 * @mount_path: a mount path, e.g. <filename>/media/disk</filename> or <filename>/usr</filename>
 *
 * Determines if @mount_path is considered an implementation of the
 * OS. This is primarily used for hiding mountable and mounted volumes
 * that only are used in the OS and has little to no relevance to the
 * casual user.
 *
 * Returns: %TRUE if @mount_path is considered an implementation detail of the OS.
 */


/**
 * g_unix_mount_at: (skip)
 * @mount_path: path for a possible unix mount.
 * @time_read: (out) (allow-none): guint64 to contain a timestamp.
 *
 * Gets a #GUnixMountEntry for a given mount path. If @time_read
 * is set, it will be filled with a unix timestamp for checking
 * if the mounts have changed since with g_unix_mounts_changed_since().
 *
 * Returns: (transfer full): a #GUnixMountEntry.
 */


/**
 * g_unix_mount_compare:
 * @mount1: first #GUnixMountEntry to compare.
 * @mount2: second #GUnixMountEntry to compare.
 *
 * Compares two unix mounts.
 *
 * Returns: 1, 0 or -1 if @mount1 is greater than, equal to, or less than @mount2, respectively.
 */


/**
 * g_unix_mount_free:
 * @mount_entry: a #GUnixMountEntry.
 *
 * Frees a unix mount.
 */


/**
 * g_unix_mount_get_device_path:
 * @mount_entry: a #GUnixMount.
 *
 * Gets the device path for a unix mount.
 *
 * Returns: a string containing the device path.
 */


/**
 * g_unix_mount_get_fs_type:
 * @mount_entry: a #GUnixMount.
 *
 * Gets the filesystem type for the unix mount.
 *
 * Returns: a string containing the file system type.
 */


/**
 * g_unix_mount_get_mount_path:
 * @mount_entry: input #GUnixMountEntry to get the mount path for.
 *
 * Gets the mount path for a unix mount.
 *
 * Returns: the mount path for @mount_entry.
 */


/**
 * g_unix_mount_guess_can_eject:
 * @mount_entry: a #GUnixMountEntry
 *
 * Guesses whether a Unix mount can be ejected.
 *
 * Returns: %TRUE if @mount_entry is deemed to be ejectable.
 */


/**
 * g_unix_mount_guess_icon:
 * @mount_entry: a #GUnixMountEntry
 *
 * Guesses the icon of a Unix mount.
 *
 * Returns: (transfer full): a #GIcon
 */


/**
 * g_unix_mount_guess_name:
 * @mount_entry: a #GUnixMountEntry
 *
 * Guesses the name of a Unix mount.
 * The result is a translated string.
 *
 * Returns: A newly allocated string that must be freed with g_free()
 */


/**
 * g_unix_mount_guess_should_display:
 * @mount_entry: a #GUnixMountEntry
 *
 * Guesses whether a Unix mount should be displayed in the UI.
 *
 * Returns: %TRUE if @mount_entry is deemed to be displayable.
 */


/**
 * g_unix_mount_is_readonly:
 * @mount_entry: a #GUnixMount.
 *
 * Checks if a unix mount is mounted read only.
 *
 * Returns: %TRUE if @mount_entry is read only.
 */


/**
 * g_unix_mount_is_system_internal:
 * @mount_entry: a #GUnixMount.
 *
 * Checks if a unix mount is a system path.
 *
 * Returns: %TRUE if the unix mount is for a system path.
 */


/**
 * g_unix_mount_monitor_new:
 *
 * Gets a new #GUnixMountMonitor. The default rate limit for which the
 * monitor will report consecutive changes for the mount and mount
 * point entry files is the default for a #GFileMonitor. Use
 * g_unix_mount_monitor_set_rate_limit() to change this.
 *
 * Returns: a #GUnixMountMonitor.
 */


/**
 * g_unix_mount_monitor_set_rate_limit:
 * @mount_monitor: a #GUnixMountMonitor
 * @limit_msec: a integer with the limit in milliseconds to poll for changes.
 *
 * Sets the rate limit to which the @mount_monitor will report
 * consecutive change events to the mount and mount point entry files.
 *
 * Since: 2.18
 */


/**
 * g_unix_mount_point_compare:
 * @mount1: a #GUnixMount.
 * @mount2: a #GUnixMount.
 *
 * Compares two unix mount points.
 *
 * Returns: 1, 0 or -1 if @mount1 is greater than, equal to, or less than @mount2, respectively.
 */


/**
 * g_unix_mount_point_free:
 * @mount_point: unix mount point to free.
 *
 * Frees a unix mount point.
 */


/**
 * g_unix_mount_point_get_device_path:
 * @mount_point: a #GUnixMountPoint.
 *
 * Gets the device path for a unix mount point.
 *
 * Returns: a string containing the device path.
 */


/**
 * g_unix_mount_point_get_fs_type:
 * @mount_point: a #GUnixMountPoint.
 *
 * Gets the file system type for the mount point.
 *
 * Returns: a string containing the file system type.
 */


/**
 * g_unix_mount_point_get_mount_path:
 * @mount_point: a #GUnixMountPoint.
 *
 * Gets the mount path for a unix mount point.
 *
 * Returns: a string containing the mount path.
 */


/**
 * g_unix_mount_point_get_options:
 * @mount_point: a #GUnixMountPoint.
 *
 * Gets the options for the mount point.
 *
 * Returns: a string containing the options.
 * Since: 2.32
 */


/**
 * g_unix_mount_point_guess_can_eject:
 * @mount_point: a #GUnixMountPoint
 *
 * Guesses whether a Unix mount point can be ejected.
 *
 * Returns: %TRUE if @mount_point is deemed to be ejectable.
 */


/**
 * g_unix_mount_point_guess_icon:
 * @mount_point: a #GUnixMountPoint
 *
 * Guesses the icon of a Unix mount point.
 *
 * Returns: (transfer full): a #GIcon
 */


/**
 * g_unix_mount_point_guess_name:
 * @mount_point: a #GUnixMountPoint
 *
 * Guesses the name of a Unix mount point.
 * The result is a translated string.
 *
 * Returns: A newly allocated string that must be freed with g_free()
 */


/**
 * g_unix_mount_point_is_loopback:
 * @mount_point: a #GUnixMountPoint.
 *
 * Checks if a unix mount point is a loopback device.
 *
 * Returns: %TRUE if the mount point is a loopback. %FALSE otherwise.
 */


/**
 * g_unix_mount_point_is_readonly:
 * @mount_point: a #GUnixMountPoint.
 *
 * Checks if a unix mount point is read only.
 *
 * Returns: %TRUE if a mount point is read only.
 */


/**
 * g_unix_mount_point_is_user_mountable:
 * @mount_point: a #GUnixMountPoint.
 *
 * Checks if a unix mount point is mountable by the user.
 *
 * Returns: %TRUE if the mount point is user mountable.
 */


/**
 * g_unix_mount_points_changed_since:
 * @time: guint64 to contain a timestamp.
 *
 * Checks if the unix mount points have changed since a given unix time.
 *
 * Returns: %TRUE if the mount points have changed since @time.
 */


/**
 * g_unix_mount_points_get: (skip)
 * @time_read: (out) (allow-none): guint64 to contain a timestamp.
 *
 * Gets a #GList of #GUnixMountPoint containing the unix mount points.
 * If @time_read is set, it will be filled with the mount timestamp,
 * allowing for checking if the mounts have changed with
 * g_unix_mount_points_changed_since().
 *
 * Returns: (element-type GUnixMountPoint) (transfer full): a #GList of the UNIX mountpoints.
 */


/**
 * g_unix_mounts_changed_since:
 * @time: guint64 to contain a timestamp.
 *
 * Checks if the unix mounts have changed since a given unix time.
 *
 * Returns: %TRUE if the mounts have changed since @time.
 */


/**
 * g_unix_mounts_get: (skip)
 * @time_read: (out) (allow-none): guint64 to contain a timestamp, or %NULL
 *
 * Gets a #GList of #GUnixMountEntry containing the unix mounts.
 * If @time_read is set, it will be filled with the mount
 * timestamp, allowing for checking if the mounts have changed
 * with g_unix_mounts_changed_since().
 *
 * Returns: (element-type GUnixMountEntry) (transfer full): a #GList of the UNIX mounts.
 */


/**
 * g_unix_output_stream_get_close_fd:
 * @stream: a #GUnixOutputStream
 *
 * Returns whether the file descriptor of @stream will be
 * closed when the stream is closed.
 *
 * Returns: %TRUE if the file descriptor is closed when done
 * Since: 2.20
 */


/**
 * g_unix_output_stream_get_fd:
 * @stream: a #GUnixOutputStream
 *
 * Return the UNIX file descriptor that the stream writes to.
 *
 * Returns: The file descriptor of @stream
 * Since: 2.20
 */


/**
 * g_unix_output_stream_new:
 * @fd: a UNIX file descriptor
 * @close_fd: %TRUE to close the file descriptor when done
 *
 * Creates a new #GUnixOutputStream for the given @fd.
 *
 * If @close_fd, is %TRUE, the file descriptor will be closed when
 * the output stream is destroyed.
 *
 * Returns: a new #GOutputStream
 */


/**
 * g_unix_output_stream_set_close_fd:
 * @stream: a #GUnixOutputStream
 * @close_fd: %TRUE to close the file descriptor when done
 *
 * Sets whether the file descriptor of @stream shall be closed
 * when the stream is closed.
 *
 * Since: 2.20
 */


/**
 * g_unix_socket_address_abstract_names_supported:
 *
 * Checks if abstract unix domain socket names are supported.
 *
 * Returns: %TRUE if supported, %FALSE otherwise
 * Since: 2.22
 */


/**
 * g_unix_socket_address_get_address_type:
 * @address: a #GInetSocketAddress
 *
 * Gets @address's type.
 *
 * Returns: a #GUnixSocketAddressType
 * Since: 2.26
 */


/**
 * g_unix_socket_address_get_is_abstract:
 * @address: a #GInetSocketAddress
 *
 * Tests if @address is abstract.
 *
 * Returns: %TRUE if the address is abstract, %FALSE otherwise
 * Since: 2.22
 * Deprecated: Use g_unix_socket_address_get_address_type()
 */


/**
 * g_unix_socket_address_get_path:
 * @address: a #GInetSocketAddress
 *
 * Gets @address's path, or for abstract sockets the "name".
 *
 * Guaranteed to be zero-terminated, but an abstract socket
 * may contain embedded zeros, and thus you should use
 * g_unix_socket_address_get_path_len() to get the true length
 * of this string.
 *
 * Returns: the path for @address
 * Since: 2.22
 */


/**
 * g_unix_socket_address_get_path_len:
 * @address: a #GInetSocketAddress
 *
 * Gets the length of @address's path.
 *
 * For details, see g_unix_socket_address_get_path().
 *
 * Returns: the length of the path
 * Since: 2.22
 */


/**
 * g_unix_socket_address_new:
 * @path: the socket path
 *
 * Creates a new #GUnixSocketAddress for @path.
 *
 * To create abstract socket addresses, on systems that support that,
 * use g_unix_socket_address_new_abstract().
 *
 * Returns: a new #GUnixSocketAddress
 * Since: 2.22
 */


/**
 * g_unix_socket_address_new_abstract:
 * @path: (array length=path_len) (element-type gchar): the abstract name
 * @path_len: the length of @path, or -1
 *
 * Creates a new %G_UNIX_SOCKET_ADDRESS_ABSTRACT_PADDED
 * #GUnixSocketAddress for @path.
 *
 * Returns: a new #GUnixSocketAddress
 * Deprecated: Use g_unix_socket_address_new_with_type().
 */


/**
 * g_unix_socket_address_new_with_type:
 * @path: (array length=path_len) (element-type gchar): the name
 * @path_len: the length of @path, or -1
 * @type: a #GUnixSocketAddressType
 *
 * Creates a new #GUnixSocketAddress of type @type with name @path.
 *
 * If @type is %G_UNIX_SOCKET_ADDRESS_PATH, this is equivalent to
 * calling g_unix_socket_address_new().
 *
 * If @path_type is %G_UNIX_SOCKET_ADDRESS_ABSTRACT, then @path_len
 * bytes of @path will be copied to the socket's path, and only those
 * bytes will be considered part of the name. (If @path_len is -1,
 * then @path is assumed to be NUL-terminated.) For example, if @path
 * was "test", then calling g_socket_address_get_native_size() on the
 * returned socket would return 7 (2 bytes of overhead, 1 byte for the
 * abstract-socket indicator byte, and 4 bytes for the name "test").
 *
 * If @path_type is %G_UNIX_SOCKET_ADDRESS_ABSTRACT_PADDED, then
 * @path_len bytes of @path will be copied to the socket's path, the
 * rest of the path will be padded with 0 bytes, and the entire
 * zero-padded buffer will be considered the name. (As above, if
 * @path_len is -1, then @path is assumed to be NUL-terminated.) In
 * this case, g_socket_address_get_native_size() will always return
 * the full size of a <literal>struct sockaddr_un</literal>, although
 * g_unix_socket_address_get_path_len() will still return just the
 * length of @path.
 *
 * %G_UNIX_SOCKET_ADDRESS_ABSTRACT is preferred over
 * %G_UNIX_SOCKET_ADDRESS_ABSTRACT_PADDED for new programs. Of course,
 * when connecting to a server created by another process, you must
 * use the appropriate type corresponding to how that process created
 * its listening socket.
 *
 * Returns: a new #GUnixSocketAddress
 * Since: 2.26
 */


/**
 * g_vfs_get_default:
 *
 * Gets the default #GVfs for the system.
 *
 * Returns: (transfer none): a #GVfs.
 */


/**
 * g_vfs_get_file_for_path:
 * @vfs: a #GVfs.
 * @path: a string containing a VFS path.
 *
 * Gets a #GFile for @path.
 *
 * Returns: (transfer full): a #GFile. Free the returned object with g_object_unref().
 */


/**
 * g_vfs_get_file_for_uri:
 * @vfs: a#GVfs.
 * @uri: a string containing a URI
 *
 * Gets a #GFile for @uri.
 *
 * This operation never fails, but the returned object
 * might not support any I/O operation if the URI
 * is malformed or if the URI scheme is not supported.
 *
 * Returns: (transfer full): a #GFile. Free the returned object with g_object_unref().
 */


/**
 * g_vfs_get_local:
 *
 * Gets the local #GVfs for the system.
 *
 * Returns: (transfer none): a #GVfs.
 */


/**
 * g_vfs_get_supported_uri_schemes:
 * @vfs: a #GVfs.
 *
 * Gets a list of URI schemes supported by @vfs.
 *
 * Returns: (transfer none): a %NULL-terminated array of strings. The returned array belongs to GIO and must not be freed or modified.
 */


/**
 * g_vfs_is_active:
 * @vfs: a #GVfs.
 *
 * Checks if the VFS is active.
 *
 * Returns: %TRUE if construction of the @vfs was successful and it is now active.
 */


/**
 * g_vfs_parse_name:
 * @vfs: a #GVfs.
 * @parse_name: a string to be parsed by the VFS module.
 *
 * This operation never fails, but the returned object might
 * not support any I/O operations if the @parse_name cannot
 * be parsed by the #GVfs module.
 *
 * Returns: (transfer full): a #GFile for the given @parse_name. Free the returned object with g_object_unref().
 */


/**
 * g_volume_can_eject:
 * @volume: a #GVolume.
 *
 * Checks if a volume can be ejected.
 *
 * Returns: %TRUE if the @volume can be ejected. %FALSE otherwise.
 */


/**
 * g_volume_can_mount:
 * @volume: a #GVolume.
 *
 * Checks if a volume can be mounted.
 *
 * Returns: %TRUE if the @volume can be mounted. %FALSE otherwise.
 */


/**
 * g_volume_eject:
 * @volume: a #GVolume.
 * @flags: flags affecting the unmount if required for eject
 * @cancellable: (allow-none): optional #GCancellable object, %NULL to ignore.
 * @callback: (allow-none): a #GAsyncReadyCallback, or %NULL.
 * @user_data: user data that gets passed to @callback
 *
 * Ejects a volume. This is an asynchronous operation, and is
 * finished by calling g_volume_eject_finish() with the @volume
 * and #GAsyncResult returned in the @callback.
 *
 * Deprecated: 2.22: Use g_volume_eject_with_operation() instead.
 */


/**
 * g_volume_eject_finish:
 * @volume: pointer to a #GVolume.
 * @result: a #GAsyncResult.
 * @error: a #GError location to store an error, or %NULL to ignore
 *
 * Finishes ejecting a volume. If any errors occurred during the operation,
 * @error will be set to contain the errors and %FALSE will be returned.
 *
 * Returns: %TRUE, %FALSE if operation failed.
 * Deprecated: 2.22: Use g_volume_eject_with_operation_finish() instead.
 */


/**
 * g_volume_eject_with_operation:
 * @volume: a #GVolume.
 * @flags: flags affecting the unmount if required for eject
 * @mount_operation: (allow-none): a #GMountOperation or %NULL to avoid user interaction.
 * @cancellable: (allow-none): optional #GCancellable object, %NULL to ignore.
 * @callback: (allow-none): a #GAsyncReadyCallback, or %NULL.
 * @user_data: user data passed to @callback.
 *
 * Ejects a volume. This is an asynchronous operation, and is
 * finished by calling g_volume_eject_with_operation_finish() with the @volume
 * and #GAsyncResult data returned in the @callback.
 *
 * Since: 2.22
 */


/**
 * g_volume_eject_with_operation_finish:
 * @volume: a #GVolume.
 * @result: a #GAsyncResult.
 * @error: a #GError location to store the error occurring, or %NULL to ignore.
 *
 * Finishes ejecting a volume. If any errors occurred during the operation,
 * @error will be set to contain the errors and %FALSE will be returned.
 *
 * Returns: %TRUE if the volume was successfully ejected. %FALSE otherwise.
 * Since: 2.22
 */


/**
 * g_volume_enumerate_identifiers:
 * @volume: a #GVolume
 *
 * Gets the kinds of <link linkend="volume-identifier">identifiers</link>
 * that @volume has. Use g_volume_get_identifier() to obtain
 * the identifiers themselves.
 *
 * Returns: (array zero-terminated=1) (transfer full): a %NULL-terminated array of strings containing kinds of identifiers. Use g_strfreev() to free.
 */


/**
 * g_volume_get_activation_root:
 * @volume: a #GVolume
 *
 * Gets the activation root for a #GVolume if it is known ahead of
 * mount time. Returns %NULL otherwise. If not %NULL and if @volume
 * is mounted, then the result of g_mount_get_root() on the
 * #GMount object obtained from g_volume_get_mount() will always
 * either be equal or a prefix of what this function returns. In
 * other words, in code
 *
 * <programlisting>
 *   GMount *mount;
 *   GFile *mount_root
 *   GFile *volume_activation_root;
 *
 *   mount = g_volume_get_mount (volume); /&ast; mounted, so never NULL &ast;/
 *   mount_root = g_mount_get_root (mount);
 *   volume_activation_root = g_volume_get_activation_root(volume); /&ast; assume not NULL &ast;/
 * </programlisting>
 *
 * then the expression
 *
 * <programlisting>
 *   (g_file_has_prefix (volume_activation_root, mount_root) ||
 *       g_file_equal (volume_activation_root, mount_root))
 * </programlisting>
 *
 * will always be %TRUE.
 *
 * Activation roots are typically used in #GVolumeMonitor
 * implementations to find the underlying mount to shadow, see
 * g_mount_is_shadowed() for more details.
 *
 * Returns: (transfer full): the activation root of @volume or %NULL. Use g_object_unref() to free.
 * Since: 2.18
 */


/**
 * g_volume_get_drive:
 * @volume: a #GVolume.
 *
 * Gets the drive for the @volume.
 *
 * Returns: (transfer full): a #GDrive or %NULL if @volume is not associated with a drive. The returned object should be unreffed with g_object_unref() when no longer needed.
 */


/**
 * g_volume_get_icon:
 * @volume: a #GVolume.
 *
 * Gets the icon for @volume.
 *
 * Returns: (transfer full): a #GIcon. The returned object should be unreffed with g_object_unref() when no longer needed.
 */


/**
 * g_volume_get_identifier:
 * @volume: a #GVolume
 * @kind: the kind of identifier to return
 *
 * Gets the identifier of the given kind for @volume.
 * See the <link linkend="volume-identifier">introduction</link>
 * for more information about volume identifiers.
 *
 * Returns: a newly allocated string containing the requested identfier, or %NULL if the #GVolume doesn't have this kind of identifier
 */


/**
 * g_volume_get_mount:
 * @volume: a #GVolume.
 *
 * Gets the mount for the @volume.
 *
 * Returns: (transfer full): a #GMount or %NULL if @volume isn't mounted. The returned object should be unreffed with g_object_unref() when no longer needed.
 */


/**
 * g_volume_get_name:
 * @volume: a #GVolume.
 *
 * Gets the name of @volume.
 *
 * Returns: the name for the given @volume. The returned string should be freed with g_free() when no longer needed.
 */


/**
 * g_volume_get_sort_key:
 * @volume: A #GVolume.
 *
 * Gets the sort key for @volume, if any.
 *
 * Returns: Sorting key for @volume or %NULL if no such key is available.
 * Since: 2.32
 */


/**
 * g_volume_get_uuid:
 * @volume: a #GVolume.
 *
 * Gets the UUID for the @volume. The reference is typically based on
 * the file system UUID for the volume in question and should be
 * considered an opaque string. Returns %NULL if there is no UUID
 * available.
 *
 * Returns: the UUID for @volume or %NULL if no UUID can be computed. The returned string should be freed with g_free() when no longer needed.
 */


/**
 * g_volume_monitor_adopt_orphan_mount:
 * @mount: a #GMount object to find a parent for
 *
 * This function should be called by any #GVolumeMonitor
 * implementation when a new #GMount object is created that is not
 * associated with a #GVolume object. It must be called just before
 * emitting the @mount_added signal.
 *
 * If the return value is not %NULL, the caller must associate the
 * returned #GVolume object with the #GMount. This involves returning
 * it in its g_mount_get_volume() implementation. The caller must
 * also listen for the "removed" signal on the returned object
 * and give up its reference when handling that signal
 *
 * Similary, if implementing g_volume_monitor_adopt_orphan_mount(),
 * the implementor must take a reference to @mount and return it in
 * its g_volume_get_mount() implemented. Also, the implementor must
 * listen for the "unmounted" signal on @mount and give up its
 * reference upon handling that signal.
 *
 * There are two main use cases for this function.
 *
 * One is when implementing a user space file system driver that reads
 * blocks of a block device that is already represented by the native
 * volume monitor (for example a CD Audio file system driver). Such
 * a driver will generate its own #GMount object that needs to be
 * associated with the #GVolume object that represents the volume.
 *
 * The other is for implementing a #GVolumeMonitor whose sole purpose
 * is to return #GVolume objects representing entries in the users
 * "favorite servers" list or similar.
 *
 * Returns: (transfer full): the #GVolume object that is the parent for @mount or %NULL if no wants to adopt the #GMount.
 * Deprecated: 2.20: Instead of using this function, #GVolumeMonitor implementations should instead create shadow mounts with the URI of the mount they intend to adopt. See the proxy volume monitor in gvfs for an example of this. Also see g_mount_is_shadowed(), g_mount_shadow() and g_mount_unshadow() functions.
 */


/**
 * g_volume_monitor_get:
 *
 * Gets the volume monitor used by gio.
 *
 * Returns: (transfer full): a reference to the #GVolumeMonitor used by gio. Call g_object_unref() when done with it.
 */


/**
 * g_volume_monitor_get_connected_drives:
 * @volume_monitor: a #GVolumeMonitor.
 *
 * Gets a list of drives connected to the system.
 *
 * The returned list should be freed with g_list_free(), after
 * its elements have been unreffed with g_object_unref().
 *
 * Returns: (element-type GDrive) (transfer full): a #GList of connected #GDrive objects.
 */


/**
 * g_volume_monitor_get_mount_for_uuid:
 * @volume_monitor: a #GVolumeMonitor.
 * @uuid: the UUID to look for
 *
 * Finds a #GMount object by its UUID (see g_mount_get_uuid())
 *
 * Returns: (transfer full): a #GMount or %NULL if no such mount is available. Free the returned object with g_object_unref().
 */


/**
 * g_volume_monitor_get_mounts:
 * @volume_monitor: a #GVolumeMonitor.
 *
 * Gets a list of the mounts on the system.
 *
 * The returned list should be freed with g_list_free(), after
 * its elements have been unreffed with g_object_unref().
 *
 * Returns: (element-type GMount) (transfer full): a #GList of #GMount objects.
 */


/**
 * g_volume_monitor_get_volume_for_uuid:
 * @volume_monitor: a #GVolumeMonitor.
 * @uuid: the UUID to look for
 *
 * Finds a #GVolume object by its UUID (see g_volume_get_uuid())
 *
 * Returns: (transfer full): a #GVolume or %NULL if no such volume is available. Free the returned object with g_object_unref().
 */


/**
 * g_volume_monitor_get_volumes:
 * @volume_monitor: a #GVolumeMonitor.
 *
 * Gets a list of the volumes on the system.
 *
 * The returned list should be freed with g_list_free(), after
 * its elements have been unreffed with g_object_unref().
 *
 * Returns: (element-type GVolume) (transfer full): a #GList of #GVolume objects.
 */


/**
 * g_volume_mount:
 * @volume: a #GVolume.
 * @flags: flags affecting the operation
 * @mount_operation: (allow-none): a #GMountOperation or %NULL to avoid user interaction.
 * @cancellable: (allow-none): optional #GCancellable object, %NULL to ignore.
 * @callback: (allow-none): a #GAsyncReadyCallback, or %NULL.
 * @user_data: user data that gets passed to @callback
 *
 * Mounts a volume. This is an asynchronous operation, and is
 * finished by calling g_volume_mount_finish() with the @volume
 * and #GAsyncResult returned in the @callback.
 *
 * Virtual: mount_fn
 */


/**
 * g_volume_mount_finish:
 * @volume: a #GVolume
 * @result: a #GAsyncResult
 * @error: a #GError location to store an error, or %NULL to ignore
 *
 * Finishes mounting a volume. If any errors occurred during the operation,
 * @error will be set to contain the errors and %FALSE will be returned.
 *
 * If the mount operation succeeded, g_volume_get_mount() on @volume
 * is guaranteed to return the mount right after calling this
 * function; there's no need to listen for the 'mount-added' signal on
 * #GVolumeMonitor.
 *
 * Returns: %TRUE, %FALSE if operation failed.
 */


/**
 * g_volume_should_automount:
 * @volume: a #GVolume
 *
 * Returns whether the volume should be automatically mounted.
 *
 * Returns: %TRUE if the volume should be automatically mounted.
 */


/**
 * g_win32_input_stream_get_close_handle:
 * @stream: a #GWin32InputStream
 *
 * Returns whether the handle of @stream will be
 * closed when the stream is closed.
 *
 * Returns: %TRUE if the handle is closed when done
 * Since: 2.26
 */


/**
 * g_win32_input_stream_get_handle:
 * @stream: a #GWin32InputStream
 *
 * Return the Windows file handle that the stream reads from.
 *
 * Returns: The file handle of @stream
 * Since: 2.26
 */


/**
 * g_win32_input_stream_new:
 * @handle: a Win32 file handle
 * @close_handle: %TRUE to close the handle when done
 *
 * Creates a new #GWin32InputStream for the given @handle.
 *
 * If @close_handle is %TRUE, the handle will be closed
 * when the stream is closed.
 *
 * Note that "handle" here means a Win32 HANDLE, not a "file descriptor"
 * as used in the Windows C libraries.
 *
 * Returns: a new #GWin32InputStream
 */


/**
 * g_win32_input_stream_set_close_handle:
 * @stream: a #GWin32InputStream
 * @close_handle: %TRUE to close the handle when done
 *
 * Sets whether the handle of @stream shall be closed
 * when the stream is closed.
 *
 * Since: 2.26
 */


/**
 * g_win32_output_stream_get_close_handle:
 * @stream: a #GWin32OutputStream
 *
 * Returns whether the handle of @stream will be closed when the
 * stream is closed.
 *
 * Returns: %TRUE if the handle is closed when done
 * Since: 2.26
 */


/**
 * g_win32_output_stream_get_handle:
 * @stream: a #GWin32OutputStream
 *
 * Return the Windows handle that the stream writes to.
 *
 * Returns: The handle descriptor of @stream
 * Since: 2.26
 */


/**
 * g_win32_output_stream_new:
 * @handle: a Win32 file handle
 * @close_handle: %TRUE to close the handle when done
 *
 * Creates a new #GWin32OutputStream for the given @handle.
 *
 * If @close_handle, is %TRUE, the handle will be closed when the
 * output stream is destroyed.
 *
 * Returns: a new #GOutputStream
 * Since: 2.26
 */


/**
 * g_win32_output_stream_set_close_handle:
 * @stream: a #GWin32OutputStream
 * @close_handle: %TRUE to close the handle when done
 *
 * Sets whether the handle of @stream shall be closed when the stream
 * is closed.
 *
 * Since: 2.26
 */


/**
 * g_zlib_compressor_get_file_info:
 * @compressor: a #GZlibCompressor
 *
 * Returns the #GZlibCompressor:file-info property.
 *
 * Returns: (transfer none): a #GFileInfo, or %NULL
 * Since: 2.26
 */


/**
 * g_zlib_compressor_new:
 * @format: The format to use for the compressed data
 * @level: compression level (0-9), -1 for default
 *
 * Creates a new #GZlibCompressor.
 *
 * Returns: a new #GZlibCompressor
 * Since: 2.24
 */


/**
 * g_zlib_compressor_set_file_info:
 * @compressor: a #GZlibCompressor
 * @file_info: (allow-none): a #GFileInfo
 *
 * Sets @file_info in @compressor. If non-%NULL, and @compressor's
 * #GZlibCompressor:format property is %G_ZLIB_COMPRESSOR_FORMAT_GZIP,
 * it will be used to set the file name and modification time in
 * the GZIP header of the compressed data.
 *
 * Note: it is an error to call this function while a compression is in
 * progress; it may only be called immediately after creation of @compressor,
 * or after resetting it with g_converter_reset().
 *
 * Since: 2.26
 */


/**
 * g_zlib_decompressor_get_file_info:
 * @decompressor: a #GZlibDecompressor
 *
 * Retrieves the #GFileInfo constructed from the GZIP header data
 * of compressed data processed by @compressor, or %NULL if @decompressor's
 * #GZlibDecompressor:format property is not %G_ZLIB_COMPRESSOR_FORMAT_GZIP,
 * or the header data was not fully processed yet, or it not present in the
 * data stream at all.
 *
 * Returns: (transfer none): a #GFileInfo, or %NULL
 * Since: 2.26
 */


/**
 * g_zlib_decompressor_new:
 * @format: The format to use for the compressed data
 *
 * Creates a new #GZlibDecompressor.
 *
 * Returns: a new #GZlibDecompressor
 * Since: 2.24
 */


/**
 * get_all_desktop_entries_for_mime_type:
 * @mime_type: a mime type.
 * @except: NULL or a strv list
 *
 * Returns all the desktop ids for @mime_type. The desktop files
 * are listed in an order so that default applications are listed before
 * non-default ones, and handlers for inherited mimetypes are listed
 * after the base ones.
 *
 * Optionally doesn't list the desktop ids given in the @except
 *
 * Returns: a #GList containing the desktop ids which claim to handle @mime_type.
 */


/**
 * mime_info_cache_reload:
 * @dir: directory path which needs reloading.
 *
 * Reload the mime information for the @dir.
 */



/************************************************************/
/* THIS FILE IS GENERATED DO NOT EDIT */
/************************************************************/
