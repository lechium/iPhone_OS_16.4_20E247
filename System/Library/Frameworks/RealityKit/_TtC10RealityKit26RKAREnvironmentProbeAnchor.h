//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ARKit/AREnvironmentProbeAnchor.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC10RealityKit26RKAREnvironmentProbeAnchor : AREnvironmentProbeAnchor
{
    MISSING_TYPE *refreshInterval;	// 8 = 0x8
    MISSING_TYPE *priority;	// 16 = 0x10
    MISSING_TYPE *weight;	// 20 = 0x14
    MISSING_TYPE *delegate;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000026c60
- (id)initWithIdentifier:(id)arg1 transform:(CDStruct_f1db2b5e)arg2 name:(id)arg3 hiddenFromPublicDelegate:(_Bool)arg4;	// IMP=0x0000000000026ba0
- (id)initWithIdentifier:(id)arg1 transform:(CDStruct_f1db2b5e)arg2 name:(id)arg3;	// IMP=0x0000000000026b40
- (id)initWithIdentifier:(id)arg1 transform:(CDStruct_f1db2b5e)arg2;	// IMP=0x0000000000026ae0
- (id)initWithName:(id)arg1 transform:(CDStruct_f1db2b5e)arg2;	// IMP=0x0000000000026ab0
- (id)initWithTransform:(CDStruct_f1db2b5e)arg1;	// IMP=0x0000000000026a80
- (id)initWithName:(id)arg1 transform:(CDStruct_f1db2b5e)arg2 extent: /* Error: Ran out of types for this method. */;	// IMP=0x0000000000026a50
- (id)initWithTransform:(CDStruct_f1db2b5e)arg1 extent: /* Error: Ran out of types for this method. */;	// IMP=0x0000000000026a20
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000269d0
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000026870
- (id)initWithAnchor:(id)arg1;	// IMP=0x0000000000026680

@end

