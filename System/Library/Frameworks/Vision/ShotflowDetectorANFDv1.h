//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface ShotflowDetectorANFDv1
{
}

+ (id)filterThresholds;	// IMP=0x00800000000e2a9f
+ (Class)shotflowNetworkClass;	// IMP=0x00800000000e2a8e
+ (id)supportedLabelKeys;	// IMP=0x00800000000e2a2b
- (id)nmsBoxes:(id)arg1;	// IMP=0x00000000000e2d93
- (id)processBoxes:(id)arg1 withHeight:(float)arg2 andWidth:(float)arg3;	// IMP=0x00000000000e2be5
- (id)initWithNetwork:(id)arg1;	// IMP=0x00000000000e2b90
- (id)initWithNetwork:(id)arg1 filterThresholds:(id)arg2;	// IMP=0x00000000000e2b3b

@end
