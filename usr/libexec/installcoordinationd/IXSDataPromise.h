//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IXDataPromiseSeed, NSError, NSSet, NSString, NSUUID;
@protocol IXSDataPromiseDelegate, OS_dispatch_queue;

@interface IXSDataPromise : NSObject
{
    _Bool _isTracked;	// 8 = 0x8
    _Bool _complete;	// 9 = 0x9
    _Bool _didAwake;	// 10 = 0xa
    double _percentComplete;	// 16 = 0x10
    id <IXSDataPromiseDelegate> _delegate;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_accessQueue;	// 32 = 0x20
    NSError *_error;	// 40 = 0x28
    unsigned long long _errorSourceIdentifier;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_delegateDeliveryQueue;	// 56 = 0x38
    IXDataPromiseSeed *_seed;	// 64 = 0x40
    double _lastSavedPercentComplete;	// 72 = 0x48
}

+ (_Bool)supportsSecureCoding;	// IMP=0x002000000007f503
- (void).cxx_destruct;	// IMP=0x001000000008149f
@property(nonatomic) double lastSavedPercentComplete; // @synthesize lastSavedPercentComplete=_lastSavedPercentComplete;
@property(retain, nonatomic) IXDataPromiseSeed *seed; // @synthesize seed=_seed;
- (id);	// IMP=0x001000000008146e
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateDeliveryQueue; // @synthesize delegateDeliveryQueue=_delegateDeliveryQueue;
@property(nonatomic) unsigned long long errorSourceIdentifier; // @synthesize errorSourceIdentifier=_errorSourceIdentifier;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *accessQueue; // @synthesize accessQueue=_accessQueue;
- (id)description;	// IMP=0x00100000000812e5
- (void)supersede;	// IMP=0x001000000008122c
- (void)decommission;	// IMP=0x00100000000810f6
@property(nonatomic) __weak id <IXSDataPromiseDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool didAwake; // @synthesize didAwake=_didAwake;
@property(readonly, nonatomic) _Bool hasBegun; // @dynamic hasBegun;
@property(nonatomic) double percentComplete; // @synthesize percentComplete=_percentComplete;
@property(nonatomic, getter=isComplete) _Bool complete; // @synthesize complete=_complete;
@property(readonly, copy, nonatomic) NSSet *subPromiseUUIDs;
@property(readonly, nonatomic) unsigned long long bytesConsumedOnDisk; // @dynamic bytesConsumedOnDisk;
@property(readonly, nonatomic) unsigned long long totalBytesForProgress; // @dynamic totalBytesForProgress;
@property(readonly, nonatomic) unsigned long long totalBytesNeededOnDisk; // @dynamic totalBytesNeededOnDisk;
@property(readonly, nonatomic) NSUUID *uniqueIdentifier; // @dynamic uniqueIdentifier;
- (unsigned long long)creatorIdentifier;	// IMP=0x00100000000803b9
@property(readonly, nonatomic) NSString *name; // @dynamic name;
@property(nonatomic) _Bool isTracked; // @synthesize isTracked=_isTracked;
- (void)_removeSavedState;	// IMP=0x0010000000080131
- (void)saveState;	// IMP=0x001000000007fde6
- (_Bool)awakeFromSerializationWithLookupBlock:(CDUnknownBlockType)arg1 error:(id *)arg2;	// IMP=0x001000000007fd79
- (void)cancelForReason:(id)arg1 client:(unsigned long long)arg2;	// IMP=0x001000000007f8b2
- (void)reset;	// IMP=0x001000000007f60e
- (unsigned long long)hash;	// IMP=0x001000000007f5ca
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000007f50b
- (void)encodeWithCoder:(id)arg1;	// IMP=0x001000000007f35f
- (id)initWithCoder:(id)arg1;	// IMP=0x001000000007f11f
@property(readonly, copy, nonatomic) IXDataPromiseSeed *clientSeed; // @dynamic clientSeed;
- (id)initWithSeed:(id)arg1 error:(id *)arg2;	// IMP=0x001000000007ef25
- (void)_internalInitWithUniqueIdentifier:(id)arg1;	// IMP=0x001000000007edda
- (oneway void)_remote_preflightWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000008210d
- (oneway void)_remote_getErrorInfo:(CDUnknownBlockType)arg1;	// IMP=0x0010000000081f25
- (oneway void)_remote_resetWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000081bba
- (oneway void)_remote_cancelForReason:(id)arg1 client:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000081a8c
- (oneway void)_remote_setIsComplete:(CDUnknownBlockType)arg1;	// IMP=0x0010000000081854
- (oneway void)_remote_getIsComplete:(CDUnknownBlockType)arg1;	// IMP=0x0010000000081707
- (oneway void)_remote_setPercentComplete:(double)arg1;	// IMP=0x0010000000081633
- (oneway void)_remote_getPercentComplete:(CDUnknownBlockType)arg1;	// IMP=0x00100000000814e6

@end
