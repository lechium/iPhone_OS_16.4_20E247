//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface RSMarkerCoaching : NSObject
{
    struct MarkerProposal _generator;	// 8 = 0x8
    struct vector<wlw::lcnn_flp::willow_line2d, std::allocator<wlw::lcnn_flp::willow_line2d>> _all_major_view_lines;	// 168 = 0xa8
    struct vector<float __attribute__((ext_vector_type(3))), std::allocator<float __attribute__((ext_vector_type(3)))>> _all_poses;	// 192 = 0xc0
}

- (id).cxx_construct;	// IMP=0x00000000001c4c2c
- (void).cxx_destruct;	// IMP=0x00000000001c4be1
- (void)reset;	// IMP=0x00000000001c4b9e
- (id)runWithFloorPlan:(id)arg1 temporalMeta:(id)arg2;	// IMP=0x00000000001c3747

@end
