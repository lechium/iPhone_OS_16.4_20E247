//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface SFAccountListSectionIdentifier : NSObject
{
    unsigned long long _type;	// 8 = 0x8
    NSString *_headerText;	// 16 = 0x10
    NSString *_footerText;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000006faf
@property(copy, nonatomic) NSString *footerText; // @synthesize footerText=_footerText;
@property(copy, nonatomic) NSString *headerText; // @synthesize headerText=_headerText;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
- (unsigned long long)hash;	// IMP=0x0000000000006f1a
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000006e49
- (id)initWithType:(unsigned long long)arg1 headerText:(id)arg2 footerText:(id)arg3;	// IMP=0x0000000000006d7a
- (id)initWithType:(unsigned long long)arg1;	// IMP=0x0000000000006d63

@end
