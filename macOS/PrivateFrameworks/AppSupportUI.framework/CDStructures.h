//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct CGPoint {
    double x;
    double y;
};

struct CGRect {
    struct CGPoint origin;
    struct CGSize size;
};

struct CGSize {
    double width;
    double height;
};

struct NSEdgeInsets {
    double top;
    double left;
    double bottom;
    double right;
};

struct NUIDirectionalEdgeInsets {
    double _field1;
    double _field2;
    double _field3;
    double _field4;
};

struct _NSRange {
    unsigned long long _field1;
    unsigned long long _field2;
};

struct _NUIBoxArrangement {
    id container;
    long long horzDist;
    long long vertDist;
    char hasValidMeasurement;
    vector_eb457d57 cells;
    struct CGSize measureSize;
    struct vector<CGRect, std::__1::allocator<CGRect>> viewFrames;
    CDStruct_6c92d79e maxBaseLinePair;
};

struct _NUIBoxArrangementCell;

struct _NUIFlowArrangement {
    id container;
    unsigned long long columns;
    double rowSpacing;
    double columnSpacing;
    char hasValidMeasurement;
    vector_702fc599 cells;
    struct CGSize measureSize;
    struct CGSize maxSize;
    struct vector<CGRect, std::__1::allocator<CGRect>> viewFrames;
    CDStruct_6c92d79e maxBaseLinePair;
};

struct _NUIFlowArrangementCell;

struct _NUIGridArrangement {
    id container;
    unsigned int horzDist:8;
    unsigned int vertDist:8;
    char baselineRelative;
    char hasValidMeasurement;
    vector_f8404f95 cells;
    vector_b8a5df6e columns;
    vector_b8a5df6e rows;
    struct vector<CGRect, std::__1::allocator<CGRect>> viewFrames;
};

struct _NUIGridArrangementCell;

struct _NUIGridArrangementDimension;

struct __tree_end_node<std::__1::__tree_node_base<void *>*> {
    struct __tree_node_base<void *> *__left_;
};

struct map<NSView *, _NUIContainerViewArrangedSubview, std::__1::less<NSView *>, std::__1::allocator<std::__1::pair<NSView *const, _NUIContainerViewArrangedSubview>>> {
    struct __tree<std::__1::__value_type<NSView *, _NUIContainerViewArrangedSubview>, std::__1::__map_value_compare<NSView *, std::__1::__value_type<NSView *, _NUIContainerViewArrangedSubview>, std::__1::less<NSView *>, true>, std::__1::allocator<std::__1::__value_type<NSView *, _NUIContainerViewArrangedSubview>>> {
        struct __tree_end_node<std::__1::__tree_node_base<void *>*> *__begin_node_;
        struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *>*>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<NSView *, _NUIContainerViewArrangedSubview>, void *>>> {
            struct __tree_end_node<std::__1::__tree_node_base<void *>*> __value_;
        } __pair1_;
        struct __compressed_pair<unsigned long, std::__1::__map_value_compare<NSView *, std::__1::__value_type<NSView *, _NUIContainerViewArrangedSubview>, std::__1::less<NSView *>, true>> {
            unsigned long long __value_;
        } __pair3_;
    } __tree_;
};

struct map<NSView *, const std::__1::pair<_NSRange, _NSRange>, std::__1::less<NSView *>, std::__1::allocator<std::__1::pair<NSView *const, const std::__1::pair<_NSRange, _NSRange>>>> {
    struct __tree<std::__1::__value_type<NSView *, const std::__1::pair<_NSRange, _NSRange>>, std::__1::__map_value_compare<NSView *, std::__1::__value_type<NSView *, const std::__1::pair<_NSRange, _NSRange>>, std::__1::less<NSView *>, true>, std::__1::allocator<std::__1::__value_type<NSView *, const std::__1::pair<_NSRange, _NSRange>>>> {
        struct __tree_end_node<std::__1::__tree_node_base<void *>*> *__begin_node_;
        struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *>*>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<NSView *, const std::__1::pair<_NSRange, _NSRange>>, void *>>> {
            struct __tree_end_node<std::__1::__tree_node_base<void *>*> __value_;
        } __pair1_;
        struct __compressed_pair<unsigned long, std::__1::__map_value_compare<NSView *, std::__1::__value_type<NSView *, const std::__1::pair<_NSRange, _NSRange>>, std::__1::less<NSView *>, true>> {
            unsigned long long __value_;
        } __pair3_;
    } __tree_;
};

struct map<NSView *, double, std::__1::less<NSView *>, std::__1::allocator<std::__1::pair<NSView *const, double>>> {
    struct __tree<std::__1::__value_type<NSView *, double>, std::__1::__map_value_compare<NSView *, std::__1::__value_type<NSView *, double>, std::__1::less<NSView *>, true>, std::__1::allocator<std::__1::__value_type<NSView *, double>>> {
        struct __tree_end_node<std::__1::__tree_node_base<void *>*> *__begin_node_;
        struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *>*>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<NSView *, double>, void *>>> {
            struct __tree_end_node<std::__1::__tree_node_base<void *>*> __value_;
        } __pair1_;
        struct __compressed_pair<unsigned long, std::__1::__map_value_compare<NSView *, std::__1::__value_type<NSView *, double>, std::__1::less<NSView *>, true>> {
            unsigned long long __value_;
        } __pair3_;
    } __tree_;
};

struct nui_size_cache {
    struct pair<CGSize, CGSize> *__begin_;
    struct pair<CGSize, CGSize> *__end_;
    struct __compressed_pair<std::__1::pair<CGSize, CGSize>*, std::__1::allocator<std::__1::pair<CGSize, CGSize>>> {
        struct pair<CGSize, CGSize> *__value_;
    } __end_cap_;
};

struct objc_super {
    id receiver;
    Class super_class;
};

struct pair<CGSize, CGSize>;

struct vector<CALayer *, std::__1::allocator<CALayer *>> {
    id *__begin_;
    id *__end_;
    struct __compressed_pair<CALayer **, std::__1::allocator<CALayer *>> {
        id *__value_;
    } __end_cap_;
};

struct vector<CGRect, std::__1::allocator<CGRect>> {
    struct CGRect *__begin_;
    struct CGRect *__end_;
    struct __compressed_pair<CGRect *, std::__1::allocator<CGRect>> {
        struct CGRect *__value_;
    } __end_cap_;
};

struct vector<_NUIBoxArrangementCell, std::__1::allocator<_NUIBoxArrangementCell>> {
    struct _NUIBoxArrangementCell *__begin_;
    struct _NUIBoxArrangementCell *__end_;
    struct __compressed_pair<_NUIBoxArrangementCell *, std::__1::allocator<_NUIBoxArrangementCell>> {
        struct _NUIBoxArrangementCell *__value_;
    } __end_cap_;
};

struct vector<_NUIFlowArrangementCell, std::__1::allocator<_NUIFlowArrangementCell>> {
    struct _NUIFlowArrangementCell *__begin_;
    struct _NUIFlowArrangementCell *__end_;
    struct __compressed_pair<_NUIFlowArrangementCell *, std::__1::allocator<_NUIFlowArrangementCell>> {
        struct _NUIFlowArrangementCell *__value_;
    } __end_cap_;
};

struct vector<_NUIGridArrangementCell, std::__1::allocator<_NUIGridArrangementCell>> {
    struct _NUIGridArrangementCell *__begin_;
    struct _NUIGridArrangementCell *__end_;
    struct __compressed_pair<_NUIGridArrangementCell *, std::__1::allocator<_NUIGridArrangementCell>> {
        struct _NUIGridArrangementCell *__value_;
    } __end_cap_;
};

struct vector<_NUIGridArrangementDimension, std::__1::allocator<_NUIGridArrangementDimension>> {
    struct _NUIGridArrangementDimension *__begin_;
    struct _NUIGridArrangementDimension *__end_;
    struct __compressed_pair<_NUIGridArrangementDimension *, std::__1::allocator<_NUIGridArrangementDimension>> {
        struct _NUIGridArrangementDimension *__value_;
    } __end_cap_;
};

#pragma mark Typedef'd Structures

typedef struct {
    unsigned short width;
    unsigned short height;
} CDStruct_0d6b4eb6;

typedef struct {
    unsigned int horzAlign:8;
    unsigned int vertAlign:8;
} CDStruct_e0b918f9;

typedef struct {
    double baseLineFromTop;
    double baseLineFromBottom;
} CDStruct_6c92d79e;

// Template types
typedef struct vector<_NUIBoxArrangementCell, std::__1::allocator<_NUIBoxArrangementCell>> {
    struct _NUIBoxArrangementCell *__begin_;
    struct _NUIBoxArrangementCell *__end_;
    struct __compressed_pair<_NUIBoxArrangementCell *, std::__1::allocator<_NUIBoxArrangementCell>> {
        struct _NUIBoxArrangementCell *__value_;
    } __end_cap_;
} vector_eb457d57;

typedef struct vector<_NUIFlowArrangementCell, std::__1::allocator<_NUIFlowArrangementCell>> {
    struct _NUIFlowArrangementCell *__begin_;
    struct _NUIFlowArrangementCell *__end_;
    struct __compressed_pair<_NUIFlowArrangementCell *, std::__1::allocator<_NUIFlowArrangementCell>> {
        struct _NUIFlowArrangementCell *__value_;
    } __end_cap_;
} vector_702fc599;

typedef struct vector<_NUIGridArrangementCell, std::__1::allocator<_NUIGridArrangementCell>> {
    struct _NUIGridArrangementCell *__begin_;
    struct _NUIGridArrangementCell *__end_;
    struct __compressed_pair<_NUIGridArrangementCell *, std::__1::allocator<_NUIGridArrangementCell>> {
        struct _NUIGridArrangementCell *__value_;
    } __end_cap_;
} vector_f8404f95;

typedef struct vector<_NUIGridArrangementDimension, std::__1::allocator<_NUIGridArrangementDimension>> {
    struct _NUIGridArrangementDimension *__begin_;
    struct _NUIGridArrangementDimension *__end_;
    struct __compressed_pair<_NUIGridArrangementDimension *, std::__1::allocator<_NUIGridArrangementDimension>> {
        struct _NUIGridArrangementDimension *__value_;
    } __end_cap_;
} vector_b8a5df6e;

