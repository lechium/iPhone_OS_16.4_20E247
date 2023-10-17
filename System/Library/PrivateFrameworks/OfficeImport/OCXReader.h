//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class OCPZipPackage;

__attribute__((visibility("hidden")))
@interface OCXReader
{
    OCPZipPackage *mZipPackage;	// 56 = 0x38
    const void *mDataBytes;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x000000000037332c
@property(retain, nonatomic) OCPZipPackage *zipPackage; // @synthesize zipPackage=mZipPackage;
- (id)read;	// IMP=0x0000000000373324
- (_Bool)start;	// IMP=0x000000000018e6e6
- (void)restartReaderToUseDecryptedDocument;	// IMP=0x00000000003732b6
- (_Bool)retainDecryptorWithErrorCode:(int *)arg1;	// IMP=0x000000000018e6ee
- (_Bool)isBinaryReader;	// IMP=0x000000000018e968
- (_Bool)verifyFileFormat;	// IMP=0x000000000037324e

@end
