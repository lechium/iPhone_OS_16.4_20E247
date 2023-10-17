//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary;

__attribute__((visibility("hidden")))
@interface VUILibraryMediaCollectionViewModel : NSObject
{
    NSArray *_seasonViewModels;	// 8 = 0x8
    NSDictionary *_seasonBySeasonIdentifier;	// 16 = 0x10
    NSDictionary *_episodeShelfViewControllerBySeasonIdentifier;	// 24 = 0x18
    NSDictionary *_productLockupViewBySeasonIdentifier;	// 32 = 0x20
    NSDictionary *_episodesBySeasonIdentifer;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000002bd207
@property(retain, nonatomic) NSDictionary *episodesBySeasonIdentifer; // @synthesize episodesBySeasonIdentifer=_episodesBySeasonIdentifer;
@property(retain, nonatomic) NSDictionary *productLockupViewBySeasonIdentifier; // @synthesize productLockupViewBySeasonIdentifier=_productLockupViewBySeasonIdentifier;
@property(retain, nonatomic) NSDictionary *episodeShelfViewControllerBySeasonIdentifier; // @synthesize episodeShelfViewControllerBySeasonIdentifier=_episodeShelfViewControllerBySeasonIdentifier;
@property(retain, nonatomic) NSDictionary *seasonBySeasonIdentifier; // @synthesize seasonBySeasonIdentifier=_seasonBySeasonIdentifier;
@property(retain, nonatomic) NSArray *seasonViewModels; // @synthesize seasonViewModels=_seasonViewModels;
@property(readonly, nonatomic) _Bool hasContent;

@end
