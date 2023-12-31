//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface OCBReader
{
    struct OcBinaryReader *mBinaryReader;	// 56 = 0x38
    struct __sFILE *mFile;	// 64 = 0x40
}

@property(nonatomic) struct __sFILE *file; // @synthesize file=mFile;
@property(nonatomic) struct OcBinaryReader *binaryReader; // @synthesize binaryReader=mBinaryReader;
- (id)read;	// IMP=0x000000000034e6f9
- (_Bool)start;	// IMP=0x000000000034e6f1
- (void)restartReaderToUseDecryptedDocument;	// IMP=0x000000000034e624
- (_Bool)retainDecryptorWithErrorCode:(int *)arg1;	// IMP=0x0000000000009235
- (id)allocDecryptorWithCryptoKey:(struct OCCCryptoKey *)arg1 baseOutputFilename:(id)arg2;	// IMP=0x000000000034e544
- (struct OCCBinaryStreamer *)allocBinaryStreamerWithCryptoKey:(struct OCCCryptoKey *)arg1 baseOutputFilenameInUTF8:(const char *)arg2;	// IMP=0x000000000034e53c
- (_Bool)isBinaryReader;	// IMP=0x000000000034e534
@property(readonly, nonatomic) struct OCCEncryptionInfoReader *encryptionInfoReader;
- (void)closeFile;	// IMP=0x00000000000b1020
- (void)dealloc;	// IMP=0x00000000000b03ec
- (id)initWithCancelDelegate:(id)arg1;	// IMP=0x000000000034e470

@end

