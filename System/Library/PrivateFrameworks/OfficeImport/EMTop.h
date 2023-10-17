//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class EMWorkbookMapper;

__attribute__((visibility("hidden")))
@interface EMTop
{
}

+ (_Bool)supportsProgressiveMapping;	// IMP=0x001000000046c21e
- (void)readerDidStartDocument:(id)arg1 withElementCount:(long long)arg2;	// IMP=0x000000000046c226
- (void)readFile:(id)arg1 orData:(id)arg2 dataFileName:(id)arg3 format:(unsigned long long)arg4 archiver:(id)arg5 forIndexing:(_Bool)arg6;	// IMP=0x000000000046c135
- (void)initializeClasses;	// IMP=0x000000000046c0bc
- (Class)mapperClassForIndexing:(_Bool)arg1;	// IMP=0x000000000046c08b
- (Class)stateClass;	// IMP=0x000000000046c07a
- (Class)readerClassForXMLDocuments;	// IMP=0x000000000046c069
- (Class)readerClassForBinaryDocuments;	// IMP=0x000000000046c058

// Remaining properties
@property(readonly) EMWorkbookMapper *mapper; // @dynamic mapper;

@end
