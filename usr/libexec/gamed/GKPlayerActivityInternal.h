//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSString;

@interface GKPlayerActivityInternal
{
    NSArray *_sections;	// 8 = 0x8
    NSString *_continuationToken;	// 16 = 0x10
}

+ (id)secureCodedPropertyKeys;	// IMP=0x00400000001424b3
- (void).cxx_destruct;	// IMP=0x0020000000142632
@property(retain, nonatomic) NSString *continuationToken; // @synthesize continuationToken=_continuationToken;
@property(retain, nonatomic) NSArray *sections; // @synthesize sections=_sections;
- (id)description;	// IMP=0x0010000000142420
- (id)initWithServerResponse:(id)arg1;	// IMP=0x001000000014219f

@end

