//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface PMTop
{
}

+ (_Bool)supportsProgressiveMapping;	// IMP=0x001000000046f45d
- (_Bool)isCancelled;	// IMP=0x000000000046f455
- (Class)stateClass;	// IMP=0x000000000046f444
- (Class)mapperClassForIndexing:(_Bool)arg1;	// IMP=0x000000000046f413
- (void)readFile:(id)arg1 orData:(id)arg2 dataFileName:(id)arg3 format:(unsigned long long)arg4 archiver:(id)arg5 forIndexing:(_Bool)arg6;	// IMP=0x000000000046f32a
- (Class)readerClassForXMLDocuments;	// IMP=0x000000000046f319
- (Class)readerClassForBinaryDocuments;	// IMP=0x000000000046f308
- (void)initializeClasses;	// IMP=0x000000000046f2bf

@end
