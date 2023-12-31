//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface RSMajorViewInfo : NSObject
{
    struct vector<float __attribute__((ext_vector_type(3))), std::allocator<float __attribute__((ext_vector_type(3)))>> _major_convex_hull;	// 8 = 0x8
    struct vector<float __attribute__((ext_vector_type(3))), std::allocator<float __attribute__((ext_vector_type(3)))>> _major_convex_hull_buffer;	// 32 = 0x20
    struct vector<float __attribute__((ext_vector_type(3))), std::allocator<float __attribute__((ext_vector_type(3)))>> _major_view_line;	// 56 = 0x38
    struct vector<float __attribute__((ext_vector_type(3))), std::allocator<float __attribute__((ext_vector_type(3)))>> _major_views;	// 80 = 0x50
}

- (id).cxx_construct;	// IMP=0x0000000000144d0e
- (void).cxx_destruct;	// IMP=0x0000000000144cb0
- (void)cleanMajorViews;	// IMP=0x0000000000144ca2
- (void)apppendMajorViews: /* Error: Ran out of types for this method. */;	// IMP=0x0000000000144ba4
- (void)assignMajorViews:(const MISSING_TYPE **)arg1 withSize:(unsigned long long)arg2;	// IMP=0x0000000000144b88
- (void)cleanMajorViewLine;	// IMP=0x0000000000144b7a
- (void)apppendMajorViewLine: /* Error: Ran out of types for this method. */;	// IMP=0x0000000000144a7c
- (void)assignMajorViewLine:(const MISSING_TYPE **)arg1 withSize:(unsigned long long)arg2;	// IMP=0x0000000000144a60
- (void)cleanMajorConvexHullBuffer;	// IMP=0x0000000000144a52
- (void)apppendMajorConvexHullBuffer: /* Error: Ran out of types for this method. */;	// IMP=0x0000000000144954
- (void)assignMajorConvexHullBuffer:(const MISSING_TYPE **)arg1 withSize:(unsigned long long)arg2;	// IMP=0x0000000000144938
- (void)cleanMajorConvexHull;	// IMP=0x000000000014492a
- (void)apppendMajorConvexHull: /* Error: Ran out of types for this method. */;	// IMP=0x000000000014482c
- (void)assignMajorConvexHull:(const MISSING_TYPE **)arg1 withSize:(unsigned long long)arg2;	// IMP=0x0000000000144810
- (id)dictionaryRepresentation;	// IMP=0x0000000000144453
@property(readonly, nonatomic) unsigned long long sz_major_views;
@property(readonly, nonatomic) const MISSING_TYPE **major_views;
@property(readonly, nonatomic) unsigned long long sz_major_view_line;
@property(readonly, nonatomic) const MISSING_TYPE **major_view_line;
@property(readonly, nonatomic) unsigned long long sz_major_convex_hull_buffer;
@property(readonly, nonatomic) const MISSING_TYPE **major_convex_hull_buffer;
@property(readonly, nonatomic) unsigned long long sz_major_convex_hull;
@property(readonly, nonatomic) const MISSING_TYPE **major_convex_hull;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001442e0
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000143767
- (void)reset;	// IMP=0x0000000000143741
- (id)init;	// IMP=0x00000000001436ed

@end

