//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NPKRemoteAdminConnectionServiceAgent, NPSDomainAccessor;

@interface NPDCompanionPeerPaymentStatusObserver : NSObject
{
    NPKRemoteAdminConnectionServiceAgent *_serviceAgent;	// 8 = 0x8
    NPSDomainAccessor *_globalDomainAccessor;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000000090b8
@property(retain, nonatomic) NPSDomainAccessor *globalDomainAccessor; // @synthesize globalDomainAccessor=_globalDomainAccessor;
@property(retain, nonatomic) NPKRemoteAdminConnectionServiceAgent *serviceAgent; // @synthesize serviceAgent=_serviceAgent;
- (void)_compareCompanionAndWatchPeerPaymentRegistrationStatus;	// IMP=0x0010000000008cb6
- (_Bool)_shouldCheckPeerPaymentStatus;	// IMP=0x0010000000008b6e
- (void)handleWatchRequestForCompanionPeerPaymentRegistrationState;	// IMP=0x0010000000008acc
- (void)handleCompanionPeerPaymentWebServiceContextChanged;	// IMP=0x0010000000008a2a
- (id)initWithRemoteAdminConnectionServiceAgent:(id)arg1;	// IMP=0x001000000000899d

@end
