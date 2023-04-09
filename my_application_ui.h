#include <array>
#include <limits>
#include <cstdlib>
#include <cmath>
#include <slint.h>

class HelloWorld;

class ColorSchemeSelector_3 {
    public:
    slint::private_api::Property<bool> dark_color_scheme;
    inline ColorSchemeSelector_3 (const HelloWorld * root);
    private:
    const HelloWorld * root;
};

class Palette_4 {
    public:
    slint::private_api::Property<slint::Color> white;
    inline Palette_4 (const HelloWorld * root);
    private:
    const HelloWorld * root;
};

class StyleMetrics_5 {
    public:
    inline StyleMetrics_5 (const HelloWorld * root);
    private:
    const HelloWorld * root;
};

class HelloWorld {
    public:
    slint::Window m_window = slint::Window{slint::private_api::WindowAdapterRc()};
    slint::cbindgen_private::ComponentWeak self_weak;
    private:
    const HelloWorld * root;
    uintptr_t tree_index_of_first_child;
    uintptr_t tree_index;
    slint::private_api::Property<float> root_1_label_2_min_height;
    slint::private_api::Property<float> root_1_label_2_min_width;
    slint::private_api::Property<float> root_1_label_2_preferred_height;
    slint::private_api::Property<float> root_1_label_2_preferred_width;
    slint::cbindgen_private::WindowItem root_1 = {};
    slint::cbindgen_private::Text label_2 = {};
    inline auto init (const HelloWorld * root,slint::cbindgen_private::ComponentWeak enclosing_component,uintptr_t tree_index,uintptr_t tree_index_of_first_child) -> void;
    inline auto user_init () -> void;
    inline auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    inline auto accessible_role (uintptr_t index) const -> slint::cbindgen_private::AccessibleRole;
    inline auto accessible_string_property (uintptr_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> slint::SharedString;
    static inline auto visit_children (slint::private_api::ComponentRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t;
    static inline auto get_item_ref (slint::private_api::ComponentRef component, uintptr_t index) -> slint::private_api::ItemRef;
    static inline auto get_subtree_range ([[maybe_unused]] slint::private_api::ComponentRef component, [[maybe_unused]] uintptr_t dyn_index) -> slint::private_api::IndexRange;
    static inline auto get_subtree_component ([[maybe_unused]] slint::private_api::ComponentRef component, [[maybe_unused]] uintptr_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ComponentWeak *result) -> void;
    static inline auto get_item_tree (slint::private_api::ComponentRef) -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static inline auto parent_node ([[maybe_unused]] slint::private_api::ComponentRef component, [[maybe_unused]] slint::private_api::ItemWeak *result) -> void;
    static inline auto subtree_index ([[maybe_unused]] slint::private_api::ComponentRef component) -> uintptr_t;
    static inline auto item_tree () -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static inline auto item_array () -> const slint::private_api::ItemArray;
    static inline auto layout_info ([[maybe_unused]] slint::private_api::ComponentRef component, slint::cbindgen_private::Orientation o) -> slint::cbindgen_private::LayoutInfo;
    static inline auto accessible_role ([[maybe_unused]] slint::private_api::ComponentRef component, uintptr_t index) -> slint::cbindgen_private::AccessibleRole;
    static inline auto accessible_string_property ([[maybe_unused]] slint::private_api::ComponentRef component, uintptr_t index, slint::cbindgen_private::AccessibleStringProperty what, slint::SharedString *result) -> void;
    public:
    static const slint::private_api::ComponentVTable static_vtable;
    static inline auto create () -> slint::ComponentHandle<HelloWorld>;
    inline ~HelloWorld ();
    inline auto get_my_label () const -> slint::SharedString;
    inline auto set_my_label (const slint::SharedString &value) const;
    inline auto show ();
    inline auto hide ();
    inline auto window () const -> slint::Window&;
    inline auto run ();
    private:
    std::shared_ptr<ColorSchemeSelector_3> global_ColorSchemeSelector_3 = std::make_shared<ColorSchemeSelector_3>(this);
    std::shared_ptr<Palette_4> global_Palette_4 = std::make_shared<Palette_4>(this);
    std::shared_ptr<StyleMetrics_5> global_StyleMetrics_5 = std::make_shared<StyleMetrics_5>(this);
    friend class vtable::VRc<slint::private_api::ComponentVTable, HelloWorld>;
    friend class slint::private_api::WindowAdapterRc;
    friend class ColorSchemeSelector_3;
    friend class Palette_4;
    friend class StyleMetrics_5;
};

inline ColorSchemeSelector_3::ColorSchemeSelector_3 (const HelloWorld * root)
 : root(root)
{
    (void)this->root;
    this->dark_color_scheme.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return this->root->window().window_handle().dark_color_scheme();
                        });
}

inline Palette_4::Palette_4 (const HelloWorld * root)
 : root(root)
{
    (void)this->root;
    this->white.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return [&]() -> slint::Color { if (! this->root->global_ColorSchemeSelector_3->dark_color_scheme.get()) { return slint::Color::from_argb_encoded(+4.294967295e9); } else { return slint::Color::from_argb_encoded(+4.280229663e9); }}();
                        });
}

inline StyleMetrics_5::StyleMetrics_5 (const HelloWorld * root)
 : root(root)
{
    (void)this->root;
}

inline const slint::private_api::ComponentVTable HelloWorld::static_vtable = { visit_children, get_item_ref, get_subtree_range, get_subtree_component, get_item_tree, parent_node, subtree_index, layout_info, accessible_role, accessible_string_property, slint::private_api::drop_in_place<HelloWorld>, slint::private_api::dealloc };

inline auto HelloWorld::init (const HelloWorld * root,slint::cbindgen_private::ComponentWeak enclosing_component,uintptr_t tree_index,uintptr_t tree_index_of_first_child) -> void{
    auto self = this;
    self->self_weak = enclosing_component;
    self->root = root;
    this->tree_index_of_first_child = tree_index_of_first_child;
    self->tree_index = tree_index;
    self->root_1.background.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::Brush(self->root->global_Palette_4->white.get());
                        });
    self->root_1.height.set(400);
    self->root_1_label_2_min_height.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return SLINT_GET_ITEM_VTABLE(TextVTable)->layout_info({SLINT_GET_ITEM_VTABLE(TextVTable), const_cast<slint::cbindgen_private::Text*>(&self->label_2)}, slint::cbindgen_private::Orientation::Vertical, &self->root->window().window_handle()).min;
                        });
    self->root_1_label_2_min_width.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return SLINT_GET_ITEM_VTABLE(TextVTable)->layout_info({SLINT_GET_ITEM_VTABLE(TextVTable), const_cast<slint::cbindgen_private::Text*>(&self->label_2)}, slint::cbindgen_private::Orientation::Horizontal, &self->root->window().window_handle()).min;
                        });
    self->root_1_label_2_preferred_height.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return SLINT_GET_ITEM_VTABLE(TextVTable)->layout_info({SLINT_GET_ITEM_VTABLE(TextVTable), const_cast<slint::cbindgen_private::Text*>(&self->label_2)}, slint::cbindgen_private::Orientation::Vertical, &self->root->window().window_handle()).preferred;
                        });
    self->root_1_label_2_preferred_width.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return SLINT_GET_ITEM_VTABLE(TextVTable)->layout_info({SLINT_GET_ITEM_VTABLE(TextVTable), const_cast<slint::cbindgen_private::Text*>(&self->label_2)}, slint::cbindgen_private::Orientation::Horizontal, &self->root->window().window_handle()).preferred;
                        });
    self->root_1.title.set(slint::SharedString(u8"Slint Window"));
    self->root_1.width.set(400);
    self->label_2.color.set(slint::Brush(slint::Color::from_argb_encoded(+4.278190335e9)));
    self->label_2.height.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return [&]{ auto minmax_lhs39 = self->root_1_label_2_preferred_height.get();;auto minmax_rhs39 = self->root_1_label_2_min_height.get();;return [&]() -> float { if (minmax_lhs39 > minmax_rhs39) { return minmax_lhs39; } else { return minmax_rhs39; }}(); }();
                        });
    self->label_2.text.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::SharedString(u8"Hello, world");
                        });
    self->label_2.width.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return [&]{ auto minmax_lhs38 = self->root_1_label_2_preferred_width.get();;auto minmax_rhs38 = self->root_1_label_2_min_width.get();;return [&]() -> float { if (minmax_lhs38 > minmax_rhs38) { return minmax_lhs38; } else { return minmax_rhs38; }}(); }();
                        });
    self->label_2.x.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return ((self->root_1.width.get() - self->label_2.width.get()) /(float) 2);
                        });
    self->label_2.y.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return ((self->root_1.height.get() - self->label_2.height.get()) /(float) 2);
                        });
}

inline auto HelloWorld::user_init () -> void{
    [[maybe_unused]] auto self = this;
}

inline auto HelloWorld::layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo{
    [[maybe_unused]] auto self = this;
    return o == slint::cbindgen_private::Orientation::Horizontal ? [&]{ auto layout_info = SLINT_GET_ITEM_VTABLE(WindowItemVTable)->layout_info({SLINT_GET_ITEM_VTABLE(WindowItemVTable), const_cast<slint::cbindgen_private::WindowItem*>(&self->root_1)}, slint::cbindgen_private::Orientation::Horizontal, &self->root->window().window_handle());;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.min = a_0; o.preferred = a_1; o.max = a_2; o.max_percent = a_3; o.stretch = a_4; o.min_percent = a_5; return o; }(self->root_1.width.get(), layout_info.preferred, self->root_1.width.get(), layout_info.max_percent, layout_info.stretch, layout_info.min_percent); }() : [&]{ auto layout_info = SLINT_GET_ITEM_VTABLE(WindowItemVTable)->layout_info({SLINT_GET_ITEM_VTABLE(WindowItemVTable), const_cast<slint::cbindgen_private::WindowItem*>(&self->root_1)}, slint::cbindgen_private::Orientation::Vertical, &self->root->window().window_handle());;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min_percent = a_2; o.min = a_3; o.stretch = a_4; o.preferred = a_5; return o; }(self->root_1.height.get(), layout_info.max_percent, layout_info.min_percent, self->root_1.height.get(), layout_info.stretch, layout_info.preferred); }();
}

inline auto HelloWorld::accessible_role (uintptr_t index) const -> slint::cbindgen_private::AccessibleRole{
    [[maybe_unused]] auto self = this;
    switch (index) {
        case 1: return slint::cbindgen_private::AccessibleRole::Text;
    }
    return {};
}

inline auto HelloWorld::accessible_string_property (uintptr_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> slint::SharedString{
    [[maybe_unused]] auto self = this;
    switch ((index << 8) | uintptr_t(what)) {
        case (1 << 8) | uintptr_t(slint::cbindgen_private::AccessibleStringProperty::Label): return self->label_2.text.get();
    }
    return {};
}

inline auto HelloWorld::visit_children (slint::private_api::ComponentRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t{
    static const auto dyn_visit = [] (const uint8_t *base,  [[maybe_unused]] slint::private_api::TraversalOrder order, [[maybe_unused]] slint::private_api::ItemVisitorRefMut visitor, [[maybe_unused]] uintptr_t dyn_index) -> uint64_t {
        [[maybe_unused]] auto self = reinterpret_cast<const HelloWorld*>(base);
        std::abort();
    };
    auto self_rc = reinterpret_cast<const HelloWorld*>(component.instance)->self_weak.lock()->into_dyn();
    return slint::cbindgen_private::slint_visit_item_tree(&self_rc, get_item_tree(component) , index, order, visitor, dyn_visit);
}

inline auto HelloWorld::get_item_ref (slint::private_api::ComponentRef component, uintptr_t index) -> slint::private_api::ItemRef{
    return slint::private_api::get_item_ref(component, get_item_tree(component), item_array(), index);
}

inline auto HelloWorld::get_subtree_range ([[maybe_unused]] slint::private_api::ComponentRef component, [[maybe_unused]] uintptr_t dyn_index) -> slint::private_api::IndexRange{
        std::abort();
}

inline auto HelloWorld::get_subtree_component ([[maybe_unused]] slint::private_api::ComponentRef component, [[maybe_unused]] uintptr_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ComponentWeak *result) -> void{
        std::abort();
}

inline auto HelloWorld::get_item_tree (slint::private_api::ComponentRef) -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>{
    return item_tree();
}

inline auto HelloWorld::parent_node ([[maybe_unused]] slint::private_api::ComponentRef component, [[maybe_unused]] slint::private_api::ItemWeak *result) -> void{
}

inline auto HelloWorld::subtree_index ([[maybe_unused]] slint::private_api::ComponentRef component) -> uintptr_t{
    return std::numeric_limits<uintptr_t>::max();
}

inline auto HelloWorld::item_tree () -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>{
    static const slint::private_api::ItemTreeNode children[] {
        slint::private_api::make_item_node(1, 1, 0, 0, false), 
slint::private_api::make_item_node(0, 2, 0, 1, true) };
    return { const_cast<slint::private_api::ItemTreeNode*>(children), std::size(children) };
}

inline auto HelloWorld::item_array () -> const slint::private_api::ItemArray{
    static const slint::private_api::ItemArrayEntry items[] {
        { SLINT_GET_ITEM_VTABLE(WindowItemVTable),  offsetof(HelloWorld, root_1) }, 
{ SLINT_GET_ITEM_VTABLE(TextVTable),  offsetof(HelloWorld, label_2) } };
    return { const_cast<slint::private_api::ItemArrayEntry*>(items), std::size(items) };
}

inline auto HelloWorld::layout_info ([[maybe_unused]] slint::private_api::ComponentRef component, slint::cbindgen_private::Orientation o) -> slint::cbindgen_private::LayoutInfo{
    return reinterpret_cast<const HelloWorld*>(component.instance)->layout_info(o);
}

inline auto HelloWorld::accessible_role ([[maybe_unused]] slint::private_api::ComponentRef component, uintptr_t index) -> slint::cbindgen_private::AccessibleRole{
    return reinterpret_cast<const HelloWorld*>(component.instance)->accessible_role(index);
}

inline auto HelloWorld::accessible_string_property ([[maybe_unused]] slint::private_api::ComponentRef component, uintptr_t index, slint::cbindgen_private::AccessibleStringProperty what, slint::SharedString *result) -> void{
    *result = reinterpret_cast<const HelloWorld*>(component.instance)->accessible_string_property(index, what);
}

inline auto HelloWorld::create () -> slint::ComponentHandle<HelloWorld>{
    auto self_rc = vtable::VRc<slint::private_api::ComponentVTable, HelloWorld>::make();
    auto self = const_cast<HelloWorld *>(&*self_rc);
    self->self_weak = vtable::VWeak(self_rc).into_dyn();
    self->m_window.window_handle().set_component(*self_rc);
    self->m_window.window_handle().register_component(self, self->item_array());
    self->init(self, self->self_weak, 0, 1 );
    self->user_init();
    return slint::ComponentHandle<HelloWorld>{ self_rc };
}

inline HelloWorld::~HelloWorld (){
    auto self = this;
    self->m_window.window_handle().unregister_component(self, item_array());
}

inline auto HelloWorld::get_my_label () const -> slint::SharedString{
    [[maybe_unused]] auto self = this;
    return self->label_2.text.get();
}

inline auto HelloWorld::set_my_label (const slint::SharedString &value) const{
    [[maybe_unused]] auto self = this;
    self->label_2.text.set(value);
}

inline auto HelloWorld::show (){
    m_window.show();
}

inline auto HelloWorld::hide (){
    m_window.hide();
}

inline auto HelloWorld::window () const -> slint::Window&{
    return const_cast<HelloWorld *>(this)->m_window;
}

inline auto HelloWorld::run (){
    show();
    slint::run_event_loop();
    hide();
}

[[maybe_unused]] constexpr slint::private_api::VersionCheckHelper<1, 0, 0> THE_SAME_VERSION_MUST_BE_USED_FOR_THE_COMPILER_AND_THE_RUNTIME = slint::private_api::VersionCheckHelper<SLINT_VERSION_MAJOR, SLINT_VERSION_MINOR, SLINT_VERSION_PATCH>();
