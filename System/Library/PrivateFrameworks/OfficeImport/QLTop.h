//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CMArchiveManager, CMMapper, CMState, NSString, OCDDocument;

__attribute__((visibility("hidden")))
@interface QLTop : NSObject
{
    CMMapper *_mapper;	// 8 = 0x8
    CMState *_state;	// 16 = 0x10
    CMArchiveManager *_archiver;	// 24 = 0x18
    OCDDocument *_document;	// 32 = 0x20
    NSString *_fileName;	// 40 = 0x28
    unsigned long long _format;	// 48 = 0x30
    _Bool _forIndexing;	// 56 = 0x38
}

+ (_Bool)supportsProgressiveMapping;	// IMP=0x0010000000471539
+ (void)fillHTMLArchiveForOfficeData:(id)arg1 fileName:(id)arg2 dataFormat:(unsigned long long)arg3 archiver:(id)arg4;	// IMP=0x0010000000470e2e
+ (id)searchableAttributesForBinaryOfficeFileAtURL:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000470a60
+ (id)metadataForBinaryOfficeFileAtURL:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000470692
+ (void)fillHTMLArchiveForOfficeFile:(id)arg1 dataFormat:(unsigned long long)arg2 archiver:(id)arg3;	// IMP=0x0010000000470521
+ (void)fillHTMLArchiveForOfficeFile:(id)arg1 orData:(id)arg2 dataFileName:(id)arg3 dataFormat:(unsigned long long)arg4 archiver:(id)arg5;	// IMP=0x00100000004703a6
- (void).cxx_destruct;	// IMP=0x000000000047157d
@property _Bool forIndexing; // @synthesize forIndexing=_forIndexing;
@property(readonly) CMState *state; // @synthesize state=_state;
@property(readonly) CMMapper *mapper; // @synthesize mapper=_mapper;
- (void)readerDidEndDocument:(id)arg1;	// IMP=0x00000000004714eb
- (void)readerDidReadElement:(id)arg1 atIndex:(unsigned long long)arg2 inDocument:(id)arg3 isLastElement:(_Bool)arg4;	// IMP=0x00000000004714ce
- (void)readerDidStartDocument:(id)arg1 withElementCount:(long long)arg2;	// IMP=0x000000000047144f
- (id)documentWithFile:(id)arg1 orData:(id)arg2 isXML:(_Bool)arg3 archiver:(id)arg4;	// IMP=0x0000000000470f85
- (void)readFile:(id)arg1 orData:(id)arg2 dataFileName:(id)arg3 format:(unsigned long long)arg4 archiver:(id)arg5 forIndexing:(_Bool)arg6;	// IMP=0x0000000000470206
- (void)setupMappingStateWithDocument:(id)arg1;	// IMP=0x00000000004700b8
- (Class)readerClassForBinaryDocuments;	// IMP=0x000000000046ffe4
- (Class)readerClassForXMLDocuments;	// IMP=0x000000000046ff10
- (Class)mapperClassForIndexing:(_Bool)arg1;	// IMP=0x000000000046fe3c
- (Class)stateClass;	// IMP=0x000000000046fd68
- (void)initializeClasses;	// IMP=0x000000000046fd4b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

