//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSCache, NSFileManager, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface TCCDAdhocSignatureCache : NSObject
{
    NSMutableDictionary *_keys;	// 8 = 0x8
    NSCache *_signatures;	// 16 = 0x10
    unsigned long long _capacity;	// 24 = 0x18
    NSString *_directoryPath;	// 32 = 0x20
    NSString *_keysPath;	// 40 = 0x28
    NSFileManager *_fileManager;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_queue;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x002000000003ef45
- (void)addSignature:(id)arg1 forStaticCode:(struct __SecCode *)arg2;	// IMP=0x001000000003eb37
- (id)getSignatureForStaticCode:(struct __SecCode *)arg1;	// IMP=0x001000000003e666
- (void)maintainSize;	// IMP=0x001000000003de9a
- (id)cacheKeyForStaticCode:(struct __SecCode *)arg1;	// IMP=0x001000000003d842
- (void)saveSignature:(id)arg1 withUUID:(id)arg2;	// IMP=0x001000000003d72e
- (id)loadSignatureWithUUID:(id)arg1;	// IMP=0x001000000003d62a
- (void)saveKeysToDirectory;	// IMP=0x001000000003d4cc
- (void)loadKeysFromDirectory;	// IMP=0x001000000003d2aa
- (void)createStateHandler;	// IMP=0x001000000003ce80
- (id)stateDump;	// IMP=0x001000000003cb88
- (id)init;	// IMP=0x001000000003cb7a
- (id)initWithDirectoryPath:(id)arg1 capacity:(unsigned long long)arg2;	// IMP=0x001000000003c923
- (id)logHandle;	// IMP=0x001000000003c8f3

@end

