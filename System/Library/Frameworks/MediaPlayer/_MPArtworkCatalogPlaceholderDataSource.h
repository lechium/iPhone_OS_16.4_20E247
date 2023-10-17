//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSCache, NSString;

__attribute__((visibility("hidden")))
@interface _MPArtworkCatalogPlaceholderDataSource : NSObject
{
    NSCache *_fallbackCache;	// 8 = 0x8
}

+ (id)sharedDataSource;	// IMP=0x00100000000d11e6
- (void).cxx_destruct;	// IMP=0x00000000000d0edf
- (void)cancelLoadingRepresentationForArtworkCatalog:(id)arg1;	// IMP=0x00000000000d0ed9
- (id)visualIdenticalityIdentifierForCatalog:(id)arg1;	// IMP=0x00000000000d0e0c
- (void)loadRepresentationForArtworkCatalog:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000d0c29
- (id)existingRepresentationForArtworkCatalog:(id)arg1;	// IMP=0x00000000000d0b4c
- (_Bool)isRepresentation:(id)arg1 bestRepresentationForArtworkCatalog:(id)arg2;	// IMP=0x00000000000d0a9f
- (_Bool)areRepresentationsAvailableForCatalog:(id)arg1;	// IMP=0x00000000000d0a97

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
