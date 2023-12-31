//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXGadgetDataSourceManager.h>

@class NSArray, NSString, PUSessionInfo, PXExtendedTraitCollection;

__attribute__((visibility("hidden")))
@interface PUAlbumsGadgetDataSourceManager : PXGadgetDataSourceManager
{
    PXExtendedTraitCollection *_traitCollection;	// 8 = 0x8
    PUSessionInfo *_sessionInfo;	// 16 = 0x10
    NSArray *_providers;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000bd9f6
@property(readonly, nonatomic) NSArray *providers; // @synthesize providers=_providers;
@property(retain, nonatomic) PUSessionInfo *sessionInfo; // @synthesize sessionInfo=_sessionInfo;
@property(readonly, nonatomic) PXExtendedTraitCollection *traitCollection; // @synthesize traitCollection=_traitCollection;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;	// IMP=0x00000000000bd8e6
- (id)gadgetProviders;	// IMP=0x00000000000bd486
- (void)removeCachedProviders;	// IMP=0x00000000000bd43c
- (id)initWithTraitCollection:(id)arg1 sessionInfo:(id)arg2;	// IMP=0x00000000000bd357

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

