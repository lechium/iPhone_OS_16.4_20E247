//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MPMediaLibraryEntityTranslationContext, MPMediaLibraryEntityTranslator, MPModelLibraryDownloadQueueRequest, NSString;

__attribute__((visibility("hidden")))
@interface _MPModelLibraryDownloadQueueDataSource : NSObject
{
    MPModelLibraryDownloadQueueRequest *_request;	// 8 = 0x8
    MPMediaLibraryEntityTranslator *_entityTranslator;	// 16 = 0x10
    MPMediaLibraryEntityTranslationContext *_entityTranslationContext;	// 24 = 0x18
    shared_ptr_274c5e8b _entityQueryResult;	// 32 = 0x20
}

- (id).cxx_construct;	// IMP=0x000000000025a32b
- (void).cxx_destruct;	// IMP=0x000000000025a2ef
- (id)identifiersForItemAtIndexPath:(id)arg1;	// IMP=0x0000000000259f96
- (id)itemAtIndexPath:(id)arg1;	// IMP=0x0000000000259ca6
- (unsigned long long)numberOfItemsInSection:(unsigned long long)arg1;	// IMP=0x0000000000259ae6
- (id)sectionAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000259ade
- (unsigned long long)numberOfSections;	// IMP=0x0000000000259ad3
- (id)initWithRequest:(id)arg1;	// IMP=0x0000000000258de9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
