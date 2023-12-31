//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, OISFUCryptor;
@protocol SFUOutputStream;

__attribute__((visibility("hidden")))
@interface OISFUCryptoOutputStream : NSObject
{
    id <SFUOutputStream> mBaseStream;	// 8 = 0x8
    OISFUCryptor *mCryptor;	// 16 = 0x10
    _Bool mIsClosed;	// 24 = 0x18
    _Bool mComputeCrc32;	// 25 = 0x19
    unsigned int mCrc32;	// 28 = 0x1c
}

+ (unsigned long long)encodedLengthForDataLength:(unsigned long long)arg1 key:(id)arg2;	// IMP=0x001000000028aefd
- (id)closeLocalStream;	// IMP=0x000000000028b50c
- (void)close;	// IMP=0x000000000028b4dd
- (unsigned int)crc32;	// IMP=0x000000000028b434
- (id)inputStream;	// IMP=0x000000000028b39c
- (_Bool)canCreateInputStream;	// IMP=0x000000000028b394
- (long long)offset;	// IMP=0x000000000028b37e
- (void)seekToOffset:(long long)arg1 whence:(int)arg2;	// IMP=0x000000000028b2e7
- (_Bool)canSeek;	// IMP=0x000000000028b2df
- (void)writeBuffer:(const char *)arg1 size:(unsigned long long)arg2;	// IMP=0x000000000028b1f9
- (void)dealloc;	// IMP=0x000000000028b199
- (id)initForEncryptionWithOutputStream:(id)arg1 key:(id)arg2 computeCrc32:(_Bool)arg3;	// IMP=0x000000000028af7f
- (id)initForEncryptionWithOutputStream:(id)arg1 key:(id)arg2;	// IMP=0x000000000028af6a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

