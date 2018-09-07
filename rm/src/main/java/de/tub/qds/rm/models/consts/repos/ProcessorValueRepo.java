package de.tub.qds.rm.models.consts.repos;

import org.springframework.data.jpa.repository.JpaRepository;

import de.tub.qds.rm.models.values.ProcessorValue;
import de.tub.qds.rm.models.values.pks.ProcessorValuePK;

public interface ProcessorValueRepo extends JpaRepository<ProcessorValue, ProcessorValuePK> {

}