//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString, NSURL;

__attribute__((visibility("hidden")))
@interface ATAParsedOpenURL : NSObject
{
    NSURL *_URL;	// 8 = 0x8
    NSDictionary *_options;	// 16 = 0x10
    unsigned long long _type;	// 24 = 0x18
    NSString *_tabBarItemIdentifier;	// 32 = 0x20
}

+ (id)_logStringForType:(unsigned long long)arg1;	// IMP=0x006000000010558f
+ (id)parsedOpenURLWithURL:(id)arg1 andOptions:(id)arg2;	// IMP=0x0060000000104cc4
- (void).cxx_destruct;	// IMP=0x0000000000105606
@property(retain, nonatomic) NSString *tabBarItemIdentifier; // @synthesize tabBarItemIdentifier=_tabBarItemIdentifier;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(copy, nonatomic) NSDictionary *options; // @synthesize options=_options;
@property(copy, nonatomic) NSURL *URL; // @synthesize URL=_URL;
- (id)description;	// IMP=0x00000000001052dd
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000104fc4
- (unsigned long long)hash;	// IMP=0x0000000000104ef1
- (id)_initWithURL:(id)arg1 options:(id)arg2 type:(unsigned long long)arg3;	// IMP=0x0000000000104e32
- (id)init;	// IMP=0x0000000000104dc3

@end

