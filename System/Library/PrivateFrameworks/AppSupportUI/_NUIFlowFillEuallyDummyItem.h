//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, _NUIFlowRowContainer;

__attribute__((visibility("hidden")))
@interface _NUIFlowFillEuallyDummyItem : NSObject
{
    _NUIFlowRowContainer *_rowContainer;	// 8 = 0x8
}

- (_Bool)isLayoutSizeDependentOnPerpendicularAxis;	// IMP=0x00000000000050f9
- (double)effectiveFirstBaselineOffsetFromContentTop;	// IMP=0x00000000000050f0
- (double)effectiveBaselineOffsetFromContentBottom;	// IMP=0x00000000000050e7
- (float)contentHuggingPriorityForAxis:(long long)arg1;	// IMP=0x0000000000005025
- (float)contentCompressionResistancePriorityForAxis:(long long)arg1;	// IMP=0x0000000000004f63
- (id)initWithRowContainer:(id)arg1;	// IMP=0x0000000000004f26

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

