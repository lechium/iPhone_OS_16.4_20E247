//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

@interface FRNewsReferralItemWidgetArticleListEncodableElement : NSObject
{
    NSArray *_JSONArray;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0020000000033a63
- (void).cxx_destruct;	// IMP=0x0020000000033a75
@property(readonly, copy, nonatomic) NSArray *JSONArray; // @synthesize JSONArray=_JSONArray;
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000033949
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00100000000338d0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000338c5
- (id)initWithJSONArray:(id)arg1;	// IMP=0x001000000003382d
- (id)init;	// IMP=0x00100000000336e8

@end

