//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, OITSUTemporaryDirectory;

__attribute__((visibility("hidden")))
@interface OCCDecryptor : NSObject
{
    OITSUTemporaryDirectory *mTempDirectory;	// 8 = 0x8
    NSString *mOutputFilename;	// 16 = 0x10
    NSString *mBaseStringForOutputFilename;	// 24 = 0x18
    struct OCCStreamer *mStreamer;	// 32 = 0x20
}

+ (id)allocTempFileWithBase:(id)arg1 outFilename:(id *)arg2 tempDirectory:(id *)arg3;	// IMP=0x0060000000376d3c
+ (id)agilePasswordKeyEncryptorNamespace;	// IMP=0x0060000000377175
+ (id)agileDescriptorNamespace;	// IMP=0x0060000000377145
- (void).cxx_destruct;	// IMP=0x0000000000377112
@property(readonly, nonatomic) NSString *outputFilename; // @synthesize outputFilename=mOutputFilename;
- (_Bool)decryptIntoOutputFile;	// IMP=0x0000000000376ce6
- (_Bool)verifyPassphrase:(id)arg1;	// IMP=0x0000000000376c57
- (_Bool)decrypt;	// IMP=0x0000000000376b0b
- (void)deleteOutputFile;	// IMP=0x0000000000376abe
- (_Bool)isReadProtectedUsingDefaultPassphrase;	// IMP=0x0000000000376a3c
- (id)initWithStreamer:(struct OCCStreamer *)arg1;	// IMP=0x00000000003769ab
- (void)dealloc;	// IMP=0x0000000000376910

@end

