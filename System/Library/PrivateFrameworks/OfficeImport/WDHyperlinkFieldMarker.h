//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

__attribute__((visibility("hidden")))
@interface WDHyperlinkFieldMarker
{
    NSString *mLink;	// 48 = 0x30
    NSString *mFragment;	// 56 = 0x38
    unsigned int mInternalLink:1;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x000000000041a420
@property(retain, nonatomic) NSString *fragment; // @synthesize fragment=mFragment;
@property(retain, nonatomic) NSString *link; // @synthesize link=mLink;
@property(nonatomic) _Bool internalLink; // @synthesize internalLink=mInternalLink;
- (id)description;	// IMP=0x000000000041a36e
- (int)runType;	// IMP=0x000000000041a363

@end
