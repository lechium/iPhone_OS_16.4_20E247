//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AMSProcessInfo, NSDate, NSDictionary, NSString, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface SKUIOctaneBag : NSObject
{
    NSDictionary *_dictionary;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 16 = 0x10
    long long _port;	// 24 = 0x18
    NSXPCConnection *_connection;	// 32 = 0x20
    _Bool expired;	// 40 = 0x28
    NSDate *expirationDate;	// 48 = 0x30
    NSString *profile;	// 56 = 0x38
    NSString *profileVersion;	// 64 = 0x40
}

+ (id)shared;	// IMP=0x0020000000025d44
- (void).cxx_destruct;	// IMP=0x0020000000026aca
@property(readonly, copy, nonatomic) NSString *profileVersion; // @synthesize profileVersion;
@property(readonly, copy, nonatomic) NSString *profile; // @synthesize profile;
@property(readonly, nonatomic, getter=isExpired) _Bool expired; // @synthesize expired;
@property(readonly, nonatomic) NSDate *expirationDate; // @synthesize expirationDate;
- (void)_fetchBag;	// IMP=0x00100000000266fb
- (id)_bagValueForKey:(id)arg1 ofType:(unsigned long long)arg2;	// IMP=0x001000000002630b
- (long long)_activePort;	// IMP=0x00100000000260a8
- (id)stringForKey:(id)arg1;	// IMP=0x0010000000026091
- (id)integerForKey:(id)arg1;	// IMP=0x001000000002607a
- (id)doubleForKey:(id)arg1;	// IMP=0x0010000000026063
- (id)dictionaryForKey:(id)arg1;	// IMP=0x001000000002604c
- (void)createSnapshotWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000025f05
- (id)boolForKey:(id)arg1;	// IMP=0x0010000000025eee
- (id)arrayForKey:(id)arg1;	// IMP=0x0010000000025eda
- (id)URLForKey:(id)arg1;	// IMP=0x0010000000025ec3
- (void)invalidate;	// IMP=0x0010000000025e4b
- (id)init;	// IMP=0x0010000000025dc9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) AMSProcessInfo *processInfo;
@property(readonly) Class superclass;

@end
