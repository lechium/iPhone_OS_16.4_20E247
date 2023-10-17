//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData;

__attribute__((visibility("hidden")))
@interface OISFUMemoryDataRepresentation
{
    NSData *mData;	// 32 = 0x20
}

- (unsigned long long)readIntoData:(id)arg1;	// IMP=0x0000000000291839
- (_Bool)hasSameLocationAs:(id)arg1;	// IMP=0x00000000002917d7
- (id)bufferedInputStreamWithBufferSize:(unsigned long long)arg1;	// IMP=0x00000000002917c5
- (id)bufferedInputStream;	// IMP=0x0000000000291787
- (id)inputStream;	// IMP=0x0000000000291775
- (long long)dataLength;	// IMP=0x0000000000291758
- (_Bool)isReadable;	// IMP=0x0000000000291750
- (id)data;	// IMP=0x000000000029173f
- (void)dealloc;	// IMP=0x00000000002916fd
- (id)initWithDataRepresentation:(id)arg1;	// IMP=0x0000000000291533
- (id)initWithDataNoCopy:(id)arg1;	// IMP=0x00000000002914dc
- (id)initWithData:(id)arg1;	// IMP=0x000000000029147e

@end
