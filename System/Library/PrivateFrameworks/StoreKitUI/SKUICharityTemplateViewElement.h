//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SKUIViewElement.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface SKUICharityTemplateViewElement : SKUIViewElement
{
    NSString *_campaignIdentifier;	// 8 = 0x8
    NSString *_charityMetadataURLString;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000035aad0
@property(readonly, nonatomic) NSString *charityMetadataURLString; // @synthesize charityMetadataURLString=_charityMetadataURLString;
@property(readonly, nonatomic) NSString *campaignIdentifier; // @synthesize campaignIdentifier=_campaignIdentifier;
- (id)applyUpdatesWithElement:(id)arg1;	// IMP=0x000000000035a9cd
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;	// IMP=0x000000000035a8f4

@end

