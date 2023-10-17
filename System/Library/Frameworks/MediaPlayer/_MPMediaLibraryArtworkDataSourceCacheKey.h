//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _MPMediaLibraryArtworkDataSourceCacheKey : NSObject
{
    id _catalogIdentifier;	// 8 = 0x8
    struct CGSize _representationSize;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000002b9340
@property(nonatomic) struct CGSize representationSize; // @synthesize representationSize=_representationSize;
@property(copy, nonatomic) id catalogIdentifier; // @synthesize catalogIdentifier=_catalogIdentifier;
- (unsigned long long)hash;	// IMP=0x00000000002b9251
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002b912f
- (id)initWithArtworkCatalog:(id)arg1 representativeSize:(struct CGSize)arg2;	// IMP=0x00000000002b9096

@end
