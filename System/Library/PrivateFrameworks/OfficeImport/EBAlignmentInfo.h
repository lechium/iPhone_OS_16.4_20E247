//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface EBAlignmentInfo : NSObject
{
}

+ (void)writeAlignmentInfo:(id)arg1 toXlGraphicsInfo:(void *)arg2;	// IMP=0x00800000003965cd
+ (struct XlDXfAlign *)xlDXfAlignFromEDAlignmentInfo:(id)arg1;	// IMP=0x008000000039647d
+ (void)writeAlignmentInfo:(id)arg1 toXlXf:(struct XlXf *)arg2;	// IMP=0x008000000039636f
+ (id)edAlignmentInfoFromXlGraphicsInfo:(void *)arg1;	// IMP=0x008000000016761c
+ (id)edAlignmentInfoFromXlDXfAlign:(struct XlDXfAlign *)arg1;	// IMP=0x0080000000396287
+ (id)edAlignmentInfoFromXlXf:(struct XlXf *)arg1;	// IMP=0x00800000001189d8
+ (int)convertEDVerticalAlignmentEnumToXl:(int)arg1;	// IMP=0x0080000000396677
+ (int)convertEDHorizontalAlignmentEnumToXl:(int)arg1;	// IMP=0x0080000000396666
+ (int)convertXlVertAlignEnumToED:(int)arg1;	// IMP=0x0080000000118b58
+ (int)convertXlHorizAlignEnumToED:(int)arg1;	// IMP=0x0080000000118b34

@end

