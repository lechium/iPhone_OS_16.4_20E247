//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSSet;

__attribute__((visibility("hidden")))
@interface EDImportantMLModelOutput : NSObject
{
    long long _important;	// 8 = 0x8
    NSDictionary *_importantProbability;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000001e4d72
@property(retain, nonatomic) NSDictionary *importantProbability; // @synthesize importantProbability=_importantProbability;
@property(nonatomic) long long important; // @synthesize important=_important;
- (id)featureValueForName:(id)arg1;	// IMP=0x00000000001e4c32
@property(readonly, nonatomic) NSSet *featureNames;
- (id)initWithImportant:(long long)arg1 importantProbability:(id)arg2;	// IMP=0x00000000001e4b88

@end

