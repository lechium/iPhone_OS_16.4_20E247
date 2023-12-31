//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CHManager, PSConfirmationSpecifier, PSSpecifier;
@protocol PSUIResetStatisticsGroupDelegate;

__attribute__((visibility("hidden")))
@interface PSUIResetStatisticsGroup : NSObject
{
    unsigned long long _policy;	// 8 = 0x8
    id <PSUIResetStatisticsGroupDelegate> _delegate;	// 16 = 0x10
    PSSpecifier *_groupSpecifier;	// 24 = 0x18
    PSConfirmationSpecifier *_resetButtonSpecifier;	// 32 = 0x20
    CHManager *_callHistoryManager;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000003171b
@property(retain, nonatomic) CHManager *callHistoryManager; // @synthesize callHistoryManager=_callHistoryManager;
@property(retain, nonatomic) PSConfirmationSpecifier *resetButtonSpecifier; // @synthesize resetButtonSpecifier=_resetButtonSpecifier;
@property(retain, nonatomic) PSSpecifier *groupSpecifier; // @synthesize groupSpecifier=_groupSpecifier;
@property(nonatomic) __weak id <PSUIResetStatisticsGroupDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long policy; // @synthesize policy=_policy;
- (id)getLogger;	// IMP=0x000000000003166f
- (void)clearStats:(id)arg1;	// IMP=0x0000000000031479
- (void)_updateLastResetText;	// IMP=0x0000000000031159
- (id)_lastUpdateDate;	// IMP=0x0000000000031106
- (id)specifiers;	// IMP=0x000000000003109a
- (id)initWithPolicy:(unsigned long long)arg1;	// IMP=0x0000000000030c8f

@end

