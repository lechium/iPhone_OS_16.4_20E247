//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CKRecord, NSError;
@protocol OS_dispatch_group;

@interface CKRecordDecryptInfo : NSObject
{
    CKRecord *_record;	// 8 = 0x8
    NSError *_error;	// 16 = 0x10
    NSObject<OS_dispatch_group> *_decryptGroup;	// 24 = 0x18
    CDUnknownBlockType _callback;	// 32 = 0x20
    unsigned long long _numUnwrapAttempts;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000002e976c
@property unsigned long long numUnwrapAttempts; // @synthesize numUnwrapAttempts=_numUnwrapAttempts;
@property(copy, nonatomic) CDUnknownBlockType callback; // @synthesize callback=_callback;
@property(retain, nonatomic) NSObject<OS_dispatch_group> *decryptGroup; // @synthesize decryptGroup=_decryptGroup;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, nonatomic) CKRecord *record; // @synthesize record=_record;
- (void)_setupDecryptCallbackForQueue:(id)arg1;	// IMP=0x00000000002e940c
- (id)initWithRecord:(id)arg1 callbackQueue:(id)arg2;	// IMP=0x00000000002e9298
- (id)init;	// IMP=0x00000000002e921c

@end

