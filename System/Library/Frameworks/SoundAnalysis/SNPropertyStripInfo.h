//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface SNPropertyStripInfo
{
    NSString *_path;	// 8 = 0x8
    NSString *_resourcePath;	// 16 = 0x10
    NSDictionary *_value;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000025f8b
- (unsigned long long)hash;	// IMP=0x0000000000025f12
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000025c92
- (id)initWithDictionary:(id)arg1 resourcePath:(id)arg2;	// IMP=0x0000000000025b2b

@end
