//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface _COMessagingServiceMeter : NSObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    int _registration;	// 12 = 0xc
    NSDictionary *_limits;	// 16 = 0x10
    NSMutableDictionary *_peaks;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000005ec2c
@property(readonly, nonatomic) int registration; // @synthesize registration=_registration;
@property(readonly, nonatomic) NSMutableDictionary *peaks; // @synthesize peaks=_peaks;
@property(readonly, copy, nonatomic) NSDictionary *limits; // @synthesize limits=_limits;
- (unsigned long long)receiveLimitForIdentifier:(id)arg1;	// IMP=0x000000000005eb67
- (unsigned long long)sendLimitForIdentifier:(id)arg1;	// IMP=0x000000000005eabf
- (_Bool)isEvaluatingIdentifier:(id)arg1;	// IMP=0x000000000005e945
- (_Bool)clientIdentifier:(id)arg1 canReceiveLength:(unsigned long long)arg2;	// IMP=0x000000000005e7b2
- (_Bool)clientIdentifier:(id)arg1 canSendLength:(unsigned long long)arg2;	// IMP=0x000000000005e61f
- (void)_withLock:(CDUnknownBlockType)arg1;	// IMP=0x000000000005e5e2
- (void)dealloc;	// IMP=0x000000000005e58c
- (id)init;	// IMP=0x000000000005dae9

@end

