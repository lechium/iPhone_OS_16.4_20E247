//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, Protocol;

@interface APMescalSigningRouter : NSObject
{
}

- (void)connectionInvalidated;	// IMP=0x00200000000c0f63
- (void)connectionInterrupted;	// IMP=0x00100000000c0f02
@property(readonly) Protocol *exportedInterface;
@property(readonly) id exportedObject;
- (void)signatureForData:(id)arg1 waitTime:(double)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000c0dfe
- (void)signatureForData:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000c0ca8
- (id)machServiceName;	// IMP=0x00100000000c0c9b
- (id)actionReceiverForConnection:(id)arg1;	// IMP=0x00100000000c0c92
- (id)initWithAMSProvider:(_Bool)arg1;	// IMP=0x00100000000c0b71

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

