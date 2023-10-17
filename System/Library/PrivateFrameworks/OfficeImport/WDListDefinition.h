//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString, WDDocument;

__attribute__((visibility("hidden")))
@interface WDListDefinition : NSObject
{
    WDDocument *mDocument;	// 8 = 0x8
    int mListDefinitionId;	// 16 = 0x10
    NSString *mStyleId;	// 24 = 0x18
    NSString *mStyleRefId;	// 32 = 0x20
    int mType;	// 40 = 0x28
    NSMutableArray *mLevels;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000003f35c5
@property(copy, nonatomic) NSString *styleRefId; // @synthesize styleRefId=mStyleRefId;
@property(readonly, nonatomic) NSString *styleId; // @synthesize styleId=mStyleId;
@property(readonly, nonatomic) int listDefinitionId; // @synthesize listDefinitionId=mListDefinitionId;
- (id)description;	// IMP=0x00000000003f355b
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000003f3550
- (id)initWithDocument:(id)arg1 listDefinitionId:(int)arg2 styleId:(id)arg3;	// IMP=0x00000000003f347a
- (void)removeLastLevel;	// IMP=0x00000000003f3464
- (id)addLevel;	// IMP=0x00000000000d0639
- (id)levelAt:(int)arg1;	// IMP=0x00000000000f2573
- (int)levelCount;	// IMP=0x00000000000f255d
- (void)setType:(int)arg1;	// IMP=0x00000000000d0d31
- (int)type;	// IMP=0x00000000003f345b

@end
