//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "GEOSimpleTileRequester.h"

__attribute__((visibility("hidden")))
@interface GEOVisualLocalizationMetadataTileRequester : GEOSimpleTileRequester
{
}

+ (unsigned char)tileProviderIdentifier;	// IMP=0x00100000011a4018
- (CDStruct_d1a7ebee)kindForTileKey:(const struct _GEOTileKey *)arg1;	// IMP=0x00000000011a456f
- (id)urlForTileKey:(const struct _GEOTileKey *)arg1;	// IMP=0x00000000011a40b2
- (_Bool)downloadsDataToDisk;	// IMP=0x00000000011a40aa
- (id)activeTileSetForKey:(const struct _GEOTileKey *)arg1;	// IMP=0x00000000011a4023

@end
