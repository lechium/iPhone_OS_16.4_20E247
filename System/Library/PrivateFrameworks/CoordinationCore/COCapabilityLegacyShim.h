//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSSet, RPCompanionLinkClient;
@protocol COCapabilityLegacyShimDelegate, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface COCapabilityLegacyShim : NSObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    _Bool _companionQueryInProgress;	// 12 = 0xc
    _Bool _companionQueryNeeded;	// 13 = 0xd
    _Bool _companionQueryUnsuccessful;	// 14 = 0xe
    _Bool _companionQueryIncompatible;	// 15 = 0xf
    NSSet *_availableCapabilities;	// 16 = 0x10
    NSSet *_companionCapabilities;	// 24 = 0x18
    id <COCapabilityLegacyShimDelegate> _delegate;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_queue;	// 40 = 0x28
    NSSet *_supportedCapabilities;	// 48 = 0x30
    RPCompanionLinkClient *_rapport;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000000000469c
@property(readonly, nonatomic) RPCompanionLinkClient *rapport; // @synthesize rapport=_rapport;
@property(getter=isCompanionQueryIncompatible) _Bool companionQueryIncompatible; // @synthesize companionQueryIncompatible=_companionQueryIncompatible;
@property(getter=isCompanionQueryUnsuccessful) _Bool companionQueryUnsuccessful; // @synthesize companionQueryUnsuccessful=_companionQueryUnsuccessful;
@property(getter=isCompanionQueryNeeded) _Bool companionQueryNeeded; // @synthesize companionQueryNeeded=_companionQueryNeeded;
@property(getter=isCompanionQueryInProgress) _Bool companionQueryInProgress; // @synthesize companionQueryInProgress=_companionQueryInProgress;
@property(readonly, nonatomic) NSSet *supportedCapabilities; // @synthesize supportedCapabilities=_supportedCapabilities;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) __weak id <COCapabilityLegacyShimDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)_isStereoPeerActive;	// IMP=0x00000000000043cf
- (_Bool)_isStereoPeer:(id)arg1;	// IMP=0x00000000000042df
- (_Bool)_isStereoPairMember;	// IMP=0x000000000000425f
- (void)_notifyDelegate:(id)arg1;	// IMP=0x0000000000004129
- (void)_withLock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000040ec
@property(copy, nonatomic) NSSet *companionCapabilities; // @synthesize companionCapabilities=_companionCapabilities;
@property(copy, nonatomic) NSSet *availableCapabilities; // @synthesize availableCapabilities=_availableCapabilities;
- (id)_messageDecodeCapabilities:(id)arg1;	// IMP=0x000000000000372b
- (id)_messageEncodeCapabilities;	// IMP=0x000000000000360f
- (_Bool)_messageValidateResponse:(id)arg1;	// IMP=0x000000000000353d
- (_Bool)_messageValidateRequest:(id)arg1;	// IMP=0x000000000000346b
- (id)_messageCreateResponse;	// IMP=0x00000000000033ad
- (id)_messageCreateRequest;	// IMP=0x0000000000003337
- (void)_rapportProcessResponse:(id)arg1 error:(id)arg2;	// IMP=0x0000000000002c6f
- (void)_rapportProcessRequest:(id)arg1 emittingResponse:(CDUnknownBlockType)arg2;	// IMP=0x0000000000002a70
- (_Bool)_rapportEventShouldUpdateState:(id)arg1;	// IMP=0x00000000000029bb
- (void)_rapportDeregister;	// IMP=0x0000000000002977
- (void)_rapportRegister;	// IMP=0x000000000000276e
- (void)_rapportStop;	// IMP=0x00000000000026db
- (void)_rapportStart;	// IMP=0x000000000000200d
- (void)_stateQuery;	// IMP=0x0000000000001c7a
- (void)_stateUpdate;	// IMP=0x0000000000001b21
- (void)dealloc;	// IMP=0x0000000000001ae3
- (id)initWithDelegate:(id)arg1;	// IMP=0x0000000000001824

@end

