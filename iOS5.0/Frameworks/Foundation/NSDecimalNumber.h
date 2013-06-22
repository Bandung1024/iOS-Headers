/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <Foundation/NSNumber.h>

@interface NSDecimalNumber : NSNumber
{
    unsigned int _exponent:8;
    unsigned int _length:4;
    unsigned int _isNegative:1;
    unsigned int _isCompact:1;
    unsigned int _reserved:1;
    unsigned int _hasExternalRefCount:1;
    unsigned int _refs:16;
    unsigned short _mantissa[0];
}

+ (id)defaultBehavior;
+ (void)setDefaultBehavior:(id)arg1;
+ (id)notANumber;
+ (id)one;
+ (id)zero;
+ (id)maximumDecimalNumber;
+ (id)minimumDecimalNumber;
+ (id)decimalNumberWithString:(id)arg1 locale:(id)arg2;
+ (id)decimalNumberWithString:(id)arg1;
+ (id)decimalNumberWithDecimal:(CDStruct_5fe7aead)arg1;
+ (id)decimalNumberWithMantissa:(unsigned long long)arg1 exponent:(short)arg2 isNegative:(BOOL)arg3;
+ (id)allocWithZone:(struct _NSZone *)arg1;
- (BOOL)boolValue;
- (float)floatValue;
- (unsigned long long)unsignedLongLongValue;
- (long long)longLongValue;
- (unsigned long)unsignedLongValue;
- (long)longValue;
- (unsigned int)unsignedIntValue;
- (int)intValue;
- (unsigned short)unsignedShortValue;
- (short)shortValue;
- (unsigned char)unsignedCharValue;
- (BOOL)charValue;
- (void)encodeWithCoder:(id)arg1;
- (Class)classForCoder;
- (id)decimalNumberByRoundingAccordingToBehavior:(id)arg1;
- (id)decimalNumberByMultiplyingByPowerOf10:(short)arg1 withBehavior:(id)arg2;
- (id)decimalNumberByMultiplyingByPowerOf10:(short)arg1;
- (id)decimalNumberByRaisingToPower:(unsigned int)arg1 withBehavior:(id)arg2;
- (id)decimalNumberByRaisingToPower:(unsigned int)arg1;
- (id)decimalNumberByDividingBy:(id)arg1 withBehavior:(id)arg2;
- (id)decimalNumberByDividingBy:(id)arg1;
- (id)decimalNumberByMultiplyingBy:(id)arg1 withBehavior:(id)arg2;
- (id)decimalNumberByMultiplyingBy:(id)arg1;
- (id)decimalNumberBySubtracting:(id)arg1 withBehavior:(id)arg2;
- (id)decimalNumberBySubtracting:(id)arg1;
- (id)decimalNumberBySubstracting:(id)arg1 withBehavior:(id)arg2;
- (id)decimalNumberBySubstracting:(id)arg1;
- (id)decimalNumberByAdding:(id)arg1 withBehavior:(id)arg2;
- (id)decimalNumberByAdding:(id)arg1;
- (void)getValue:(void *)arg1;
- (double)doubleValue;
- (const char *)objCType;
- (BOOL)isEqual:(id)arg1;
- (int)compare:(id)arg1;
- (CDStruct_5fe7aead)decimalValue;
- (id)descriptionWithLocale:(id)arg1;
- (id)description;
- (id)initWithCoder:(id)arg1;
- (id)initWithString:(id)arg1 locale:(id)arg2;
- (id)initWithString:(id)arg1;
- (id)initWithDecimal:(CDStruct_5fe7aead)arg1;
- (id)initWithMantissa:(unsigned long long)arg1 exponent:(short)arg2 isNegative:(BOOL)arg3;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)copy;

@end

