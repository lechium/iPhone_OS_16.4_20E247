//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface OADFontCollection
{
    NSMutableDictionary *_scriptToFontMap;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000310f73
- (id)description;	// IMP=0x0000000000310f35
- (_Bool)isEmpty;	// IMP=0x0000000000310ede
- (_Bool)isEqualToFontCollection:(id)arg1;	// IMP=0x0000000000310e26
- (id)scripts;	// IMP=0x0000000000310e09
- (void)setFont:(id)arg1 forScript:(id)arg2;	// IMP=0x0000000000310deb
- (id)fontForScript:(id)arg1;	// IMP=0x0000000000310dbe
- (id)init;	// IMP=0x0000000000310d43

@end

