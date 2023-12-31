//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, WDList, WDListDefinition;

__attribute__((visibility("hidden")))
@interface CMOutlineState : NSObject
{
    NSMutableArray *_counters;	// 8 = 0x8
    WDListDefinition *_listDefinition;	// 16 = 0x10
    WDList *_currentList;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000004626d0
@property(readonly) WDListDefinition *listDefinition; // @synthesize listDefinition=_listDefinition;
@property(retain) WDList *currentList; // @synthesize currentList=_currentList;
- (void)increaseCounterAtLevel:(unsigned char)arg1;	// IMP=0x00000000000f2911
- (id)levelDescriptionAtIndex:(unsigned char)arg1;	// IMP=0x00000000004625f0
- (unsigned long long)counterAtLevel:(unsigned char)arg1;	// IMP=0x00000000000faeb3
- (void)setCounterTo:(unsigned long long)arg1 atLevel:(unsigned char)arg2;	// IMP=0x00000000000f2655
- (void)reset;	// IMP=0x000000000003914f
- (unsigned long long)levelCount;	// IMP=0x00000000004625cb
- (id)initWithListDefinition:(id)arg1;	// IMP=0x000000000046250b
- (id)init;	// IMP=0x0000000000039111

@end

