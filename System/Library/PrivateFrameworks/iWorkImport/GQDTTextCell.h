//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class GQDWPLayoutStorage;

@interface GQDTTextCell
{
    struct __CFString *mStringValue;	// 24 = 0x18
    GQDWPLayoutStorage *mLayoutStorage;	// 32 = 0x20
}

- (id)layoutStorage;	// IMP=0x000000000001d7ac
- (struct __CFString *)stringValue;	// IMP=0x000000000001d79b
- (void)dealloc;	// IMP=0x000000000001d744
- (int)readContentForTCell:(struct _xmlTextReader *)arg1;	// IMP=0x000000000001d7f9
- (int)readContentForTextCell:(struct _xmlTextReader *)arg1;	// IMP=0x000000000001d7bd

@end
