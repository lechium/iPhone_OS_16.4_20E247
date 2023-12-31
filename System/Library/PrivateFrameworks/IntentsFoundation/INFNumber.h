//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "INFSentenceToken.h"

@class NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface INFNumber : INFSentenceToken
{
    NSString *_identifier;	// 8 = 0x8
    NSNumber *_value;	// 16 = 0x10
}

+ (id)numberWithIdentifier:(id)arg1;	// IMP=0x006000000000776a
- (void).cxx_destruct;	// IMP=0x0000000000007934
@property(copy, nonatomic) NSNumber *value; // @synthesize value=_value;
- (id)identifier;	// IMP=0x0000000000007901
- (id)dictionaryRepresentation;	// IMP=0x00000000000078f9
- (id)stringForContext:(id)arg1;	// IMP=0x0000000000007886
- (id)contributingSentenceContext;	// IMP=0x000000000000782c
- (id)initWithIdentifier:(id)arg1;	// IMP=0x00000000000077b3

@end

