//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSRegularExpression, NSString;

__attribute__((visibility("hidden")))
@interface MCLURLRequestRewriteRule : NSObject
{
    CDUnknownBlockType _block;	// 8 = 0x8
    float _priority;	// 16 = 0x10
    NSString *_name;	// 24 = 0x18
    NSRegularExpression *_matchPattern;	// 32 = 0x20
}

+ (id)urlRequestRewriteRuleWithMatchPattern:(id)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x006000000001c240
- (void).cxx_destruct;	// IMP=0x000000000001c490
@property(readonly, nonatomic) NSRegularExpression *matchPattern; // @synthesize matchPattern=_matchPattern;
@property(nonatomic) float priority; // @synthesize priority=_priority;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void)rewriteURLRequest:(id)arg1;	// IMP=0x000000000001c370
- (id)initWithMatchExpression:(id)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x000000000001c140

@end

