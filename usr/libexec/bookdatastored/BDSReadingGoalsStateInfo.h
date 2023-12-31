//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSNumber;

@interface BDSReadingGoalsStateInfo : NSObject
{
    NSNumber *_booksFinishedGoal;	// 8 = 0x8
    NSNumber *_streakDayGoal;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x002000000003ba9d
- (void).cxx_destruct;	// IMP=0x002000000003bda9
@property(retain, nonatomic) NSNumber *streakDayGoal; // @synthesize streakDayGoal=_streakDayGoal;
@property(retain, nonatomic) NSNumber *booksFinishedGoal; // @synthesize booksFinishedGoal=_booksFinishedGoal;
- (id)description;	// IMP=0x001000000003bcbd
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000003bc1c
- (void)encodeWithCoder:(id)arg1;	// IMP=0x001000000003bb6e
- (id)initWithCoder:(id)arg1;	// IMP=0x001000000003baa5
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000003b8ab
- (id)initWithBooksFinishedGoal:(id)arg1 streakDayGoal:(id)arg2;	// IMP=0x001000000003b812

@end

