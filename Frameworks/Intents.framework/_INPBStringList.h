/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBStringList : PBCodable <NSCopying> {
    _INPBCondition * _conditionType;
    NSMutableArray * _dataStrings;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) _INPBCondition *conditionType;
@property (nonatomic, retain) NSMutableArray *dataStrings;
@property (nonatomic, readonly) bool hasConditionType;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (Class)dataStringType;
+ (id)options;

- (void).cxx_destruct;
- (void)addDataString:(id)arg1;
- (void)clearDataStrings;
- (id)conditionType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dataStringAtIndex:(unsigned long long)arg1;
- (id)dataStrings;
- (unsigned long long)dataStringsCount;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasConditionType;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setConditionType:(id)arg1;
- (void)setDataStrings:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
