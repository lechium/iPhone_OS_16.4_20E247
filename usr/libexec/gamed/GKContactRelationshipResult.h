//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class GKPlayerInternal, NSString;

@interface GKContactRelationshipResult
{
    int _relationship;	// 8 = 0x8
    NSString *_handle;	// 16 = 0x10
    GKPlayerInternal *_relatedPlayer;	// 24 = 0x18
}

+ (id)secureCodedPropertyKeys;	// IMP=0x0040000000123cbb
- (void).cxx_destruct;	// IMP=0x0020000000123e1c
@property(nonatomic) int relationship; // @synthesize relationship=_relationship;
@property(retain, nonatomic) GKPlayerInternal *relatedPlayer; // @synthesize relatedPlayer=_relatedPlayer;
@property(copy, nonatomic) NSString *handle; // @synthesize handle=_handle;

@end
