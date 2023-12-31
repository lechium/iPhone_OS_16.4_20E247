//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface STPropertyStorage : NSObject
{
    struct _SsrwPropertyStorage *m_pPropertyStorage;	// 8 = 0x8
}

- (void)setBlobDocumentPropertyWithName:(id)arg1 to:(id)arg2;	// IMP=0x00000000003701be
- (void)setStringDocumentPropertyWithId:(int)arg1 to:(id)arg2;	// IMP=0x0000000000370140
- (void)setShortDocumentPropertyWithId:(int)arg1 to:(short)arg2;	// IMP=0x00000000003700d9
- (void)setLongDocumentPropertyWithId:(int)arg1 to:(int)arg2;	// IMP=0x0000000000370072
- (void)setDocumentPropertyWithId:(int)arg1 to:(id)arg2;	// IMP=0x0000000000370020
- (id)getDocumentPropertyWithName:(id)arg1 propType:(int *)arg2;	// IMP=0x000000000036ff9c
- (id)getStringDocumentPropertyWithId:(int)arg1;	// IMP=0x000000000036fcfe
- (short)getShortDocumentPropertyWithId:(int)arg1;	// IMP=0x000000000036fc8b
- (int)getLongDocumentPropertyWithId:(int)arg1;	// IMP=0x000000000036fc1e
- (id)getDocumentPropertyWithId:(int)arg1 propType:(int *)arg2;	// IMP=0x000000000036fb83
- (void)close;	// IMP=0x000000000036fb75
- (id)initWithPropertyStorage:(struct _SsrwPropertyStorage *)arg1;	// IMP=0x000000000036fb1c

@end

