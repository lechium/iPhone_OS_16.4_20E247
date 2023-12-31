//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GCSystemGestureXPCProxyClientEndpoint, GCSystemGesturesState, NSString;
@protocol NSObject><NSCopying><NSSecureCoding;

__attribute__((visibility("hidden")))
@interface GCSystemGestureXPCProxyClientEndpointDescription : NSObject
{
    GCSystemGesturesState *_initialSystemGesture;	// 8 = 0x8
    GCSystemGestureXPCProxyClientEndpoint *_materializedObject;	// 16 = 0x10
    _Bool _isSystemGestureObserver;	// 24 = 0x18
    id <NSObject><NSCopying><NSSecureCoding> _identifier;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00100000000b0966
- (void).cxx_destruct;	// IMP=0x00000000000b0ec6
@property(readonly) id <NSObject><NSCopying><NSSecureCoding> identifier; // @synthesize identifier=_identifier;
- (id)materializeWithContext:(id)arg1;	// IMP=0x00000000000b0bc8
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000b0b42
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000b0a42
- (id)init;	// IMP=0x00000000000b0a1f
- (id)initWithIdentifier:(id)arg1 initialSystemGesture:(id)arg2 isSystemGestureObserver:(_Bool)arg3;	// IMP=0x00000000000b096e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

